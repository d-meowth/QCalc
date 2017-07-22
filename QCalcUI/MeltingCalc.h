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
	/// Summary for MeltingCalc
	/// </summary>
	public ref class MeltingCalc : public System::Windows::Forms::Form
	{
	public:
		MeltingCalc(void)
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
		~MeltingCalc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  materialBox;
	private: System::Windows::Forms::NumericUpDown^  customLHValue;
	protected:

	private: System::Windows::Forms::RadioButton^  customButton;

	private: System::Windows::Forms::RadioButton^  iceButton;

	private: System::Windows::Forms::RadioButton^  aluminumButton;
	private: System::Windows::Forms::RadioButton^  ironButton;
	private: System::Windows::Forms::RadioButton^  goldButton;
	private: System::Windows::Forms::RadioButton^  copperButton;
	private: System::Windows::Forms::RadioButton^  antimonyButton;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToUseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^  zincButton;
	private: System::Windows::Forms::RadioButton^  tungstenButton;
	private: System::Windows::Forms::RadioButton^  leadButton;
	private: System::Windows::Forms::RadioButton^  sulfurButton;
	private: System::Windows::Forms::RadioButton^  silverButton;
	private: System::Windows::Forms::RadioButton^  platinumButton;
	private: System::Windows::Forms::GroupBox^  variablesBox;
	private: System::Windows::Forms::Button^  copyButton;

	private: System::Windows::Forms::Label^  answerTemp;
	private: System::Windows::Forms::TextBox^  answerBox;
	private: System::Windows::Forms::Label^  kg;
	private: System::Windows::Forms::Button^  eraseButton;
	private: System::Windows::Forms::Label^  debugLabel;
	private: System::Windows::Forms::Button^  calculateButton;
	private: System::Windows::Forms::Label^  answerText;
	private: System::Windows::Forms::NumericUpDown^  massNum;
	private: System::Windows::Forms::Label^  massLabel;



















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeltingCalc::typeid));
			this->materialBox = (gcnew System::Windows::Forms::GroupBox());
			this->tungstenButton = (gcnew System::Windows::Forms::RadioButton());
			this->customLHValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->leadButton = (gcnew System::Windows::Forms::RadioButton());
			this->customButton = (gcnew System::Windows::Forms::RadioButton());
			this->sulfurButton = (gcnew System::Windows::Forms::RadioButton());
			this->silverButton = (gcnew System::Windows::Forms::RadioButton());
			this->platinumButton = (gcnew System::Windows::Forms::RadioButton());
			this->iceButton = (gcnew System::Windows::Forms::RadioButton());
			this->zincButton = (gcnew System::Windows::Forms::RadioButton());
			this->goldButton = (gcnew System::Windows::Forms::RadioButton());
			this->copperButton = (gcnew System::Windows::Forms::RadioButton());
			this->aluminumButton = (gcnew System::Windows::Forms::RadioButton());
			this->ironButton = (gcnew System::Windows::Forms::RadioButton());
			this->antimonyButton = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->debugLabel = (gcnew System::Windows::Forms::Label());
			this->materialBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customLHValue))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->variablesBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->BeginInit();
			this->SuspendLayout();
			// 
			// materialBox
			// 
			this->materialBox->Controls->Add(this->tungstenButton);
			this->materialBox->Controls->Add(this->customLHValue);
			this->materialBox->Controls->Add(this->leadButton);
			this->materialBox->Controls->Add(this->customButton);
			this->materialBox->Controls->Add(this->sulfurButton);
			this->materialBox->Controls->Add(this->silverButton);
			this->materialBox->Controls->Add(this->platinumButton);
			this->materialBox->Controls->Add(this->iceButton);
			this->materialBox->Controls->Add(this->zincButton);
			this->materialBox->Controls->Add(this->goldButton);
			this->materialBox->Controls->Add(this->copperButton);
			this->materialBox->Controls->Add(this->aluminumButton);
			this->materialBox->Controls->Add(this->ironButton);
			this->materialBox->Controls->Add(this->antimonyButton);
			this->materialBox->Location = System::Drawing::Point(12, 25);
			this->materialBox->Name = L"materialBox";
			this->materialBox->Size = System::Drawing::Size(130, 323);
			this->materialBox->TabIndex = 6;
			this->materialBox->TabStop = false;
			this->materialBox->Text = L"Material";
			// 
			// tungstenButton
			// 
			this->tungstenButton->AutoSize = true;
			this->tungstenButton->Location = System::Drawing::Point(16, 249);
			this->tungstenButton->Name = L"tungstenButton";
			this->tungstenButton->Size = System::Drawing::Size(70, 17);
			this->tungstenButton->TabIndex = 17;
			this->tungstenButton->Text = L"Tungsten";
			this->tungstenButton->UseVisualStyleBackColor = true;
			// 
			// customLHValue
			// 
			this->customLHValue->Location = System::Drawing::Point(36, 294);
			this->customLHValue->Name = L"customLHValue";
			this->customLHValue->Size = System::Drawing::Size(88, 20);
			this->customLHValue->TabIndex = 11;
			// 
			// leadButton
			// 
			this->leadButton->AutoSize = true;
			this->leadButton->Location = System::Drawing::Point(16, 203);
			this->leadButton->Name = L"leadButton";
			this->leadButton->Size = System::Drawing::Size(49, 17);
			this->leadButton->TabIndex = 16;
			this->leadButton->Text = L"Lead";
			this->leadButton->UseVisualStyleBackColor = true;
			// 
			// customButton
			// 
			this->customButton->AutoSize = true;
			this->customButton->Location = System::Drawing::Point(16, 296);
			this->customButton->Name = L"customButton";
			this->customButton->Size = System::Drawing::Size(14, 13);
			this->customButton->TabIndex = 10;
			this->customButton->UseVisualStyleBackColor = true;
			// 
			// sulfurButton
			// 
			this->sulfurButton->AutoSize = true;
			this->sulfurButton->Location = System::Drawing::Point(16, 180);
			this->sulfurButton->Name = L"sulfurButton";
			this->sulfurButton->Size = System::Drawing::Size(52, 17);
			this->sulfurButton->TabIndex = 15;
			this->sulfurButton->Text = L"Sulfur";
			this->sulfurButton->UseVisualStyleBackColor = true;
			// 
			// silverButton
			// 
			this->silverButton->AutoSize = true;
			this->silverButton->Location = System::Drawing::Point(16, 157);
			this->silverButton->Name = L"silverButton";
			this->silverButton->Size = System::Drawing::Size(51, 17);
			this->silverButton->TabIndex = 14;
			this->silverButton->Text = L"Silver";
			this->silverButton->UseVisualStyleBackColor = true;
			// 
			// platinumButton
			// 
			this->platinumButton->AutoSize = true;
			this->platinumButton->Location = System::Drawing::Point(16, 134);
			this->platinumButton->Name = L"platinumButton";
			this->platinumButton->Size = System::Drawing::Size(65, 17);
			this->platinumButton->TabIndex = 13;
			this->platinumButton->Text = L"Platinum";
			this->platinumButton->UseVisualStyleBackColor = true;
			// 
			// iceButton
			// 
			this->iceButton->AutoSize = true;
			this->iceButton->Location = System::Drawing::Point(16, 272);
			this->iceButton->Name = L"iceButton";
			this->iceButton->Size = System::Drawing::Size(40, 17);
			this->iceButton->TabIndex = 8;
			this->iceButton->Text = L"Ice";
			this->iceButton->UseVisualStyleBackColor = true;
			// 
			// zincButton
			// 
			this->zincButton->AutoSize = true;
			this->zincButton->Location = System::Drawing::Point(16, 88);
			this->zincButton->Name = L"zincButton";
			this->zincButton->Size = System::Drawing::Size(46, 17);
			this->zincButton->TabIndex = 12;
			this->zincButton->Text = L"Zinc";
			this->zincButton->UseVisualStyleBackColor = true;
			// 
			// goldButton
			// 
			this->goldButton->AutoSize = true;
			this->goldButton->Location = System::Drawing::Point(16, 65);
			this->goldButton->Name = L"goldButton";
			this->goldButton->Size = System::Drawing::Size(47, 17);
			this->goldButton->TabIndex = 2;
			this->goldButton->Text = L"Gold";
			this->goldButton->UseVisualStyleBackColor = true;
			// 
			// copperButton
			// 
			this->copperButton->AutoSize = true;
			this->copperButton->Location = System::Drawing::Point(16, 226);
			this->copperButton->Name = L"copperButton";
			this->copperButton->Size = System::Drawing::Size(59, 17);
			this->copperButton->TabIndex = 4;
			this->copperButton->Text = L"Copper";
			this->copperButton->UseVisualStyleBackColor = true;
			// 
			// aluminumButton
			// 
			this->aluminumButton->AutoSize = true;
			this->aluminumButton->Location = System::Drawing::Point(16, 42);
			this->aluminumButton->Name = L"aluminumButton";
			this->aluminumButton->Size = System::Drawing::Size(70, 17);
			this->aluminumButton->TabIndex = 6;
			this->aluminumButton->Text = L"Aluminum";
			this->aluminumButton->UseVisualStyleBackColor = true;
			// 
			// ironButton
			// 
			this->ironButton->AutoSize = true;
			this->ironButton->Location = System::Drawing::Point(16, 111);
			this->ironButton->Name = L"ironButton";
			this->ironButton->Size = System::Drawing::Size(43, 17);
			this->ironButton->TabIndex = 5;
			this->ironButton->Text = L"Iron";
			this->ironButton->UseVisualStyleBackColor = true;
			// 
			// antimonyButton
			// 
			this->antimonyButton->AutoSize = true;
			this->antimonyButton->Checked = true;
			this->antimonyButton->Location = System::Drawing::Point(16, 19);
			this->antimonyButton->Name = L"antimonyButton";
			this->antimonyButton->Size = System::Drawing::Size(68, 17);
			this->antimonyButton->TabIndex = 3;
			this->antimonyButton->TabStop = true;
			this->antimonyButton->Text = L"Antimony";
			this->antimonyButton->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(416, 24);
			this->menuStrip1->TabIndex = 20;
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
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MeltingCalc::howToUseToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MeltingCalc::aboutToolStripMenuItem_Click);
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
			this->variablesBox->Location = System::Drawing::Point(148, 25);
			this->variablesBox->Name = L"variablesBox";
			this->variablesBox->Size = System::Drawing::Size(256, 197);
			this->variablesBox->TabIndex = 21;
			this->variablesBox->TabStop = false;
			this->variablesBox->Text = L"Variables";
			// 
			// copyButton
			// 
			this->copyButton->ForeColor = System::Drawing::Color::Black;
			this->copyButton->Location = System::Drawing::Point(207, 135);
			this->copyButton->Name = L"copyButton";
			this->copyButton->Size = System::Drawing::Size(40, 23);
			this->copyButton->TabIndex = 20;
			this->copyButton->Text = L"Copy";
			this->copyButton->UseVisualStyleBackColor = true;
			// 
			// answerBox
			// 
			this->answerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->answerBox->Location = System::Drawing::Point(48, 136);
			this->answerBox->Name = L"answerBox";
			this->answerBox->ReadOnly = true;
			this->answerBox->Size = System::Drawing::Size(159, 21);
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
			this->eraseButton->Click += gcnew System::EventHandler(this, &MeltingCalc::eraseButton_Click);
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(9, 59);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(238, 23);
			this->calculateButton->TabIndex = 12;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MeltingCalc::calculateButton_Click);
			// 
			// answerText
			// 
			this->answerText->AutoSize = true;
			this->answerText->Location = System::Drawing::Point(6, 139);
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
			this->answerTemp->Location = System::Drawing::Point(154, 251);
			this->answerTemp->MaximumSize = System::Drawing::Size(205, 0);
			this->answerTemp->Name = L"answerTemp";
			this->answerTemp->Size = System::Drawing::Size(83, 13);
			this->answerTemp->TabIndex = 16;
			this->answerTemp->Text = L"TempAnswerLbl";
			this->answerTemp->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->answerTemp->Visible = false;
			// 
			// debugLabel
			// 
			this->debugLabel->AutoSize = true;
			this->debugLabel->BackColor = System::Drawing::Color::Transparent;
			this->debugLabel->ForeColor = System::Drawing::Color::Red;
			this->debugLabel->Location = System::Drawing::Point(154, 230);
			this->debugLabel->Name = L"debugLabel";
			this->debugLabel->Size = System::Drawing::Size(68, 13);
			this->debugLabel->TabIndex = 14;
			this->debugLabel->Text = L"Debug Label";
			this->debugLabel->Visible = false;
			// 
			// MeltingCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 360);
			this->Controls->Add(this->variablesBox);
			this->Controls->Add(this->answerTemp);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->materialBox);
			this->Controls->Add(this->debugLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(432, 399);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(432, 399);
			this->Name = L"MeltingCalc";
			this->Text = L"Q Calculator";
			this->Load += gcnew System::EventHandler(this, &MeltingCalc::MeltingCalc_Load);
			this->materialBox->ResumeLayout(false);
			this->materialBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customLHValue))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->variablesBox->ResumeLayout(false);
			this->variablesBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AboutPage ^ about = gcnew AboutPage();
	about->ShowDialog();
}

private: System::Void MeltingCalc_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	float massInt = (float)massNum->Value;
	float answerInt;

	if (antimonyButton->Checked == true)
	{
		answerInt = massInt * 59000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (aluminumButton->Checked == true)
	{
		answerInt = massInt * 390000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (goldButton->Checked == true)
	{
		answerInt = massInt * 67000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (zincButton->Checked == true)
	{
		answerInt = massInt * 11000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (ironButton->Checked == true)
	{
		answerInt = massInt * 270000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (platinumButton->Checked == true)
	{
		answerInt = massInt * 110000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (silverButton->Checked == true)
	{
		answerInt = massInt * 87000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (sulfurButton->Checked == true)
	{
		answerInt = massInt * 55000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (leadButton->Checked == true)
	{
		answerInt = massInt * 25000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (copperButton->Checked == true)
	{
		answerInt = massInt * 210000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (tungstenButton->Checked == true)
	{
		answerInt = massInt * 180000;
		Double answerDec = (Double)answerInt;
		String ^ answerStr = System::Convert::ToString(answerDec);
		this->answerBox->Text = answerStr + " J";
	}
	if (iceButton->Checked == true)
	{
		answerInt = massInt * 330000;
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
private: System::Void eraseButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->massNum->Value = 0;
	this->customLHValue->Value = 0;
	this->answerBox->Text = "";
}
private: System::Void howToUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	htuMelt ^ htu = gcnew htuMelt();
	htu->Show();
}
};
}
