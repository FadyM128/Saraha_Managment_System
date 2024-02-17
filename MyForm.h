#pragma once

namespace DSproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:	System::Windows::Forms::ListViewItem^ lv;
	private: System::Windows::Forms::Panel^ login;
	protected:





	private: System::Windows::Forms::Panel^ Reg;
	private: System::Windows::Forms::Panel^ Home;




	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ signup_but;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ confirm_reg;

	private: System::Windows::Forms::TextBox^ pass_reg;

	private: System::Windows::Forms::TextBox^ user_reg;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ pass_login;
	private: System::Windows::Forms::TextBox^ user_login;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ sent;
	private: System::Windows::Forms::Panel^ fav;
	private: System::Windows::Forms::Panel^ send;


	private  : System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Message;
	private: System::Windows::Forms::Panel^ medhet;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ListView^ listView3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Panel^ about;
	private: System::Windows::Forms::Button^ button18;


	private: System::ComponentModel::IContainer^ components;

	public:





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->login = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pass_login = (gcnew System::Windows::Forms::TextBox());
			this->user_login = (gcnew System::Windows::Forms::TextBox());
			this->Reg = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->signup_but = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->confirm_reg = (gcnew System::Windows::Forms::TextBox());
			this->pass_reg = (gcnew System::Windows::Forms::TextBox());
			this->user_reg = (gcnew System::Windows::Forms::TextBox());
			this->Home = (gcnew System::Windows::Forms::Panel());
			this->medhet = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Message = (gcnew System::Windows::Forms::ColumnHeader());
			this->send = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->fav = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->sent = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->about = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->login->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->Reg->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->Home->SuspendLayout();
			this->medhet->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->send->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->fav->SuspendLayout();
			this->sent->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->about->SuspendLayout();
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login.BackgroundImage")));
			this->login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->login->Controls->Add(this->groupBox1);
			this->login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->login->Location = System::Drawing::Point(0, 0);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(859, 629);
			this->login->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->pass_login);
			this->groupBox1->Controls->Add(this->user_login);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"NSimSun", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Beige;
			this->groupBox1->Location = System::Drawing::Point(108, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(597, 435);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign in";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Beige;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(289, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 41);
			this->button2->TabIndex = 5;
			this->button2->Text = L"sign up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Beige;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(115, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 41);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Beige;
			this->label2->Location = System::Drawing::Point(70, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Beige;
			this->label1->Location = System::Drawing::Point(70, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username";
			// 
			// pass_login
			// 
			this->pass_login->BackColor = System::Drawing::Color::Beige;
			this->pass_login->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_login->Location = System::Drawing::Point(239, 194);
			this->pass_login->Name = L"pass_login";
			this->pass_login->PasswordChar = '*';
			this->pass_login->Size = System::Drawing::Size(257, 30);
			this->pass_login->TabIndex = 1;
			this->pass_login->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// user_login
			// 
			this->user_login->BackColor = System::Drawing::Color::Beige;
			this->user_login->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_login->ForeColor = System::Drawing::Color::Black;
			this->user_login->Location = System::Drawing::Point(239, 113);
			this->user_login->Name = L"user_login";
			this->user_login->Size = System::Drawing::Size(256, 30);
			this->user_login->TabIndex = 0;
			// 
			// Reg
			// 
			this->Reg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Reg.BackgroundImage")));
			this->Reg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Reg->Controls->Add(this->groupBox2);
			this->Reg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Reg->Location = System::Drawing::Point(0, 0);
			this->Reg->Name = L"Reg";
			this->Reg->Size = System::Drawing::Size(859, 629);
			this->Reg->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->signup_but);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->confirm_reg);
			this->groupBox2->Controls->Add(this->pass_reg);
			this->groupBox2->Controls->Add(this->user_reg);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"NSimSun", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::Linen;
			this->groupBox2->Location = System::Drawing::Point(124, 80);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(581, 403);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sign up";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Salmon;
			this->button4->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(292, 301);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 38);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Login";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// signup_but
			// 
			this->signup_but->BackColor = System::Drawing::Color::Salmon;
			this->signup_but->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_but->Location = System::Drawing::Point(115, 301);
			this->signup_but->Name = L"signup_but";
			this->signup_but->Size = System::Drawing::Size(126, 38);
			this->signup_but->TabIndex = 6;
			this->signup_but->Text = L"sign up";
			this->signup_but->UseVisualStyleBackColor = false;
			this->signup_but->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(236, 28);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Confirm Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 28);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"NSimSun", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 28);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Username";
			// 
			// confirm_reg
			// 
			this->confirm_reg->BackColor = System::Drawing::Color::Salmon;
			this->confirm_reg->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_reg->Location = System::Drawing::Point(267, 219);
			this->confirm_reg->Name = L"confirm_reg";
			this->confirm_reg->PasswordChar = '*';
			this->confirm_reg->Size = System::Drawing::Size(235, 31);
			this->confirm_reg->TabIndex = 2;
			// 
			// pass_reg
			// 
			this->pass_reg->BackColor = System::Drawing::Color::Salmon;
			this->pass_reg->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_reg->Location = System::Drawing::Point(267, 157);
			this->pass_reg->Name = L"pass_reg";
			this->pass_reg->PasswordChar = '*';
			this->pass_reg->Size = System::Drawing::Size(235, 31);
			this->pass_reg->TabIndex = 1;
			// 
			// user_reg
			// 
			this->user_reg->BackColor = System::Drawing::Color::Salmon;
			this->user_reg->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_reg->ForeColor = System::Drawing::Color::Black;
			this->user_reg->Location = System::Drawing::Point(267, 90);
			this->user_reg->Name = L"user_reg";
			this->user_reg->Size = System::Drawing::Size(235, 31);
			this->user_reg->TabIndex = 0;
			// 
			// Home
			// 
			this->Home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home.BackgroundImage")));
			this->Home->Controls->Add(this->sent);
			this->Home->Controls->Add(this->medhet);
			this->Home->Controls->Add(this->send);
			this->Home->Controls->Add(this->fav);
			this->Home->Controls->Add(this->flowLayoutPanel1);
			this->Home->Location = System::Drawing::Point(0, 0);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(859, 629);
			this->Home->TabIndex = 0;
			// 
			// medhet
			// 
			this->medhet->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"medhet.BackgroundImage")));
			this->medhet->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->medhet->Controls->Add(this->button17);
			this->medhet->Controls->Add(this->button16);
			this->medhet->Controls->Add(this->groupBox5);
			this->medhet->Controls->Add(this->groupBox4);
			this->medhet->Controls->Add(this->button7);
			this->medhet->Controls->Add(this->listView1);
			this->medhet->Dock = System::Windows::Forms::DockStyle::Fill;
			this->medhet->Location = System::Drawing::Point(0, 84);
			this->medhet->Name = L"medhet";
			this->medhet->Size = System::Drawing::Size(859, 545);
			this->medhet->TabIndex = 1;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button17->Font = (gcnew System::Drawing::Font(L"NSimSun", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(3, 509);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(74, 33);
			this->button17->TabIndex = 14;
			this->button17->Text = L"Credits";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightCoral;
			this->button16->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(738, 476);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(109, 42);
			this->button16->TabIndex = 13;
			this->button16->Text = L"Log out";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->button13);
			this->groupBox5->Controls->Add(this->comboBox3);
			this->groupBox5->Location = System::Drawing::Point(398, 60);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(273, 83);
			this->groupBox5->TabIndex = 12;
			this->groupBox5->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"NSimSun", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Window;
			this->label8->Location = System::Drawing::Point(6, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 18);
			this->label8->TabIndex = 4;
			this->label8->Text = L"add to fav";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightCoral;
			this->button13->Font = (gcnew System::Drawing::Font(L"NSimSun", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(185, 43);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(82, 25);
			this->button13->TabIndex = 5;
			this->button13->Text = L"add";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Silver;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"NSimSun", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(5, 43);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(159, 21);
			this->comboBox3->TabIndex = 3;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->button15);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->button14);
			this->groupBox4->Location = System::Drawing::Point(398, 159);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(273, 111);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox3->Location = System::Drawing::Point(47, 18);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::LightCoral;
			this->button15->Font = (gcnew System::Drawing::Font(L"NSimSun", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::Window;
			this->button15->Location = System::Drawing::Point(150, 55);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(101, 35);
			this->button15->TabIndex = 9;
			this->button15->Text = L"view all";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"NSimSun", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(15, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 17);
			this->label9->TabIndex = 7;
			this->label9->Text = L"ID";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightCoral;
			this->button14->Font = (gcnew System::Drawing::Font(L"NSimSun", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::Window;
			this->button14->Location = System::Drawing::Point(18, 59);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(101, 35);
			this->button14->TabIndex = 8;
			this->button14->Text = L"view ";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightCoral;
			this->button7->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(547, 476);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(185, 42);
			this->button7->TabIndex = 1;
			this->button7->Text = L"send message";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::IndianRed;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->Message });
			this->listView1->Font = (gcnew System::Drawing::Font(L"NSimSun", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->ForeColor = System::Drawing::SystemColors::Window;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(30, 60);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(286, 310);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// Message
			// 
			this->Message->Text = L"Message";
			this->Message->Width = 281;
			// 
			// send
			// 
			this->send->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"send.BackgroundImage")));
			this->send->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->send->Controls->Add(this->groupBox3);
			this->send->Dock = System::Windows::Forms::DockStyle::Fill;
			this->send->Location = System::Drawing::Point(0, 84);
			this->send->Name = L"send";
			this->send->Size = System::Drawing::Size(859, 545);
			this->send->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(135, 53);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(560, 382);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightCoral;
			this->button10->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Window;
			this->button10->Location = System::Drawing::Point(404, 41);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 38);
			this->button10->TabIndex = 8;
			this->button10->Text = L"Add ";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(66, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(311, 30);
			this->textBox2->TabIndex = 7;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Location = System::Drawing::Point(66, 211);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(164, 27);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Add Contact";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Salmon;
			this->button9->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Window;
			this->button9->Location = System::Drawing::Point(288, 288);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(151, 38);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Clear";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Salmon;
			this->button8->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Window;
			this->button8->Location = System::Drawing::Point(64, 288);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(151, 38);
			this->button8->TabIndex = 4;
			this->button8->Text = L"send";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(212, 161);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 30);
			this->textBox1->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(206, 106);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(171, 28);
			this->comboBox1->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Window;
			this->label7->Location = System::Drawing::Point(63, 161);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 23);
			this->label7->TabIndex = 2;
			this->label7->Text = L"message";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(60, 111);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 23);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Contacts";
			// 
			// fav
			// 
			this->fav->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fav.BackgroundImage")));
			this->fav->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->fav->Controls->Add(this->button11);
			this->fav->Controls->Add(this->listView3);
			this->fav->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fav->Location = System::Drawing::Point(0, 84);
			this->fav->Name = L"fav";
			this->fav->Size = System::Drawing::Size(859, 545);
			this->fav->TabIndex = 0;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightCoral;
			this->button11->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::Window;
			this->button11->Location = System::Drawing::Point(102, 441);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(214, 48);
			this->button11->TabIndex = 1;
			this->button11->Text = L"Remove oldest ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// listView3
			// 
			this->listView3->BackColor = System::Drawing::Color::IndianRed;
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->listView3->ForeColor = System::Drawing::SystemColors::Window;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(22, 23);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(335, 391);
			this->listView3->TabIndex = 0;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Fav Messages";
			this->columnHeader1->Width = 330;
			// 
			// sent
			// 
			this->sent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sent.BackgroundImage")));
			this->sent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sent->Controls->Add(this->button12);
			this->sent->Controls->Add(this->listView2);
			this->sent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sent->Location = System::Drawing::Point(0, 84);
			this->sent->Name = L"sent";
			this->sent->Size = System::Drawing::Size(859, 545);
			this->sent->TabIndex = 0;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightCoral;
			this->button12->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::Window;
			this->button12->Location = System::Drawing::Point(92, 439);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(194, 50);
			this->button12->TabIndex = 1;
			this->button12->Text = L"undo";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// listView2
			// 
			this->listView2->BackColor = System::Drawing::Color::IndianRed;
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader2 });
			this->listView2->Font = (gcnew System::Drawing::Font(L"NSimSun", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView2->ForeColor = System::Drawing::SystemColors::Window;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(12, 50);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(345, 364);
			this->listView2->TabIndex = 0;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Sent Message";
			this->columnHeader2->Width = 339;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(859, 84);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCoral;
			this->button3->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(3, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(283, 81);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Home";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightCoral;
			this->button5->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Window;
			this->button5->Location = System::Drawing::Point(292, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(250, 81);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Fav Message ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightCoral;
			this->button6->Font = (gcnew System::Drawing::Font(L"NSimSun", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Window;
			this->button6->Location = System::Drawing::Point(548, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(308, 81);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Sent Message";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// about
			// 
			this->about->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"about.BackgroundImage")));
			this->about->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->about->Controls->Add(this->button18);
			this->about->Dock = System::Windows::Forms::DockStyle::Fill;
			this->about->Location = System::Drawing::Point(0, 0);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(859, 629);
			this->about->TabIndex = 2;
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::NavajoWhite;
			this->button18->Location = System::Drawing::Point(740, 12);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(107, 34);
			this->button18->TabIndex = 0;
			this->button18->Text = L"Home";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 629);
			this->Controls->Add(this->Home);
			this->Controls->Add(this->login);
			this->Controls->Add(this->Reg);
			this->Controls->Add(this->about);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Watermelon_Saraha";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->login->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->Reg->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->Home->ResumeLayout(false);
			this->medhet->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->send->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->fav->ResumeLayout(false);
			this->sent->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->about->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e);

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e);
};
}
