#pragma once
#include "AboutPage.h"
#include "htuMelt.h"

namespace QCalcUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VaporHeat
	/// </summary>
	public ref class VaporHeat : public System::Windows::Forms::Form
	{
	public:
		VaporHeat(void)
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
		~VaporHeat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  variablesBox;
	protected:
	private: System::Windows::Forms::Button^  copyButton;
	private: System::Windows::Forms::TextBox^  answerBox;
	private: System::Windows::Forms::Label^  kg;
	private: System::Windows::Forms::Button^  eraseButton;
	private: System::Windows::Forms::Button^  calculateButton;
	private: System::Windows::Forms::Label^  answerText;
	private: System::Windows::Forms::NumericUpDown^  massNum;
	private: System::Windows::Forms::Label^  massLabel;
	private: System::Windows::Forms::Label^  answerTemp;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToUseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  materialBox;
	private: System::Windows::Forms::NumericUpDown^  customLHValue;
	private: System::Windows::Forms::RadioButton^  customButton;
	private: System::Windows::Forms::RadioButton^  hydrogenButton;
	private: System::Windows::Forms::RadioButton^  mercuryButton;
	private: System::Windows::Forms::RadioButton^  oxygenButton;
	private: System::Windows::Forms::RadioButton^  waterButton;
	private: System::Windows::Forms::RadioButton^  nitrogenButton;
	private: System::Windows::Forms::Label^  debugLabel;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VaporHeat::typeid));
			this->variablesBox = (gcnew System::Windows::Forms::GroupBox());
			this->copyButton = (gcnew System::Windows::Forms::Button());
			this->answerBox = (gcnew System::Windows::Forms::TextBox());
			this->kg = (gcnew System::Windows::Forms::Label());
			this->eraseButton = (gcnew System::Windows::Forms::Button());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->answerText = (gcnew System::Windows::Forms::Label());
			this->massNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->massLabel = (gcnew System::Windows::Forms::Label());
			this->answerTemp = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materialBox = (gcnew System::Windows::Forms::GroupBox());
			this->customLHValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->customButton = (gcnew System::Windows::Forms::RadioButton());
			this->hydrogenButton = (gcnew System::Windows::Forms::RadioButton());
			this->mercuryButton = (gcnew System::Windows::Forms::RadioButton());
			this->oxygenButton = (gcnew System::Windows::Forms::RadioButton());
			this->waterButton = (gcnew System::Windows::Forms::RadioButton());
			this->nitrogenButton = (gcnew System::Windows::Forms::RadioButton());
			this->debugLabel = (gcnew System::Windows::Forms::Label());
			this->variablesBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->materialBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customLHValue))->BeginInit();
			this->SuspendLayout();
			// 
			// variablesBox
			// 
			this->variablesBox->BackColor = System::Drawing::Color::Transparent;
			this->variablesBox->Controls->Add(this->copyButton);
			this->variablesBox->Controls->Add(this->answerBox);
			this->variablesBox->Controls->Add(this->kg);
			this->variablesBox->Controls->Add(this->eraseButton);
			this->variablesBox->Controls->Add(this->calculateButton);
			this->variablesBox->Controls->Add(this->answerText);
			this->variablesBox->Controls->Add(this->massNum);
			this->variablesBox->Controls->Add(this->massLabel);
			this->variablesBox->Location = System::Drawing::Point(146, 27);
			this->variablesBox->Name = L"variablesBox";
			this->variablesBox->Size = System::Drawing::Size(256, 164);
			this->variablesBox->TabIndex = 26;
			this->variablesBox->TabStop = false;
			this->variablesBox->Text = L"Variables";
			// 
			// copyButton
			// 
			this->copyButton->ForeColor = System::Drawing::Color::Black;
			this->copyButton->Location = System::Drawing::Point(207, 130);
			this->copyButton->Name = L"copyButton";
			this->copyButton->Size = System::Drawing::Size(40, 23);
			this->copyButton->TabIndex = 20;
			this->copyButton->Text = L"Copy";
			this->copyButton->UseVisualStyleBackColor = true;
			this->copyButton->Click += gcnew System::EventHandler(this, &VaporHeat::copyButton_Click);
			// 
			// answerBox
			// 
			this->answerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->answerBox->Location = System::Drawing::Point(44, 131);
			this->answerBox->Name = L"answerBox";
			this->answerBox->ReadOnly = true;
			this->answerBox->Size = System::Drawing::Size(163, 21);
			this->answerBox->TabIndex = 19;
			// 
			// kg
			// 
			this->kg->AutoSize = true;
			this->kg->Location = System::Drawing::Point(235, 21);
			this->kg->Name = L"kg";
			this->kg->Size = System::Drawing::Size(19, 13);
			this->kg->TabIndex = 11;
			this->kg->Text = L"kg";
			// 
			// eraseButton
			// 
			this->eraseButton->Location = System::Drawing::Point(9, 88);
			this->eraseButton->Name = L"eraseButton";
			this->eraseButton->Size = System::Drawing::Size(238, 23);
			this->eraseButton->TabIndex = 13;
			this->eraseButton->Text = L"Reset";
			this->eraseButton->UseVisualStyleBackColor = true;
			this->eraseButton->Click += gcnew System::EventHandler(this, &VaporHeat::eraseButton_Click);
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(9, 59);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(238, 23);
			this->calculateButton->TabIndex = 12;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &VaporHeat::calculateButton_Click);
			// 
			// answerText
			// 
			this->answerText->AutoSize = true;
			this->answerText->Location = System::Drawing::Point(0, 135);
			this->answerText->Name = L"answerText";
			this->answerText->Size = System::Drawing::Size(45, 13);
			this->answerText->TabIndex = 18;
			this->answerText->Text = L"Answer:";
			this->answerText->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// massNum
			// 
			this->massNum->DecimalPlaces = 4;
			this->massNum->Location = System::Drawing::Point(44, 19);
			this->massNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->massNum->Name = L"massNum";
			this->massNum->Size = System::Drawing::Size(185, 20);
			this->massNum->TabIndex = 17;
			this->massNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// massLabel
			// 
			this->massLabel->AutoSize = true;
			this->massLabel->Location = System::Drawing::Point(6, 21);
			this->massLabel->Name = L"massLabel";
			this->massLabel->Size = System::Drawing::Size(32, 13);
			this->massLabel->TabIndex = 9;
			this->massLabel->Text = L"Mass";
			// 
			// answerTemp
			// 
			this->answerTemp->AutoSize = true;
			this->answerTemp->ForeColor = System::Drawing::Color::Red;
			this->answerTemp->Location = System::Drawing::Point(143, 6);
			this->answerTemp->MaximumSize = System::Drawing::Size(205, 0);
			this->answerTemp->Name = L"answerTemp";
			this->answerTemp->Size = System::Drawing::Size(83, 13);
			this->answerTemp->TabIndex = 24;
			this->answerTemp->Text = L"TempAnswerLbl";
			this->answerTemp->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->answerTemp->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(414, 24);
			this->menuStrip1->TabIndex = 25;
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
			this->howToUseToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->howToUseToolStripMenuItem->Name = L"howToUseToolStripMenuItem";
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &VaporHeat::howToUseToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &VaporHeat::aboutToolStripMenuItem_Click);
			// 
			// materialBox
			// 
			this->materialBox->Controls->Add(this->customLHValue);
			this->materialBox->Controls->Add(this->customButton);
			this->materialBox->Controls->Add(this->hydrogenButton);
			this->materialBox->Controls->Add(this->mercuryButton);
			this->materialBox->Controls->Add(this->oxygenButton);
			this->materialBox->Controls->Add(this->waterButton);
			this->materialBox->Controls->Add(this->nitrogenButton);
			this->materialBox->Location = System::Drawing::Point(10, 27);
			this->materialBox->Name = L"materialBox";
			this->materialBox->Size = System::Drawing::Size(130, 164);
			this->materialBox->TabIndex = 22;
			this->materialBox->TabStop = false;
			this->materialBox->Text = L"Material";
			// 
			// customLHValue
			// 
			this->customLHValue->Location = System::Drawing::Point(33, 132);
			this->customLHValue->Name = L"customLHValue";
			this->customLHValue->Size = System::Drawing::Size(88, 20);
			this->customLHValue->TabIndex = 11;
			// 
			// customButton
			// 
			this->customButton->AutoSize = true;
			this->customButton->Location = System::Drawing::Point(16, 136);
			this->customButton->Name = L"customButton";
			this->customButton->Size = System::Drawing::Size(14, 13);
			this->customButton->TabIndex = 10;
			this->customButton->UseVisualStyleBackColor = true;
			// 
			// hydrogenButton
			// 
			this->hydrogenButton->AutoSize = true;
			this->hydrogenButton->Location = System::Drawing::Point(16, 88);
			this->hydrogenButton->Name = L"hydrogenButton";
			this->hydrogenButton->Size = System::Drawing::Size(71, 17);
			this->hydrogenButton->TabIndex = 12;
			this->hydrogenButton->Text = L"Hydrogen";
			this->hydrogenButton->UseVisualStyleBackColor = true;
			// 
			// mercuryButton
			// 
			this->mercuryButton->AutoSize = true;
			this->mercuryButton->Location = System::Drawing::Point(16, 65);
			this->mercuryButton->Name = L"mercuryButton";
			this->mercuryButton->Size = System::Drawing::Size(63, 17);
			this->mercuryButton->TabIndex = 2;
			this->mercuryButton->Text = L"Mercury";
			this->mercuryButton->UseVisualStyleBackColor = true;
			// 
			// oxygenButton
			// 
			this->oxygenButton->AutoSize = true;
			this->oxygenButton->Location = System::Drawing::Point(16, 42);
			this->oxygenButton->Name = L"oxygenButton";
			this->oxygenButton->Size = System::Drawing::Size(61, 17);
			this->oxygenButton->TabIndex = 6;
			this->oxygenButton->Text = L"Oxygen";
			this->oxygenButton->UseVisualStyleBackColor = true;
			// 
			// waterButton
			// 
			this->waterButton->AutoSize = true;
			this->waterButton->Location = System::Drawing::Point(16, 111);
			this->waterButton->Name = L"waterButton";
			this->waterButton->Size = System::Drawing::Size(54, 17);
			this->waterButton->TabIndex = 5;
			this->waterButton->Text = L"Water";
			this->waterButton->UseVisualStyleBackColor = true;
			// 
			// nitrogenButton
			// 
			this->nitrogenButton->AutoSize = true;
			this->nitrogenButton->Checked = true;
			this->nitrogenButton->Location = System::Drawing::Point(16, 19);
			this->nitrogenButton->Name = L"nitrogenButton";
			this->nitrogenButton->Size = System::Drawing::Size(65, 17);
			this->nitrogenButton->TabIndex = 3;
			this->nitrogenButton->TabStop = true;
			this->nitrogenButton->Text = L"Nitrogen";
			this->nitrogenButton->UseVisualStyleBackColor = true;
			// 
			// debugLabel
			// 
			this->debugLabel->AutoSize = true;
			this->debugLabel->BackColor = System::Drawing::Color::Transparent;
			this->debugLabel->ForeColor = System::Drawing::Color::Red;
			this->debugLabel->Location = System::Drawing::Point(63, 6);
			this->debugLabel->Name = L"debugLabel";
			this->debugLabel->Size = System::Drawing::Size(68, 13);
			this->debugLabel->TabIndex = 23;
			this->debugLabel->Text = L"Debug Label";
			this->debugLabel->Visible = false;
			// 
			// VaporHeat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 200);
			this->Controls->Add(this->variablesBox);
			this->Controls->Add(this->answerTemp);
			this->Controls->Add(this->materialBox);
			this->Controls->Add(this->debugLabel);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VaporHeat";
			this->Text = L"Q Calculator";
			this->variablesBox->ResumeLayout(false);
			this->variablesBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->materialBox->ResumeLayout(false);
			this->materialBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customLHValue))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		float massInt = (float)massNum->Value;
		float answerInt;

		if (nitrogenButton->Checked == true)
		{
			answerInt = massInt * 201000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (oxygenButton->Checked == true)
		{
			answerInt = massInt * 214000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (mercuryButton->Checked == true)
		{
			answerInt = massInt * 293000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (hydrogenButton->Checked == true)
		{
			answerInt = massInt * 450000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (waterButton->Checked == true)
		{
			answerInt = massInt * 230000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (customButton->Checked == true)
		{
			float customLH = (float)customLHValue->Value;
			answerInt = massInt * customLH;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
	}
private: System::Void copyButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->answerBox->Copy();
}
private: System::Void eraseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->massNum->Value = 0;
	this->customLHValue->Value = 0;
	this->answerBox->Text = "";
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutPage ^ about = gcnew AboutPage();
	about->ShowDialog();
}
private: System::Void howToUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	htuMelt ^ htu = gcnew htuMelt();
	htu->Show();
}
};
}
