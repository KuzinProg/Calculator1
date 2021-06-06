#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		int numCount;
		bool dotExist;
	private:double num1;
	private:double num2;
	private:char oper;
	public:
		Form1(void)
		{
			InitializeComponent();
			numCount = 1;
			dotExist = false;
		}
	private:void operClick()
	{
		if (tb_Result->Text != "" && tb_Result->Text != "-")
		{
			num1 = Convert::ToDouble(tb_Result->Text);
			tb_Result->Clear();
			dotExist = false;
			numCount = 2;
		}
	}
	private:double doOperation()
	{
		switch (oper)
		{
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		default:
			return 0;

		}
	}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonNUB2;
	protected:
	private: System::Windows::Forms::Button^ buttonNUB3;
	private: System::Windows::Forms::TextBox^ tb_Result;

	private: System::Windows::Forms::Button^ buttonNUB4;
	private: System::Windows::Forms::Button^ buttonNUB1;
	private: System::Windows::Forms::Button^ buttonNUB5;
	private: System::Windows::Forms::Button^ buttonNUB7;
	private: System::Windows::Forms::Button^ buttonNUB6;
	private: System::Windows::Forms::Button^ buttonNUB8;
	private: System::Windows::Forms::Button^ buttonNUB0;
	private: System::Windows::Forms::Button^ buttonNUB9;
	private: System::Windows::Forms::Button^ buttonResult;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ buttonPLus;
	private: System::Windows::Forms::Button^ buttonMines;


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ buttonDot;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonNUB2 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB3 = (gcnew System::Windows::Forms::Button());
			this->tb_Result = (gcnew System::Windows::Forms::TextBox());
			this->buttonNUB4 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB1 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB5 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB7 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB6 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB8 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB0 = (gcnew System::Windows::Forms::Button());
			this->buttonNUB9 = (gcnew System::Windows::Forms::Button());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->buttonPLus = (gcnew System::Windows::Forms::Button());
			this->buttonMines = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonNUB2
			// 
			this->buttonNUB2->Location = System::Drawing::Point(133, 75);
			this->buttonNUB2->Name = L"buttonNUB2";
			this->buttonNUB2->Size = System::Drawing::Size(22, 23);
			this->buttonNUB2->TabIndex = 50;
			this->buttonNUB2->Text = L"2";
			this->buttonNUB2->UseVisualStyleBackColor = true;
			this->buttonNUB2->Click += gcnew System::EventHandler(this, &Form1::buttonNUB2_Click);
			// 
			// buttonNUB3
			// 
			this->buttonNUB3->Location = System::Drawing::Point(161, 75);
			this->buttonNUB3->Name = L"buttonNUB3";
			this->buttonNUB3->Size = System::Drawing::Size(22, 24);
			this->buttonNUB3->TabIndex = 1;
			this->buttonNUB3->Text = L"3";
			this->buttonNUB3->UseVisualStyleBackColor = true;
			this->buttonNUB3->Click += gcnew System::EventHandler(this, &Form1::buttonNUB3_Click);
			// 
			// tb_Result
			// 
			this->tb_Result->Location = System::Drawing::Point(49, 32);
			this->tb_Result->Name = L"tb_Result";
			this->tb_Result->ReadOnly = true;
			this->tb_Result->Size = System::Drawing::Size(190, 20);
			this->tb_Result->TabIndex = 0;
			// 
			// buttonNUB4
			// 
			this->buttonNUB4->Location = System::Drawing::Point(105, 104);
			this->buttonNUB4->Name = L"buttonNUB4";
			this->buttonNUB4->Size = System::Drawing::Size(22, 24);
			this->buttonNUB4->TabIndex = 3;
			this->buttonNUB4->Text = L"4";
			this->buttonNUB4->UseVisualStyleBackColor = true;
			this->buttonNUB4->Click += gcnew System::EventHandler(this, &Form1::buttonNUB4_Click);
			// 
			// buttonNUB1
			// 
			this->buttonNUB1->Location = System::Drawing::Point(105, 74);
			this->buttonNUB1->Name = L"buttonNUB1";
			this->buttonNUB1->Size = System::Drawing::Size(22, 24);
			this->buttonNUB1->TabIndex = 4;
			this->buttonNUB1->Text = L"1";
			this->buttonNUB1->UseVisualStyleBackColor = true;
			this->buttonNUB1->Click += gcnew System::EventHandler(this, &Form1::buttonNUB1_Click);
			// 
			// buttonNUB5
			// 
			this->buttonNUB5->Location = System::Drawing::Point(133, 104);
			this->buttonNUB5->Name = L"buttonNUB5";
			this->buttonNUB5->Size = System::Drawing::Size(22, 24);
			this->buttonNUB5->TabIndex = 5;
			this->buttonNUB5->Text = L"5";
			this->buttonNUB5->UseVisualStyleBackColor = true;
			this->buttonNUB5->Click += gcnew System::EventHandler(this, &Form1::buttonNUB5_Click);
			// 
			// buttonNUB7
			// 
			this->buttonNUB7->Location = System::Drawing::Point(105, 134);
			this->buttonNUB7->Name = L"buttonNUB7";
			this->buttonNUB7->Size = System::Drawing::Size(22, 24);
			this->buttonNUB7->TabIndex = 6;
			this->buttonNUB7->Text = L"7";
			this->buttonNUB7->UseVisualStyleBackColor = true;
			this->buttonNUB7->Click += gcnew System::EventHandler(this, &Form1::buttonNUB7_Click);
			// 
			// buttonNUB6
			// 
			this->buttonNUB6->Location = System::Drawing::Point(161, 104);
			this->buttonNUB6->Name = L"buttonNUB6";
			this->buttonNUB6->Size = System::Drawing::Size(22, 24);
			this->buttonNUB6->TabIndex = 7;
			this->buttonNUB6->Text = L"6";
			this->buttonNUB6->UseVisualStyleBackColor = true;
			this->buttonNUB6->Click += gcnew System::EventHandler(this, &Form1::buttonNUB6_Click);
			// 
			// buttonNUB8
			// 
			this->buttonNUB8->Location = System::Drawing::Point(133, 134);
			this->buttonNUB8->Name = L"buttonNUB8";
			this->buttonNUB8->Size = System::Drawing::Size(22, 24);
			this->buttonNUB8->TabIndex = 8;
			this->buttonNUB8->Text = L"8";
			this->buttonNUB8->UseVisualStyleBackColor = true;
			this->buttonNUB8->Click += gcnew System::EventHandler(this, &Form1::buttonNUB8_Click);
			// 
			// buttonNUB0
			// 
			this->buttonNUB0->Location = System::Drawing::Point(161, 164);
			this->buttonNUB0->Name = L"buttonNUB0";
			this->buttonNUB0->Size = System::Drawing::Size(22, 24);
			this->buttonNUB0->TabIndex = 9;
			this->buttonNUB0->Text = L"0";
			this->buttonNUB0->UseVisualStyleBackColor = true;
			this->buttonNUB0->Click += gcnew System::EventHandler(this, &Form1::buttonNUB0_Click);
			// 
			// buttonNUB9
			// 
			this->buttonNUB9->Location = System::Drawing::Point(161, 134);
			this->buttonNUB9->Name = L"buttonNUB9";
			this->buttonNUB9->Size = System::Drawing::Size(22, 24);
			this->buttonNUB9->TabIndex = 10;
			this->buttonNUB9->Text = L"9";
			this->buttonNUB9->UseVisualStyleBackColor = true;
			this->buttonNUB9->Click += gcnew System::EventHandler(this, &Form1::buttonNUB9_Click);
			// 
			// buttonResult
			// 
			this->buttonResult->BackColor = System::Drawing::Color::Purple;
			this->buttonResult->ForeColor = System::Drawing::SystemColors::Desktop;
			this->buttonResult->Location = System::Drawing::Point(105, 164);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(50, 24);
			this->buttonResult->TabIndex = 12;
			this->buttonResult->Text = L"=";
			this->buttonResult->UseVisualStyleBackColor = false;
			this->buttonResult->Click += gcnew System::EventHandler(this, &Form1::buttonResult_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(189, 164);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 24);
			this->button11->TabIndex = 13;
			this->button11->Text = L"+/-";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(189, 134);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 24);
			this->button13->TabIndex = 14;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(189, 104);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 24);
			this->button14->TabIndex = 15;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// buttonPLus
			// 
			this->buttonPLus->Location = System::Drawing::Point(189, 75);
			this->buttonPLus->Name = L"buttonPLus";
			this->buttonPLus->Size = System::Drawing::Size(50, 24);
			this->buttonPLus->TabIndex = 16;
			this->buttonPLus->Text = L"+";
			this->buttonPLus->UseVisualStyleBackColor = true;
			this->buttonPLus->Click += gcnew System::EventHandler(this, &Form1::buttonPLus_Click);
			// 
			// buttonMines
			// 
			this->buttonMines->Location = System::Drawing::Point(49, 74);
			this->buttonMines->Name = L"buttonMines";
			this->buttonMines->Size = System::Drawing::Size(50, 24);
			this->buttonMines->TabIndex = 17;
			this->buttonMines->Text = L"-";
			this->buttonMines->UseVisualStyleBackColor = true;
			this->buttonMines->Click += gcnew System::EventHandler(this, &Form1::buttonMines_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(49, 104);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 24);
			this->button17->TabIndex = 18;
			this->button17->Text = L"x^2";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(49, 134);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 24);
			this->button18->TabIndex = 19;
			this->button18->Text = L"log";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// buttonDot
			// 
			this->buttonDot->Location = System::Drawing::Point(49, 164);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(50, 24);
			this->buttonDot->TabIndex = 20;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &Form1::buttonDot_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 204);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->buttonMines);
			this->Controls->Add(this->buttonPLus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->buttonNUB9);
			this->Controls->Add(this->buttonNUB0);
			this->Controls->Add(this->buttonNUB8);
			this->Controls->Add(this->buttonNUB6);
			this->Controls->Add(this->buttonNUB7);
			this->Controls->Add(this->buttonNUB5);
			this->Controls->Add(this->buttonNUB1);
			this->Controls->Add(this->buttonNUB4);
			this->Controls->Add(this->tb_Result);
			this->Controls->Add(this->buttonNUB3);
			this->Controls->Add(this->buttonNUB2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   private:void adNum(double i)
		   {
			   if (numCount == 3)
			   {
				   tb_Result->Clear();
				   dotExist = false;
				   numCount = 1;
			   }
			   if(numCount==1||numCount==2)
			   {
				   tb_Result->AppendText(Convert::ToString(i));
			   }
		   }
	private: System::Void buttonNUB1_Click(System::Object^ sender, System::EventArgs^ e) {
		adNum(1);
	}
private: System::Void buttonNUB2_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(2);
}
private: System::Void buttonNUB3_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(3);
}
private: System::Void buttonNUB4_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(4);
}
private: System::Void buttonNUB5_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(5);
}
private: System::Void buttonNUB6_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(6);
}
private: System::Void buttonNUB7_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(7);
}
private: System::Void buttonNUB8_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(8);
}
private: System::Void buttonNUB9_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(9);
}
private: System::Void buttonNUB0_Click(System::Object^ sender, System::EventArgs^ e) {
	adNum(0);
}
private: System::Void buttonPLus_Click(System::Object^ sender, System::EventArgs^ e) {
	if(numCount==1)
	operClick();
	oper = '+';
}
private: System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numCount == 2&& tb_Result->Text!=""&&tb_Result->Text!="-")
	{
		num2 = Convert::ToDouble(tb_Result->Text);
		tb_Result->Clear();
		dotExist = false;
		numCount = 3;
		double res = doOperation();
		tb_Result->AppendText(Convert::ToString(res));
	}
}
private: System::Void buttonMines_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numCount == 3)
	{
		numCount = 1;
		tb_Result->Clear();
		dotExist = false;
	}
	if (tb_Result->Text == "")
	{
		tb_Result->AppendText("-");
	}
	else
	{
		if (numCount == 1)
		operClick();
		oper = '-';
	}
}
private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numCount == 1 || numCount == 2)
	{
		if (tb_Result->Text != "" && dotExist == false)
		{
			tb_Result->AppendText(",");
			dotExist = true;
		}
	}
}
};

}
