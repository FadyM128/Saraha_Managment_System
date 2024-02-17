#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include<conio.h>
#include<list>
#include <cassert>
#include <iterator>
//#include "message.h"
using namespace std;
class user
{
private:
	string username;
	string pass;
	vector<user> contact;
	
	
public:
	deque <string> temporarymessages;
	stack <string> messages;
	static int id;
	int p_id;
	user();
	user(string username, string pass);
	string getUsername();
	string getPassword();
	int incrementid();
	void setID(int ID);
	int getID();
	void setUsername(string uName);
	void setpassword(string password);


	bool checknames(string name, user u1);
	void search(user u, user u2);
	//done
	void send(user u1, user u2);
	void viewallusers();
	void viewallmessages();
	void viewallsentmessages();
	void viewfavouritemessages();
	void removeoldestmessagefromfavourites();
	void undo();
	void addcontacts(user u2, user u1);
	void addmessagetofavourites(int choice);
	
	
	void viewallmessagesfromspecificperson(user u);
	
};



