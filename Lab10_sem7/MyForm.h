#pragma once
#include <forward_list>
#include <string>

namespace Lab10sem7 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(981, 609);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->listBox3);
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(973, 576);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання А";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(376, 459);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 67);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Location = System::Drawing::Point(729, 147);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(182, 244);
			this->listBox3->TabIndex = 5;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(387, 147);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(193, 244);
			this->listBox2->TabIndex = 4;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(58, 147);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(184, 244);
			this->listBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(692, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Вставлено 0 перед 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(316, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(324, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Видалено елемент після 4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(25, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Початковий список";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->listBox6);
			this->tabPage2->Controls->Add(this->listBox5);
			this->tabPage2->Controls->Add(this->listBox4);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(973, 576);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання Б";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::YellowGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->Location = System::Drawing::Point(368, 441);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 73);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Показати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// listBox6
			// 
			this->listBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 20;
			this->listBox6->Location = System::Drawing::Point(682, 154);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(205, 204);
			this->listBox6->TabIndex = 5;
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 20;
			this->listBox5->Location = System::Drawing::Point(382, 154);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(197, 204);
			this->listBox5->TabIndex = 4;
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->HorizontalScrollbar = true;
			this->listBox4->ItemHeight = 20;
			this->listBox4->Location = System::Drawing::Point(72, 154);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(203, 204);
			this->listBox4->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(677, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(223, 69);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Після видалення номера";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(377, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(236, 63);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Після додавання на початок";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(51, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 29);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Початковий список";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 609);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::forward_list<int> list = { 1, 4, 7, 2, 1, 4, 9, 4 };

		listBox1->Items->Clear();
		for (int x : list) {
			listBox1->Items->Add(x.ToString());
		}

		for (auto it = list.begin(); it != list.end(); ++it) {
			if (*it == 4 && std::next(it) != list.end()) {
				list.erase_after(it); 
			}
		}

		listBox2->Items->Clear();
		for (int x : list) {
			listBox2->Items->Add(x.ToString());
		}

		auto prev = list.before_begin();
		auto curr = list.begin();

		while (curr != list.end()) {
			if (*curr == 1) {
				list.insert_after(prev, 0); 
				prev = curr;                
			}
			else {
				prev = curr;
			}
			++curr;
		}

		listBox3->Items->Clear();
		for (int x : list) {
			listBox3->Items->Add(x.ToString());
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::forward_list<int> groups = { 101, 102, 201, 202, 105 };

	listBox4->Items->Clear();
	for (int g : groups) {
		listBox4->Items->Add(g.ToString());
	}

	groups.push_front(99);

	listBox5->Items->Clear();
	for (int g : groups) {
		listBox5->Items->Add(g.ToString());
	}

	groups.remove(201);

	listBox6->Items->Clear();
	for (int g : groups) {
		listBox6->Items->Add(g.ToString());
	}
}
};
}
