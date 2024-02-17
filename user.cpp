#include "user.h"
#include <fstream>
#include <string>
#include <cassert>
#include <stack>
#include "message.h"
#include <deque>
#include <vector>
#include <iterator>
#include <list>
using namespace std;
int user::id = 1;
user::user(string username, string pass) {
	p_id = id;
	this->username = username;
	this->pass = pass;
	id++;
}
user::user() {
	p_id = incrementid();
	username = "";
	pass = "";
}
void user::send(user u1, user u2) {
	bool notfound = true;
	string line;
	fstream userfile(username + "Contacts.txt", ios::app | ios::in | ios::out);
	while (getline(userfile, line)) {
		if (line == u2.getUsername()) {
			notfound = false;
			break;
		}
		else
			continue;
	}
	if (notfound == false) {
		string text;
		cout << "Enter your message " << endl;
		cin.ignore();
		getline(cin, text);
		fstream userfile(u2.getUsername() + ".txt", ios::app | ios::in | ios::out);
		assert(userfile.is_open());
		userfile << u1.getID() << " : " << text << endl;
		userfile.close();
		fstream sendinguser;
		sendinguser.open(u1.getUsername() + "sent.txt", ios::app);
		sendinguser << u2.getUsername() << " : " << text << endl;
		sendinguser.close();
	}
	else
		cout << "Contact doesn't exist" << endl;
}


void user::addcontacts(user u2, user u1)
{
	fstream namess("users.txt", ios::app | ios::in | ios::out);
	string line;
	bool isfound = false;
	assert(namess.is_open());
	fstream userfile(u1.username + "Contacts.txt", ios::app | ios::in | ios::out);

	if (checknames(u2.getUsername(), u1))
	{
		cout << "Contact already exists" << endl;
	}
	else {
		while (getline(namess, line))
		{

			if (u2.getUsername().compare(line) == 0)
			{
				userfile << line << endl;
				userfile.close();
				cout << "contact added" << endl;
				isfound = true;
				break;
			}

			else
				continue;
		}
		if (isfound == false)
			cout << "contact doesn't Exist" << endl;
	}
}

bool user::checknames(string name, user u1)
{
	fstream namess("users.txt", ios::app | ios::in | ios::out);
	fstream userfile(u1.username + ".txt", ios::app | ios::in | ios::out);
	string line;
	bool exists = false;
	while (getline(userfile, line))
	{
		if (name.compare(line) == 0)
		{
			exists = true;
			return exists;
		}
		else continue;
	}

	if (exists == false)
		return false;
}

void user::search(user u, user u2) {
	string line;
	bool exists = false;
	fstream userfile(u.username + "Contacts.txt", ios::app | ios::in | ios::out);
	while (getline(userfile, line)) {
		if (u2.getUsername().compare(line) == 0) {
			exists = true;
			break;
		}
	}
	if (exists == false) {
		cout << "contact not found" << endl;
	}
	else
		cout << "contact already exists" << endl;
	userfile.close();
}
void user::viewallusers() {
	string line;
	int counter = 0;
	fstream userfile(username + "Contacts.txt", ios::app | ios::in | ios::out);

	while (getline(userfile, line)) {
		cout << line;
		cout << endl;
		counter++;
	}

	if (counter == 0)
		cout << "No Contacts" << endl << "Please add a contact first" << endl;

	userfile.close();
}
void user::viewallsentmessages() {
	while (!messages.empty()) {
		messages.pop();
	}
	string line;
	fstream userfile(username + "sent.txt", ios::app | ios::in | ios::out);
	while (getline(userfile, line)) {
		messages.push(line);
	}

	if (messages.empty())
	{
		cout << "No sent messages yet!" << endl;
	}

	while (!messages.empty()) {
		cout << messages.top() << endl;
		messages.pop();
	}
	userfile.close();
}

void user::viewallmessages() {
	while (!messages.empty()) {
		messages.pop();
	}
	string line;
	char like;
	fstream userfile(username + ".txt", ios::app | ios::in | ios::out);
	while (getline(userfile, line)) {
		messages.push(line);
	}

	if (messages.empty())
	{
		cout << "No messages yet!" << endl;
		return;
	}

	int counter = 1;
	while (!messages.empty()) {
		cout << counter << " - " << messages.top() << endl;
		messages.pop();
		counter++;
	}
	userfile.close();
	cout << "Do you like to add a message to your favourites y/n " << endl;
	cin >> like;
	if (like == 'y') {
		cout << "choose a message to add to your favourites" << endl;
		int choice;
		cin >> choice;
		/*	if (choice < counter) {
				cout << "wrong number" << endl;
			}
			else*/
		addmessagetofavourites(choice);
	}
	else
		return;
}
void user::addmessagetofavourites(int choice) {
	while (!messages.empty()) {
		messages.pop();
	}
	string line;
	fstream userfile1(username + ".txt", ios::app | ios::in | ios::out);
	while (getline(userfile1, line)) {
		messages.push(line);
	}



	for (int i = 1; i < choice; i++) {
		messages.pop();
	}

	fstream userfile(username + "FavouriteMessages.txt", ios::app | ios::in | ios::out);
	userfile << messages.top() << endl;
	userfile.close();
}
void user::viewfavouritemessages()
{
	while (!messages.empty()) {
		messages.pop();
	}
	string line;
	fstream userfile(username + "FavouriteMessages.txt", ios::app | ios::in | ios::out);
	while (getline(userfile, line)) {
		messages.push(line);

	}

	if (messages.empty())
	{
		cout << "No favourite messages yet!" << endl;
	}

	while (!messages.empty()) {
		cout << messages.top() << endl;
		messages.pop();
	}
	userfile.close();
}
void user::removeoldestmessagefromfavourites() {
	string line;
	ifstream userfile1(username + "FavouriteMessages.txt", ios::app | ios::in);

	while (getline(userfile1, line))
	{
		temporarymessages.push_back(line);
	}

	if (temporarymessages.empty())
	{
		cout << "No favourite message yet!" << endl;
		return;
	}

	userfile1.close();
	ofstream newfile(username + "FavouriteMessages.txt", ios::trunc | ios::out);
	temporarymessages.pop_front();

	while (!temporarymessages.empty())
	{
		newfile << temporarymessages.front() << endl;
		temporarymessages.pop_front();
	}
	cout << "deleted successfully" << endl;
	newfile.close();
}

void user::undo()
{
	list<string> ID_List;
	deque<string> temp;
	string line;
	string sentence;
	string file_name;

	ifstream userfile(username + "sent.txt", ios::app | ios::in);
	while (getline(userfile, line))
	{
		temp.push_back(line);

	}
	if (temp.empty())
	{
		cout << "No messages yet!" << endl;
		return;
	}
	userfile.close();
	file_name = temp.back();
	file_name = file_name.substr(0, file_name.find_first_of(" \t"));
	temp.pop_back();


	ofstream userfile2(username + "sent.txt", ios::trunc | ios::out);
	assert(userfile2.is_open());


	while (!temp.empty())
	{
		userfile2 << temp.front() << endl;
		temp.pop_front();
	}

	userfile2.close();


	//deleting the message from the reciever file 
	int test;
	list<string>::iterator it;
	ifstream undo2(file_name + ".txt", ios::in | ios::out);

	while (getline(undo2, line))
	{
		ID_List.push_front(line);
	}

	for (it = ID_List.begin(); it != ID_List.end(); it++)
	{
		sentence = *it;
		sentence = sentence.substr(0, sentence.find_first_of(" \t"));
		test = stoi(sentence);

		if (this->p_id == test)
		{
			it = ID_List.erase(it);
			break;
		}

	}

	undo2.close();
	ID_List.reverse();
	ofstream remove(file_name + ".txt", ios::trunc | ios::in | ios::out);

	for (it = ID_List.begin(); it != ID_List.end(); it++)
	{
		remove << *it;
		remove << endl;
	}
}
void user::viewallmessagesfromspecificperson(user u) {
	while (!messages.empty()) {
		messages.pop();
	}
	list<string> ID_List;
	deque<string> temp;
	string line;
	string sentence;
	string file_name;
	int test;
	list<string>::iterator it;
	ifstream view(username + ".txt", ios::in | ios::out);

	while (getline(view, line))
	{
		ID_List.push_front(line);
	}

	if (ID_List.empty())
	{
		cout << "No messages from this ID" << endl;
		return;
	}

	for (it = ID_List.begin(); it != ID_List.end(); it++)
	{
		sentence = *it;
		sentence = sentence.substr(0, sentence.find_first_of(" \t"));
		test = stoi(sentence);

		if (u.p_id != test)
		{
			it = ID_List.erase(it);
			break;
		}

	}

	view.close();
	for (it = ID_List.begin(); it != ID_List.end(); it++)
	{
		cout << *it << endl;
	}
}
void user::setUsername(string uName)
{
	username = uName;
}

void user::setpassword(string password)
{
	pass = password;
}

string user::getUsername()
{
	return username;
}

string user::getPassword()
{
	return pass;
}

void user::setID(int ID) {
	p_id = ID;
}

int user::getID() {
	return p_id;
}

int user::incrementid() {
	fstream file("users.txt", ios::in | ios::out);
	string line;
	int id;
	while (!file.eof()) {
		getline(file, line);
	}
	file.close();
	if (line.size() == 0)
		return 1;
	line = line.substr(0, line.find_first_of(" \t"));
	id = stoi(line);
	id++;
	return id;
}