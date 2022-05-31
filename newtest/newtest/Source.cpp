#include <iostream>
#include <fstream>
#include <string>
#include "user.h"
#include <vector>
#include <stack>
#include <queue>
#include<conio.h>
using namespace std;
user login();
bool regster();
user returneduser();
user recieveduser();
bool checkuser(string);

fstream file("users.txt", ios::in | ios::out | ios::app);
int main() {

	bool end = false;
	int firstchoice;
	int choice;
	bool flag = false;
	user newuser;
	cout << "1 : login" << endl;
	cout << "2 : Register" << endl;
	cin >> firstchoice;
	switch (firstchoice)
	{
	case 1:
		newuser = login();
		break;
	case 2:
		while (regster() == true)
		{
			cout << "1 : Login" << endl;
			cout << "2 : Register" << endl;
			cin >> firstchoice;
			switch (firstchoice)
			{
			case 1:
				system("cls");
				cout << "Login : " << endl;
				newuser = login();
				flag = true;
				break;
			case 2:
				cout << "Register : " << endl;
				regster();
				flag = true;
				break;

			}
			if (flag == true)
				break;

		}
	}
	system("CLS");
	while (true)
	{
		char cont;
		cout << "1 : send message " << endl;
		cout << "2 : add new contact " << endl;
		cout << "3 : register" << endl;
		cout << "4 : search" << endl;
		cout << "5 : view Contacts" << endl;
		cout << "6 : view all sent messages" << endl;
		cout << "7 : view all messages" << endl;
		cout << "8 : view favourite messages" << endl;
		cout << "9: remove the oldest favourite message" << endl;
		cout << "10 : Undo the last sent message" << endl;
		cout << "11 : view messages from specific contact" << endl;
		cin >> choice;
		if (choice == 1)
		{
			newuser.send(newuser, returneduser());
		}
		switch (choice)
		{
		case 2:
			newuser.addcontacts(returneduser(), newuser);
			break;
		case 3:
			regster();
			break;
		case 4:
			newuser.search(newuser, returneduser());
			break;
		case 5:
			newuser.viewallusers();
			break;
		case 6:
			newuser.viewallsentmessages();
			break;
		case 7:
			newuser.viewallmessages();
			break;
		case 8:
			newuser.viewfavouritemessages();
			break;
		case 9:
			newuser.removeoldestmessagefromfavourites();
			break;
		case 10:
			newuser.undo();
			break;
		case 11:
			newuser.viewallmessagesfromspecificperson(recieveduser());
			break;
		}
		cout << "Would you like to continue y/n" << endl;
		cin >> cont;
		system("CLS");
		if (cont == 'n')
			break;
	}
}

bool regster()
{
	user registeruser;
	string username;
	string passwordd;
	fstream file("users.txt", ios::in | ios::out | ios::app);
	char ch = 0;
	string password;
	string passConfirmation = "";

	cout << "Enter username: ";
	cin >> username;
	registeruser.setUsername(username);
	cout << "Enter password: ";
	bool exists = checkuser(username);
	while (true)
	{
		ch = _getch();
		if (ch == '\r')
		{
			break;
		}
		cout << "*";
		password += ch;
	}

	cout << "\nconfirm your password: ";
	ch = 0;
	while (true)
	{
		while (true)
		{
			ch = _getch();
			if (ch == '\r')
			{
				break;
			}
			cout << "*";
			passConfirmation += ch;
		}
		if (exists == true)
		{
			cout << endl << "User already Exists!" << endl;
			return exists;
		}
		else {
			if (password != passConfirmation)
			{
				passConfirmation = "";
				cout << "\nNot correct!" << endl;
				cout << "Please, Enter it again: ";
			}
			else
			{
				cout << "\nRegistered successfully!" << endl;
				passwordd = password;
				registeruser.setpassword(passwordd);
				file << "\n" << username << endl;
				file << passwordd << endl;
				file << registeruser.p_id;
				file.close();
				fstream newfile(username + ".txt", ios::app | ios::in | ios::out);
				newfile.close();
				break;
			}
		}
	}
	return exists;
}
user login()
{
	fstream file("users.txt", ios::in | ios::out);
	user u;
	string username;
	string password;
	char ch;
	int ID;
	bool logged = false;


	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	while (true)
	{
		ch = _getch();
		if (ch == '\r')
		{
			break;
		}
		if (ch == 8)
		{
			if (!password.empty())
			{
				cout << "\b" << " " << '\b';
				password.pop_back();
			}
		}
		else
		{
			cout << "*";
			password += ch;
		}
	}

	string line;
	getline(file, line);
	while (!file.eof())
	{
		string line;
		getline(file, line);
		if (line == username)
		{
			getline(file, line);
			if (line == password)
			{
				logged = true;
				getline(file, line);
				ID = stoi(line);
				break;
			}
		}
		else
		{
			getline(file, line);
			getline(file, line);
		}
	}
	file.close();

	if (logged)
	{
		cout << "\nlogged in successfully!" << endl;
		u.setUsername(username);
		u.setpassword(password);
		u.setID(ID);

	}
	else
	{
		int answer;

		cout << "\nSorry, Username or Password are Incorrect!" << endl;
		cout << "Do you Want to try again?" << endl;
		cout << "1. Yes\n2. No" << endl;
		cin >> answer;

		while (true)
		{
			if (answer == 1)
			{
				u = login();
				break;
			}
			else if (answer == 2)
			{
				system("cls");
				main();
			}

		}

	}
	return u;
}
user returneduser() {
	ifstream file("users.txt");
	user ruser;
	int ID = 0;
	string username;
	cout << "Enter username" << endl;
	cin >> username;
	string password;
	while (!file.eof())
	{
		string line;
		getline(file, line);
		if (line == username)
		{
			getline(file, line);
			password = line;
			getline(file, line);
			ID = stoi(line);
			break;
		}
		else
		{
			getline(file, line);
			getline(file, line);
		}
	}
	ruser.setUsername(username);
	ruser.setpassword(password);
	ruser.setID(ID);
	file.close();


	return ruser;
}
user recieveduser() {
	fstream file("users.txt", ios::in | ios::out);
	user ruser;
	string line;
	int ID = 0;
	string username;
	cout << "Enter ID" << endl;
	cin >> ID;
	string password;
	getline(file, line);
	while (!file.eof())
	{
		getline(file, line);
		getline(file, line);
		getline(file, line);
		if (stoi(line) == ID - 1)
		{
			getline(file, line);
			username = line;
			getline(file, line);
			password = line;
			break;
		}
	}
	ruser.setUsername(username);
	ruser.setpassword(password);
	ruser.setID(ID);
	file.close();
	return ruser;
}

bool checkuser(string user)
{
	string line;
	bool exists = false;
	fstream userfile("users.txt", ios::app | ios::in | ios::out);

	getline(userfile, line);

	while (getline(userfile, line))
	{

		if (user == line) {
			exists = true;
			break;
		}
		getline(userfile, line);
		getline(userfile, line);
	}
	if (exists == false)
	{
		userfile.close();
		return false;
	}
	else
	{
		userfile.close();
		return true;
	}


}