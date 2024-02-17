#include "MyForm.h"
#include"user.h"
#include"global.h"
using namespace System;
using namespace Globals;
fstream file("users.txt", ios::in | ios::out | ios::app);

// Register button 
System::Void DSproject ::MyForm:: button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_reg->Text == "" || pass_reg->Text == "" || confirm_reg->Text == "") {
		MessageBox::Show("Please Enter Username and Password");
	}
	else {
		user registeruser;
		string username = cliToSTD(user_reg->Text);
		string password = cliToSTD(pass_reg->Text);
		string passConfirmation = cliToSTD(confirm_reg->Text);
		// check name
		string line;
		bool exists = false;
		fstream userfile("users.txt", ios::app | ios::in | ios::out);

		getline(userfile, line);

		while (getline(userfile, line))
		{

			if (username == line) {
				exists = true;
				break;
			}
			getline(userfile, line);
			getline(userfile, line);
		}
		if (exists == false)
		{
			userfile.close();

			// register
			fstream file("users.txt", ios::in | ios::out | ios::app);

			registeruser.setUsername(username);

			if (password != passConfirmation)
			{
				MessageBox::Show("Error in Confirmation");

			}
			else
			{
				MessageBox::Show("Registered Succefully");

				registeruser.setpassword(password);
				file << "\n" << username << endl;
				file << password << endl;
				file << registeruser.p_id;
				file.close();
				fstream newfile(username + ".txt", ios::app | ios::in | ios::out);
				newfile.close();
			}


			user_reg->Text = "";
			pass_reg->Text = "";
			confirm_reg->Text = "";
		}
		else
		{
			userfile.close();
			MessageBox::Show("This Username Exists!!!");
			user_reg->Text = "";
			pass_reg->Text = "";
			confirm_reg->Text = "";
		}



	}
}

// Global user

user u;
// Login button 

System::Void DSproject::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	fstream file("users.txt", ios::in | ios::out);
	string line;
	string username= cliToSTD(user_login->Text);
	string password = cliToSTD(pass_login->Text);
	getline(file, line);
	int ID;
	bool logged = false;
	int indenx_of_message=0;
	string tmp;
	//string line1;
	//getline(file, line1);
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
		MessageBox::Show("Logged Successfully");
		user_login->Text = "";
		pass_login->Text = "";
		u.setUsername(username);
		u.setpassword(password);
		u.setID(ID);
		Home->BringToFront();

		while (!u.messages.empty()) {
			u.messages.pop();
		}
		string line;
		fstream userfile(u.getUsername() + ".txt", ios::app | ios::in | ios::out);
		while (getline(userfile, line)) {
			u.messages.push(line);

		}
		int counter = 1;
		while (!u.messages.empty()) {
			String^ mess = stdToCLI(u.messages.top());
			u.messages.pop();
			counter++;
			lv = gcnew Windows::Forms::ListViewItem(mess);
			//lv->SubItems->Add(mess);
			this->listView1->Items->Add(this->lv);
			indenx_of_message++;
			tmp = to_string(indenx_of_message);
			comboBox3->Items->Add(stdToCLI(tmp));

		}
		userfile.close();

		// view all user


		string line2;
		fstream userfile1(u.getUsername() + "Contacts.txt", ios::app | ios::in | ios::out);
		while (getline(userfile1, line2)) {
			comboBox1->Items->Add(stdToCLI(line2));
		}
		userfile1.close();


		// view all sent messages
		while (!u.messages.empty()) {
			u.messages.pop();
		}
		string line3;
		fstream userfile2(u.getUsername() + "sent.txt", ios::app | ios::in | ios::out);
		while (getline(userfile2, line3)) {
			u.messages.push(line3);
		}
		while (!u.messages.empty())
		{
			String^ m = stdToCLI(u.messages.top());
			lv = gcnew Windows::Forms::ListViewItem(m);
			
			this->listView2->Items->Add(this->lv);
			u.messages.pop();

		}
		userfile2.close();

		// view all fav messages

		while (!u.messages.empty()) {
			u.messages.pop();
		}
		string line4;
		fstream userfile3(u.getUsername() + "Favourites.txt", ios::app | ios::in | ios::out);
		while (getline(userfile3, line4)) {
			u.messages.push(line4);
		}
		while (!u.messages.empty())
		{
			String^ m2 = stdToCLI(u.messages.top());
			lv = gcnew Windows::Forms::ListViewItem(m2);

			this->listView3->Items->Add(this->lv);
			u.messages.pop();
		}
		userfile3.close();




	}
	else
	{
		
		MessageBox::Show("Invaild Username Or Password!!!");
		user_login->Text = "";
		pass_login->Text = "";

	}

	
}
// Register Button in login page
System::Void DSproject::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
   
	Reg->BringToFront();
}
// Button home in main page
System::Void DSproject::MyForm::button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	medhet->BringToFront();
	
}
// Button Fav in main page
System::Void DSproject::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	fav->BringToFront();
}
// Button Sent panel  in main page
System::Void DSproject::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	sent->BringToFront();
}

// Button send that bring send panel to front  
System::Void DSproject::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	button10->Enabled = false;
	send->BringToFront();
}
// send message for specific user 
System::Void  DSproject::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	if (textBox1->Text == "" || comboBox1->SelectedIndex == -1) {

			MessageBox::Show("Please, Enter Your Message and Contact  ");


		}
		else {
		    string text = cliToSTD(textBox1->Text);
			
			string contact = cliToSTD(comboBox1->SelectedItem->ToString());


			fstream userfile(contact + ".txt", ios::app | ios::in | ios::out);
			assert(userfile.is_open());
			userfile << u.getID() << " : " << text << endl;
			userfile.close();
			fstream sendinguser;
			sendinguser.open(u.getUsername() + "sent.txt", ios::app);
			sendinguser << contact << " : " << text << endl;
			sendinguser.close();
			listView2->Items->Clear();
			// view all sent messages
			while (!u.messages.empty()) {
				u.messages.pop();
			}
			string line3;
			fstream userfile2(u.getUsername() + "sent.txt", ios::app | ios::in | ios::out);
			while (getline(userfile2, line3)) {
				u.messages.push(line3);
			}
			while (!u.messages.empty())
			{
				String^ m = stdToCLI(u.messages.top());
				lv = gcnew Windows::Forms::ListViewItem(m);

				this->listView2->Items->Add(this->lv);
				u.messages.pop();
			}
			userfile2.close();
		}
	textBox1->Text = "";
	comboBox1->SelectedIndex = -1;
}

// search or choose the contactp 
System::Void  DSproject::MyForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true) {
		 
		textBox2->Enabled = true;
		comboBox1->Enabled = false;
		button10->Enabled = true;

	}
	else {
		textBox2->Enabled = false;
		comboBox1->Enabled = true;
		button10->Enabled = false;
	}
      
}

// add contact 
System::Void DSproject::MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e) {

	fstream namess("users.txt", ios::app | ios::in | ios::out);
	string line;
	bool isfound = false;
	assert(namess.is_open());
	fstream userfile(u.getUsername() + "Contacts.txt", ios::app | ios::in | ios::out);
	if (textBox2->Text == "") {

		MessageBox::Show("Please Enter a Contact");

	}
	else {

		if (u.checknames(cliToSTD(textBox2->Text), u))
		{
			MessageBox::Show("Contact Already Exists");
		}
		else {
			while (getline(namess, line))
			{

				if (cliToSTD(textBox2->Text).compare(line) == 0)
				{
					userfile << line << endl;
					userfile.close();
					MessageBox::Show("Contact Added");
					comboBox1->Items->Add(textBox2->Text);
					isfound = true;
					break;
				}

				else
					continue;
			}
			if (isfound == false)
				MessageBox::Show("Contact Doesn't Exist");
		}
	}
	textBox2->Text = "";


}

// remove oldest message from fav 

System::Void DSproject::MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e) {
	
	string line;
	ifstream userfile1(u.getUsername () + "Favourites.txt", ios::app | ios::in);

	while (getline(userfile1, line))
	{
		u.temporarymessages.push_back(line);
	}
	if (u.temporarymessages.empty()) {

		MessageBox::Show(" No Messages Yet");
		return;
	}

	userfile1.close();
	ofstream newfile(u.getUsername() + "Favourites.txt", ios::trunc | ios::out);
	u.temporarymessages.pop_front();

	while (!u.temporarymessages.empty())
	{
		newfile << u.temporarymessages.front() << endl;
		u.temporarymessages.pop_front();
	}
	
	
	newfile.close();
	MessageBox::Show("Deleted Successfully");
	listView3->Items->Clear();

	// view all fav messages

	while (!u.messages.empty()) {
		u.messages.pop();
	}
	string line4;
	fstream userfile3(u.getUsername() + "Favourites.txt", ios::app | ios::in | ios::out);
	while (getline(userfile3, line4)) {
		u.messages.push(line4);
	}
	while (!u.messages.empty())
	{
		String^ m2 = stdToCLI(u.messages.top());
		lv = gcnew Windows::Forms::ListViewItem(m2);

		this->listView3->Items->Add(this->lv);
		u.messages.pop();
	}
	userfile3.close();


  
}

// undo function
System::Void DSproject::MyForm::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	list<string> ID_List;
	deque<string> temp;
	string line;
	string sentence;
	string file_name;

	ifstream userfile(u.getUsername() + "sent.txt", ios::app | ios::in);
	while (getline(userfile, line))
	{
		temp.push_back(line);

	}
	if (temp.empty()) {

		MessageBox::Show(" No Message Yet");
		return;
	}

	userfile.close();
	file_name = temp.back();
	file_name = file_name.substr(0, file_name.find_first_of(" \t"));
	temp.pop_back();


	ofstream userfile2(u.getUsername() + "sent.txt", ios::trunc | ios::out);
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

		if (u.p_id == test)
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
	 

	listView2->Items->Clear();
	// view all sent messages
	while (!u.messages.empty()) {
		u.messages.pop();
	}
	string line3;
	fstream userfile10(u.getUsername() + "sent.txt", ios::app | ios::in | ios::out);
	while (getline(userfile10, line3)) {
		u.messages.push(line3);
	}
	while (!u.messages.empty())
	{
		String^ m = stdToCLI(u.messages.top());
		lv = gcnew Windows::Forms::ListViewItem(m);

		this->listView2->Items->Add(this->lv);
		u.messages.pop();
	}
	userfile2.close();

}
// clear text message
System::Void DSproject::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";

}
//add message to fav
System::Void DSproject::MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e) {
	// check name
	if (comboBox3->SelectedIndex == -1) {
		MessageBox::Show("Please Select Index");

	}
	else {
		string line2;
		string  line50;
		bool exists = false;
		stack <string> tmp;
		fstream userfile2(u.getUsername() + ".txt", ios::app | ios::in | ios::out);


		string choice = cliToSTD(comboBox3->SelectedItem->ToString());
		while (!u.messages.empty()) {
			u.messages.pop();
		}
		while (getline(userfile2, line2)) {
			u.messages.push(line2);
		}
		for (int i = 1; i < stoi(choice); i++) {
			u.messages.pop();
		}

		string message = u.messages.top();
		fstream favfile(u.getUsername() + "Favourites.txt", ios::app | ios::in | ios::out);
		while (getline(favfile, line50)) {
			if (message == line50) {
				exists = true;

			}
		}

		favfile.close();
		userfile2.close();
		if (exists == false)
		{


			// add to fav
			if (comboBox3->SelectedIndex == -1) {
				MessageBox::Show("Please Select Item");
			}
			else {

				while (!u.messages.empty()) {
					u.messages.pop();
				}
				string line;
				fstream userfile1(u.getUsername() + ".txt", ios::app | ios::in | ios::out);
				while (getline(userfile1, line)) {
					u.messages.push(line);
				}
				for (int i = 1; i < stoi(choice); i++) {
					u.messages.pop();
				}

				fstream userfile(u.getUsername() + "Favourites.txt", ios::app | ios::in | ios::out);
				userfile << u.messages.top() << endl;
				userfile.close();
				listView3->Items->Clear();

				// view all fav messages

				while (!u.messages.empty()) {
					u.messages.pop();
				}
				string line4;
				fstream userfile3(u.getUsername() + "Favourites.txt", ios::app | ios::in | ios::out);
				while (getline(userfile3, line4)) {
					u.messages.push(line4);
				}
				while (!u.messages.empty())
				{
					String^ m2 = stdToCLI(u.messages.top());
					lv = gcnew Windows::Forms::ListViewItem(m2);

					this->listView3->Items->Add(this->lv);
					u.messages.pop();
				}
				comboBox3->SelectedIndex = -1;
				MessageBox::Show("Added Successfully");
				userfile3.close();
			}
		}
		else {
			comboBox3->SelectedIndex = -1;
			MessageBox::Show("Messsage is Already in Favourites");
		}

	}

}


//view message for specific user
System::Void DSproject::MyForm::button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "") {

		MessageBox::Show("Please Enter ID");
	}
	else {
		listView1->Items->Clear();
		while (!u.messages.empty())
		{
			u.messages.pop();
		}

		list<string> ID_List;
		string line;
		string sentence;
		int test;
		list<string>::iterator it;
		bool empty = false;
		int id = stoi(cliToSTD(textBox3->Text));

		ifstream view(u.getUsername() + ".txt", ios::in | ios::out);

		while (getline(view, line))
		{
			ID_List.push_front(line);
		}


		for (it = ID_List.begin(); it != ID_List.end(); it++)
		{
			sentence = *it;
			sentence = sentence.substr(0, sentence.find_first_of(" \t"));
			test = stoi(sentence);

			if (id == test)
			{
				lv = gcnew Windows::Forms::ListViewItem(stdToCLI(*it));

				this->listView1->Items->Add(this->lv);

				empty = true;
				continue;

			}

		}

		view.close();

		if (empty == false)
			MessageBox::Show("No Messages From this ID");
	}
}



// view all message again
System::Void DSproject::MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Items->Clear();

	while (!u.messages.empty()) {
		u.messages.pop();
	}
	string line;
	
	fstream userfile(u.getUsername() + ".txt", ios::app | ios::in | ios::out);
	while (getline(userfile, line)) {
		u.messages.push(line);

	}
	
	while (!u.messages.empty()) {
		String^ mess = stdToCLI(u.messages.top());
		u.messages.pop();
		
		lv = gcnew Windows::Forms::ListViewItem(mess);
		//lv->SubItems->Add(mess);
		this->listView1->Items->Add(this->lv);
		

	}
	userfile.close();

}
// button bring login panel to front in reg panel
System::Void  DSproject::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	login->BringToFront();
}
// button log out
System::Void DSproject::MyForm::button16_Click(System::Object^ sender, System::EventArgs^ e) {

	login->BringToFront();
	listView1->Items->Clear();
	listView2->Items->Clear();
	listView3->Items->Clear();
	comboBox3->Items->Clear();
	comboBox1->Items->Clear();
	textBox3->Text = "";
}

// button cerdit
System::Void DSproject::MyForm::button17_Click(System::Object^ sender, System::EventArgs^ e) {
	about->BringToFront();
}
// button home in cerdits 
System::Void DSproject::MyForm::button18_Click(System::Object^ sender, System::EventArgs^ e) {
	Home->BringToFront();
}