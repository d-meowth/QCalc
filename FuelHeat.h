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
	/// Summary for FuelHeat
	/// </summary>
	public ref class FuelHeat : public System::Windows::Forms::Form
	{
	public:
		FuelHeat(void)
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
		~FuelHeat()
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
	private: System::Windows::Forms::RadioButton^  oilButton;

	private: System::Windows::Forms::RadioButton^  woodButton;

	private: System::Windows::Forms::RadioButton^  dieselButton;


	private: System::Windows::Forms::RadioButton^  gasButton;
	private: System::Windows::Forms::RadioButton^  petrolButton;



	private: System::Windows::Forms::RadioButton^  alcoholButton;
	private: System::Windows::Forms::RadioButton^  charcoalButton;



	private: System::Windows::Forms::RadioButton^  coalButton;




	private: System::Windows::Forms::GroupBox^  variablesBox;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  answerTemp;
	private: System::Windows::Forms::TextBox^  answerBox;
	private: System::Windows::Forms::Label^  kg;
	private: System::Windows::Forms::Button^  eraseButton;

	private: System::Windows::Forms::Label^  debugLabel;
	private: System::Windows::Forms::Button^  calculateButton;
	private: System::Windows::Forms::Label^  answerText;
	private: System::Windows::Forms::NumericUpDown^  massNum;
	private: System::Windows::Forms::Label^  massLabel;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToUseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^  keroseneButton;
	private: System::Windows::Forms::RadioButton^  hydrigenButton;
	private: System::Windows::Forms::RadioButton^  gunPwdrButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FuelHeat::typeid));
			this->materialBox = (gcnew System::Windows::Forms::GroupBox());
			this->keroseneButton = (gcnew System::Windows::Forms::RadioButton());
			this->hydrigenButton = (gcnew System::Windows::Forms::RadioButton());
			this->gunPwdrButton = (gcnew System::Windows::Forms::RadioButton());
			this->customLHValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->customButton = (gcnew System::Windows::Forms::RadioButton());
			this->oilButton = (gcnew System::Windows::Forms::RadioButton());
			this->woodButton = (gcnew System::Windows::Forms::RadioButton());
			this->dieselButton = (gcnew System::Windows::Forms::RadioButton());
			this->gasButton = (gcnew System::Windows::Forms::RadioButton());
			this->petrolButton = (gcnew System::Windows::Forms::RadioButton());
			this->alcoholButton = (gcnew System::Windows::Forms::RadioButton());
			this->charcoalButton = (gcnew System::Windows::Forms::RadioButton());
			this->coalButton = (gcnew System::Windows::Forms::RadioButton());
			this->variablesBox = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->answerBox = (gcnew System::Windows::Forms::TextBox());
			this->kg = (gcnew System::Windows::Forms::Label());
			this->eraseButton = (gcnew System::Windows::Forms::Button());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->answerText = (gcnew System::Windows::Forms::Label());
			this->massNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->massLabel = (gcnew System::Windows::Forms::Label());
			this->answerTemp = (gcnew System::Windows::Forms::Label());
			this->debugLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materialBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customLHValue))->BeginInit();
			this->variablesBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// materialBox
			// 
			this->materialBox->Controls->Add(this->keroseneButton);
			this->materialBox->Controls->Add(this->hydrigenButton);
			this->materialBox->Controls->Add(this->gunPwdrButton);
			this->materialBox->Controls->Add(this->customLHValue);
			this->materialBox->Controls->Add(this->customButton);
			this->materialBox->Controls->Add(this->oilButton);
			this->materialBox->Controls->Add(this->woodButton);
			this->materialBox->Controls->Add(this->dieselButton);
			this->materialBox->Controls->Add(this->gasButton);
			this->materialBox->Controls->Add(this->petrolButton);
			this->materialBox->Controls->Add(this->alcoholButton);
			this->materialBox->Controls->Add(this->charcoalButton);
			this->materialBox->Controls->Add(this->coalButton);
			this->materialBox->Location = System::Drawing::Point(10, 27);
			this->materialBox->Name = L"materialBox";
			this->materialBox->Size = System::Drawing::Size(130, 299);
			this->materialBox->TabIndex = 20;
			this->materialBox->TabStop = false;
			this->materialBox->Text = L"Material";
			// 
			// keroseneButton
			// 
			this->keroseneButton->AutoSize = true;
			this->keroseneButton->Location = System::Drawing::Point(16, 249);
			this->keroseneButton->Name = L"keroseneButton";
			this->keroseneButton->Size = System::Drawing::Size(70, 17);
			this->keroseneButton->TabIndex = 14;
			this->keroseneButton->Text = L"Kerosene";
			this->keroseneButton->UseVisualStyleBackColor = true;
			// 
			// hydrigenButton
			// 
			this->hydrigenButton->AutoSize = true;
			this->hydrigenButton->Location = System::Drawing::Point(16, 226);
			this->hydrigenButton->Name = L"hydrigenButton";
			this->hydrigenButton->Size = System::Drawing::Size(71, 17);
			this->hydrigenButton->TabIndex = 13;
			this->hydrigenButton->Text = L"Hydrogen";
			this->hydrigenButton->UseVisualStyleBackColor = true;
			// 
			// gunPwdrButton
			// 
			this->gunPwdrButton->AutoSize = true;
			this->gunPwdrButton->Location = System::Drawing::Point(16, 203);
			this->gunPwdrButton->Name = L"gunPwdrButton";
			this->gunPwdrButton->Size = System::Drawing::Size(83, 17);
			this->gunPwdrButton->TabIndex = 12;
			this->gunPwdrButton->Text = L"Gun powder";
			this->gunPwdrButton->UseVisualStyleBackColor = true;
			// 
			// customLHValue
			// 
			this->customLHValue->Location = System::Drawing::Point(36, 271);
			this->customLHValue->Name = L"customLHValue";
			this->customLHValue->Size = System::Drawing::Size(88, 20);
			this->customLHValue->TabIndex = 11;
			// 
			// customButton
			// 
			this->customButton->AutoSize = true;
			this->customButton->Location = System::Drawing::Point(16, 273);
			this->customButton->Name = L"customButton";
			this->customButton->Size = System::Drawing::Size(14, 13);
			this->customButton->TabIndex = 10;
			this->customButton->UseVisualStyleBackColor = true;
			// 
			// oilButton
			// 
			this->oilButton->AutoSize = true;
			this->oilButton->Location = System::Drawing::Point(16, 180);
			this->oilButton->Name = L"oilButton";
			this->oilButton->Size = System::Drawing::Size(37, 17);
			this->oilButton->TabIndex = 9;
			this->oilButton->Text = L"Oil";
			this->oilButton->UseVisualStyleBackColor = true;
			// 
			// woodButton
			// 
			this->woodButton->AutoSize = true;
			this->woodButton->Location = System::Drawing::Point(16, 157);
			this->woodButton->Name = L"woodButton";
			this->woodButton->Size = System::Drawing::Size(99, 17);
			this->woodButton->TabIndex = 8;
			this->woodButton->Text = L"Wood (dry logs)";
			this->woodButton->UseVisualStyleBackColor = true;
			// 
			// dieselButton
			// 
			this->dieselButton->AutoSize = true;
			this->dieselButton->Location = System::Drawing::Point(16, 134);
			this->dieselButton->Name = L"dieselButton";
			this->dieselButton->Size = System::Drawing::Size(54, 17);
			this->dieselButton->TabIndex = 7;
			this->dieselButton->Text = L"Diesel";
			this->dieselButton->UseVisualStyleBackColor = true;
			// 
			// gasButton
			// 
			this->gasButton->AutoSize = true;
			this->gasButton->Location = System::Drawing::Point(16, 111);
			this->gasButton->Name = L"gasButton";
			this->gasButton->Size = System::Drawing::Size(85, 17);
			this->gasButton->TabIndex = 6;
			this->gasButton->Text = L"Gas (natural)";
			this->gasButton->UseVisualStyleBackColor = true;
			// 
			// petrolButton
			// 
			this->petrolButton->AutoSize = true;
			this->petrolButton->Location = System::Drawing::Point(16, 88);
			this->petrolButton->Name = L"petrolButton";
			this->petrolButton->Size = System::Drawing::Size(52, 17);
			this->petrolButton->TabIndex = 5;
			this->petrolButton->Text = L"Petrol";
			this->petrolButton->UseVisualStyleBackColor = true;
			// 
			// alcoholButton
			// 
			this->alcoholButton->AutoSize = true;
			this->alcoholButton->Checked = true;
			this->alcoholButton->Location = System::Drawing::Point(16, 19);
			this->alcoholButton->Name = L"alcoholButton";
			this->alcoholButton->Size = System::Drawing::Size(60, 17);
			this->alcoholButton->TabIndex = 2;
			this->alcoholButton->TabStop = true;
			this->alcoholButton->Text = L"Alcohol";
			this->alcoholButton->UseVisualStyleBackColor = true;
			// 
			// charcoalButton
			// 
			this->charcoalButton->AutoSize = true;
			this->charcoalButton->Location = System::Drawing::Point(16, 65);
			this->charcoalButton->Name = L"charcoalButton";
			this->charcoalButton->Size = System::Drawing::Size(67, 17);
			this->charcoalButton->TabIndex = 4;
			this->charcoalButton->Text = L"Charcoal";
			this->charcoalButton->UseVisualStyleBackColor = true;
			// 
			// coalButton
			// 
			this->coalButton->AutoSize = true;
			this->coalButton->Location = System::Drawing::Point(16, 42);
			this->coalButton->Name = L"coalButton";
			this->coalButton->Size = System::Drawing::Size(46, 17);
			this->coalButton->TabIndex = 3;
			this->coalButton->Text = L"Coal";
			this->coalButton->UseVisualStyleBackColor = true;
			// 
			// variablesBox
			// 
			this->variablesBox->BackColor = System::Drawing::Color::Transparent;
			this->variablesBox->Controls->Add(this->button1);
			this->variablesBox->Controls->Add(this->answerBox);
			this->variablesBox->Controls->Add(this->kg);
			this->variablesBox->Controls->Add(this->eraseButton);
			this->variablesBox->Controls->Add(this->calculateButton);
			this->variablesBox->Controls->Add(this->answerText);
			this->variablesBox->Controls->Add(this->massNum);
			this->variablesBox->Controls->Add(this->massLabel);
			this->variablesBox->Location = System::Drawing::Point(146, 27);
			this->variablesBox->Name = L"variablesBox";
			this->variablesBox->Size = System::Drawing::Size(256, 163);
			this->variablesBox->TabIndex = 21;
			this->variablesBox->TabStop = false;
			this->variablesBox->Text = L"Variables";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(206, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Copy";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// answerBox
			// 
			this->answerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->answerBox->Location = System::Drawing::Point(47, 129);
			this->answerBox->Name = L"answerBox";
			this->answerBox->ReadOnly = true;
			this->answerBox->Size = System::Drawing::Size(159, 21);
			this->answerBox->TabIndex = 19;
			// 
			// kg
			// 
			this->kg->AutoSize = true;
			this->kg->Location = System::Drawing::Point(234, 18);
			this->kg->Name = L"kg";
			this->kg->Size = System::Drawing::Size(19, 13);
			this->kg->TabIndex = 11;
			this->kg->Text = L"kg";
			// 
			// eraseButton
			// 
			this->eraseButton->Location = System::Drawing::Point(8, 85);
			this->eraseButton->Name = L"eraseButton";
			this->eraseButton->Size = System::Drawing::Size(238, 23);
			this->eraseButton->TabIndex = 13;
			this->eraseButton->Text = L"Reset";
			this->eraseButton->UseVisualStyleBackColor = true;
			this->eraseButton->Click += gcnew System::EventHandler(this, &FuelHeat::eraseButton_Click);
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(8, 56);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(238, 23);
			this->calculateButton->TabIndex = 12;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &FuelHeat::calculateButton_Click);
			// 
			// answerText
			// 
			this->answerText->AutoSize = true;
			this->answerText->Location = System::Drawing::Point(5, 132);
			this->answerText->Name = L"answerText";
			this->answerText->Size = System::Drawing::Size(45, 13);
			this->answerText->TabIndex = 18;
			this->answerText->Text = L"Answer:";
			this->answerText->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// massNum
			// 
			this->massNum->DecimalPlaces = 4;
			this->massNum->Location = System::Drawing::Point(116, 16);
			this->massNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->massNum->Name = L"massNum";
			this->massNum->Size = System::Drawing::Size(112, 20);
			this->massNum->TabIndex = 17;
			this->massNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// massLabel
			// 
			this->massLabel->AutoSize = true;
			this->massLabel->Location = System::Drawing::Point(79, 18);
			this->massLabel->Name = L"massLabel";
			this->massLabel->Size = System::Drawing::Size(32, 13);
			this->massLabel->TabIndex = 9;
			this->massLabel->Text = L"Mass";
			// 
			// answerTemp
			// 
			this->answerTemp->AutoSize = true;
			this->answerTemp->ForeColor = System::Drawing::Color::Red;
			this->answerTemp->Location = System::Drawing::Point(151, 232);
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
			this->debugLabel->Location = System::Drawing::Point(151, 207);
			this->debugLabel->Name = L"debugLabel";
			this->debugLabel->Size = System::Drawing::Size(68, 13);
			this->debugLabel->TabIndex = 14;
			this->debugLabel->Text = L"Debug Label";
			this->debugLabel->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(414, 24);
			this->menuStrip1->TabIndex = 22;
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
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &FuelHeat::howToUseToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &FuelHeat::aboutToolStripMenuItem_Click);
			// 
			// FuelHeat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 338);
			this->Controls->Add(this->materialBox);
			this->Controls->Add(this->answerTemp);
			this->Controls->Add(this->variablesBox);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->debugLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FuelHeat";
			this->Text = L"Q Calculator";
			this->materialBox->ResumeLayout(false);
			this->materialBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customLHValue))->EndInit();
			this->variablesBox->ResumeLayout(false);
			this->variablesBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massNum))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e) {
		float massInt = (float)massNum->Value;
		float answerInt;

		if (alcoholButton->Checked == true)
		{
			answerInt = massInt * 27000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (coalButton->Checked == true)
		{
			answerInt = massInt * 27000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (charcoalButton->Checked == true)
		{
			answerInt = massInt * 34000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (petrolButton->Checked == true)
		{
			answerInt = massInt * 46000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (gasButton->Checked == true)
		{
			answerInt = massInt * 44000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (dieselButton->Checked == true)
		{
			answerInt = massInt * 43000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (woodButton->Checked == true)
		{
			answerInt = massInt * 10000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (oilButton->Checked == true)
		{
			answerInt = massInt * 44000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (gunPwdrButton->Checked == true)
		{
			answerInt = massInt * 3800000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (hydrigenButton->Checked == true)
		{
			answerInt = massInt * 120000000;
			Double answerDec = (Double)answerInt;
			String ^ answerStr = System::Convert::ToString(answerDec);
			this->answerBox->Text = answerStr + " J";
		}
		if (keroseneButton->Checked == true)
		{
			answerInt = massInt * 46000000;
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
private: System::Void eraseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->massNum->Value = 0;
	this->customLHValue->Value = 0;
	this->answerBox->Text = "";
}
private: System::Void howToUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	htuMelt ^ htu = gcnew htuMelt();
	htu->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->answerBox->Copy();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutPage ^ about = gcnew AboutPage();
	about->ShowDialog();
}
};
}
