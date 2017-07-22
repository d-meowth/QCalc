#pragma once
#include "AboutPage.h"
#include "htuHeat.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace QCalcUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainUI
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form
	{
	public:
		MainUI(void)
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
		~MainUI()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RadioButton^  goldButton;
	private: System::Windows::Forms::RadioButton^  antimonyButton;
	private: System::Windows::Forms::RadioButton^  copperButton;
	private: System::Windows::Forms::GroupBox^  materialBox;




	private: System::Windows::Forms::RadioButton^  waterButton;

	private: System::Windows::Forms::RadioButton^  iceButton;

	private: System::Windows::Forms::RadioButton^  oxygenButton;

	private: System::Windows::Forms::RadioButton^  aluminumButton;

	private: System::Windows::Forms::RadioButton^  ironButton;

	private: System::Windows::Forms::Label^  deltaTLabel;
	private: System::Windows::Forms::Label^  massLabel;



	private: System::Windows::Forms::Label^  kelvin;

	private: System::Windows::Forms::Label^  kg;
	private: System::Windows::Forms::Button^  calculateButton;
	private: System::Windows::Forms::Button^  eraseButton;
	private: System::Windows::Forms::Label^  debugLabel;
	private: System::Windows::Forms::NumericUpDown^  temperatureNum;
	private: System::Windows::Forms::Label^  answerTemp;
	private: System::Windows::Forms::NumericUpDown^  massNum;
	private: System::Windows::Forms::GroupBox^  variablesBox;

	private: System::Windows::Forms::Label^  answerText;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToUseToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^  customSHValue;

	private: System::Windows::Forms::RadioButton^  customButton;
	private: System::Windows::Forms::TextBox^  answerBox;
	private: System::Windows::Forms::Button^  button1;














	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainUI::typeid));
			this->goldButton = (gcnew System::Windows::Forms::RadioButton());
			this->antimonyButton = (gcnew System::Windows::Forms::RadioButton());
			this->copperButton = (gcnew System::Windows::Forms::RadioButton());
			this->materialBox = (gcnew System::Windows::Forms::GroupBox());
			this->customSHValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->customButton = (gcnew System::Windows::Forms::RadioButton());
			this->waterButton = (gcnew System::Windows::Forms::RadioButton());
			this->iceButton = (gcnew System::Windows::Forms::RadioButton());
			this->oxygenButton = (gcnew System::Windows::Forms::RadioButton());
			this->aluminumButton = (gcnew System::Windows::Forms::RadioButton());
			this->ironButton = (gcnew System::Windows::Forms::RadioButton());
			this->deltaTLabel = (gcnew System::Windows::Forms::Label());
			this->massLabel = (gcnew System::Windows::Forms::Label());
			this->kelvin = (gcnew System::Windows::Forms::Label());
			this->kg = (gcnew System::Windows::Forms::Label());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->eraseButton = (gcnew System::Windows::Forms::Button());
			this->debugLabel = (gcnew System::Windows::Forms::Label());
			this->temperatureNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->answerTemp = (gcnew System::Windows::Forms::Label());
			this->massNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->variablesBox = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->answerBox = (gcnew System::Windows::Forms::TextBox());
			this->answerText = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materialBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customSHValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temperatureNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->BeginInit();
			this->variablesBox->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// goldButton
			// 
			this->goldButton->AutoSize = true;
			this->goldButton->Checked = true;
			this->goldButton->Location = System::Drawing::Point(16, 19);
			this->goldButton->Name = L"goldButton";
			this->goldButton->Size = System::Drawing::Size(47, 17);
			this->goldButton->TabIndex = 2;
			this->goldButton->TabStop = true;
			this->goldButton->Text = L"Gold";
			this->goldButton->UseVisualStyleBackColor = true;
			// 
			// antimonyButton
			// 
			this->antimonyButton->AutoSize = true;
			this->antimonyButton->Location = System::Drawing::Point(16, 42);
			this->antimonyButton->Name = L"antimonyButton";
			this->antimonyButton->Size = System::Drawing::Size(68, 17);
			this->antimonyButton->TabIndex = 3;
			this->antimonyButton->Text = L"Antimony";
			this->antimonyButton->UseVisualStyleBackColor = true;
			// 
			// copperButton
			// 
			this->copperButton->AutoSize = true;
			this->copperButton->Location = System::Drawing::Point(16, 65);
			this->copperButton->Name = L"copperButton";
			this->copperButton->Size = System::Drawing::Size(59, 17);
			this->copperButton->TabIndex = 4;
			this->copperButton->Text = L"Copper";
			this->copperButton->UseVisualStyleBackColor = true;
			// 
			// materialBox
			// 
			this->materialBox->Controls->Add(this->customSHValue);
			this->materialBox->Controls->Add(this->customButton);
			this->materialBox->Controls->Add(this->waterButton);
			this->materialBox->Controls->Add(this->iceButton);
			this->materialBox->Controls->Add(this->oxygenButton);
			this->materialBox->Controls->Add(this->aluminumButton);
			this->materialBox->Controls->Add(this->ironButton);
			this->materialBox->Controls->Add(this->goldButton);
			this->materialBox->Controls->Add(this->copperButton);
			this->materialBox->Controls->Add(this->antimonyButton);
			this->materialBox->Location = System::Drawing::Point(10, 25);
			this->materialBox->Name = L"materialBox";
			this->materialBox->Size = System::Drawing::Size(130, 229);
			this->materialBox->TabIndex = 5;
			this->materialBox->TabStop = false;
			this->materialBox->Text = L"Material";
			// 
			// customSHValue
			// 
			this->customSHValue->Location = System::Drawing::Point(36, 201);
			this->customSHValue->Name = L"customSHValue";
			this->customSHValue->Size = System::Drawing::Size(88, 20);
			this->customSHValue->TabIndex = 11;
			// 
			// customButton
			// 
			this->customButton->AutoSize = true;
			this->customButton->Location = System::Drawing::Point(16, 203);
			this->customButton->Name = L"customButton";
			this->customButton->Size = System::Drawing::Size(14, 13);
			this->customButton->TabIndex = 10;
			this->customButton->UseVisualStyleBackColor = true;
			// 
			// waterButton
			// 
			this->waterButton->AutoSize = true;
			this->waterButton->Location = System::Drawing::Point(16, 180);
			this->waterButton->Name = L"waterButton";
			this->waterButton->Size = System::Drawing::Size(54, 17);
			this->waterButton->TabIndex = 9;
			this->waterButton->Text = L"Water";
			this->waterButton->UseVisualStyleBackColor = true;
			// 
			// iceButton
			// 
			this->iceButton->AutoSize = true;
			this->iceButton->Location = System::Drawing::Point(16, 157);
			this->iceButton->Name = L"iceButton";
			this->iceButton->Size = System::Drawing::Size(40, 17);
			this->iceButton->TabIndex = 8;
			this->iceButton->Text = L"Ice";
			this->iceButton->UseVisualStyleBackColor = true;
			// 
			// oxygenButton
			// 
			this->oxygenButton->AutoSize = true;
			this->oxygenButton->Location = System::Drawing::Point(16, 134);
			this->oxygenButton->Name = L"oxygenButton";
			this->oxygenButton->Size = System::Drawing::Size(61, 17);
			this->oxygenButton->TabIndex = 7;
			this->oxygenButton->Text = L"Oxygen";
			this->oxygenButton->UseVisualStyleBackColor = true;
			// 
			// aluminumButton
			// 
			this->aluminumButton->AutoSize = true;
			this->aluminumButton->Location = System::Drawing::Point(16, 111);
			this->aluminumButton->Name = L"aluminumButton";
			this->aluminumButton->Size = System::Drawing::Size(70, 17);
			this->aluminumButton->TabIndex = 6;
			this->aluminumButton->Text = L"Aluminum";
			this->aluminumButton->UseVisualStyleBackColor = true;
			// 
			// ironButton
			// 
			this->ironButton->AutoSize = true;
			this->ironButton->Location = System::Drawing::Point(16, 88);
			this->ironButton->Name = L"ironButton";
			this->ironButton->Size = System::Drawing::Size(43, 17);
			this->ironButton->TabIndex = 5;
			this->ironButton->Text = L"Iron";
			this->ironButton->UseVisualStyleBackColor = true;
			// 
			// deltaTLabel
			// 
			this->deltaTLabel->AutoSize = true;
			this->deltaTLabel->Location = System::Drawing::Point(6, 23);
			this->deltaTLabel->Name = L"deltaTLabel";
			this->deltaTLabel->Size = System::Drawing::Size(106, 13);
			this->deltaTLabel->TabIndex = 7;
			this->deltaTLabel->Text = L"Temperature change";
			// 
			// massLabel
			// 
			this->massLabel->AutoSize = true;
			this->massLabel->Location = System::Drawing::Point(80, 67);
			this->massLabel->Name = L"massLabel";
			this->massLabel->Size = System::Drawing::Size(32, 13);
			this->massLabel->TabIndex = 9;
			this->massLabel->Text = L"Mass";
			// 
			// kelvin
			// 
			this->kelvin->AutoSize = true;
			this->kelvin->Location = System::Drawing::Point(235, 23);
			this->kelvin->Name = L"kelvin";
			this->kelvin->Size = System::Drawing::Size(14, 13);
			this->kelvin->TabIndex = 10;
			this->kelvin->Text = L"K";
			// 
			// kg
			// 
			this->kg->AutoSize = true;
			this->kg->Location = System::Drawing::Point(235, 67);
			this->kg->Name = L"kg";
			this->kg->Size = System::Drawing::Size(19, 13);
			this->kg->TabIndex = 11;
			this->kg->Text = L"kg";
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(9, 105);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(238, 23);
			this->calculateButton->TabIndex = 12;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MainUI::calculateButton_Click);
			// 
			// eraseButton
			// 
			this->eraseButton->Location = System::Drawing::Point(9, 134);
			this->eraseButton->Name = L"eraseButton";
			this->eraseButton->Size = System::Drawing::Size(238, 23);
			this->eraseButton->TabIndex = 13;
			this->eraseButton->Text = L"Reset";
			this->eraseButton->UseVisualStyleBackColor = true;
			this->eraseButton->Click += gcnew System::EventHandler(this, &MainUI::eraseButton_Click);
			// 
			// debugLabel
			// 
			this->debugLabel->AutoSize = true;
			this->debugLabel->BackColor = System::Drawing::Color::Transparent;
			this->debugLabel->ForeColor = System::Drawing::Color::Red;
			this->debugLabel->Location = System::Drawing::Point(6, 205);
			this->debugLabel->Name = L"debugLabel";
			this->debugLabel->Size = System::Drawing::Size(68, 13);
			this->debugLabel->TabIndex = 14;
			this->debugLabel->Text = L"Debug Label";
			this->debugLabel->Visible = false;
			// 
			// temperatureNum
			// 
			this->temperatureNum->DecimalPlaces = 4;
			this->temperatureNum->Location = System::Drawing::Point(117, 21);
			this->temperatureNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->temperatureNum->Name = L"temperatureNum";
			this->temperatureNum->Size = System::Drawing::Size(112, 20);
			this->temperatureNum->TabIndex = 15;
			this->temperatureNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// answerTemp
			// 
			this->answerTemp->AutoSize = true;
			this->answerTemp->ForeColor = System::Drawing::Color::Red;
			this->answerTemp->Location = System::Drawing::Point(114, 205);
			this->answerTemp->MaximumSize = System::Drawing::Size(205, 0);
			this->answerTemp->Name = L"answerTemp";
			this->answerTemp->Size = System::Drawing::Size(83, 13);
			this->answerTemp->TabIndex = 16;
			this->answerTemp->Text = L"TempAnswerLbl";
			this->answerTemp->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->answerTemp->Visible = false;
			// 
			// massNum
			// 
			this->massNum->DecimalPlaces = 4;
			this->massNum->Location = System::Drawing::Point(117, 65);
			this->massNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->massNum->Name = L"massNum";
			this->massNum->Size = System::Drawing::Size(112, 20);
			this->massNum->TabIndex = 17;
			this->massNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// variablesBox
			// 
			this->variablesBox->BackColor = System::Drawing::Color::Transparent;
			this->variablesBox->Controls->Add(this->button1);
			this->variablesBox->Controls->Add(this->answerTemp);
			this->variablesBox->Controls->Add(this->answerBox);
			this->variablesBox->Controls->Add(this->kg);
			this->variablesBox->Controls->Add(this->eraseButton);
			this->variablesBox->Controls->Add(this->kelvin);
			this->variablesBox->Controls->Add(this->debugLabel);
			this->variablesBox->Controls->Add(this->calculateButton);
			this->variablesBox->Controls->Add(this->answerText);
			this->variablesBox->Controls->Add(this->massNum);
			this->variablesBox->Controls->Add(this->massLabel);
			this->variablesBox->Controls->Add(this->temperatureNum);
			this->variablesBox->Controls->Add(this->deltaTLabel);
			this->variablesBox->Location = System::Drawing::Point(146, 25);
			this->variablesBox->Name = L"variablesBox";
			this->variablesBox->Size = System::Drawing::Size(256, 229);
			this->variablesBox->TabIndex = 18;
			this->variablesBox->TabStop = false;
			this->variablesBox->Text = L"Variables";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(207, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Copy";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainUI::button1_Click);
			// 
			// answerBox
			// 
			this->answerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->answerBox->Location = System::Drawing::Point(48, 182);
			this->answerBox->Name = L"answerBox";
			this->answerBox->ReadOnly = true;
			this->answerBox->Size = System::Drawing::Size(159, 21);
			this->answerBox->TabIndex = 19;
			// 
			// answerText
			// 
			this->answerText->AutoSize = true;
			this->answerText->Location = System::Drawing::Point(6, 185);
			this->answerText->Name = L"answerText";
			this->answerText->Size = System::Drawing::Size(45, 13);
			this->answerText->TabIndex = 18;
			this->answerText->Text = L"Answer:";
			this->answerText->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(414, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->howToUseToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Name = L"howToUseToolStripMenuItem";
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::howToUseToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::aboutToolStripMenuItem_Click);
			// 
			// MainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 266);
			this->Controls->Add(this->materialBox);
			this->Controls->Add(this->variablesBox);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(430, 305);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(430, 305);
			this->Name = L"MainUI";
			this->Text = L"Q Calculator";
			this->Load += gcnew System::EventHandler(this, &MainUI::MainUI_Load);
			this->materialBox->ResumeLayout(false);
			this->materialBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customSHValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temperatureNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->EndInit();
			this->variablesBox->ResumeLayout(false);
			this->variablesBox->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		float tempInt = (float)temperatureNum->Value;
		float massInt = (float)massNum->Value;

		float answerInt;
		

		if (goldButton->Checked == true)
		{
			answerInt = tempInt * massInt * 130;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (antimonyButton->Checked == true)
		{
			answerInt = tempInt * massInt * 220;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (copperButton->Checked == true)
		{
			answerInt = tempInt * massInt * 380;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (ironButton->Checked == true)
		{
			answerInt = tempInt * massInt * 460;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (aluminumButton->Checked == true)
		{
			answerInt = tempInt * massInt * 900;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (oxygenButton->Checked == true)
		{
			answerInt = tempInt * massInt * 1008;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (iceButton->Checked == true)
		{
			answerInt = tempInt * massInt * 2100;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (waterButton->Checked == true)
		{
			answerInt = tempInt * massInt * 4200;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}
		if (customButton->Checked == true)
		{
			float customSH = (float)customSHValue->Value;
			answerInt = tempInt * massInt * customSH;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
			//this->answerTemp->Visible = true;
			//this->answerTemp->Text = answerStr + " J";
		}


	}
	private: System::Void eraseButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->temperatureNum->Value = 0;
		this->massNum->Value = 0;
		this->customSHValue->Value = 0;
		this->answerBox->Text = "";
		//this->answerTemp->Visible = false;
	}
	private: System::Void howToUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		htuHeat ^ htu = gcnew htuHeat();
		htu->Show();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AboutPage ^ about = gcnew AboutPage();
		about->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->answerBox->Copy();
	}
private: System::Void MainUI_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
