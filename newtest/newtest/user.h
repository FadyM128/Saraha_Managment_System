#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include<conio.h>

using namespace std;
class user
{
private:
	string username;
	string pass;
	vector<user> contact;
	stack <string> messages;
	deque <string> temporarymessages;
public:
	static int id;
	int p_id;
	user();
	user(string username, string pass);
	void setUsername(string uName);
	void setpassword(string password);
	string getUsername();
	string getPassword();
	void setID(int ID);
	int getID();


	int incrementid();

	void addcontacts(user u2, user u1);
	void send(user u1, user u2);
	void undo();
	void search(user u, user u2);
	void viewallusers();
	void viewallsentmessages();
	void viewallmessagesfromspecificperson(user u);
	void addmessagetofavourites(int choice);
	void removeoldestmessagefromfavourites();
	void viewfavouritemessages();

	void viewallmessages();
	bool checknames(string name, user u1);
	
};
	



