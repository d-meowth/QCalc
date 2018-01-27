#pragma once
#include "MainUI.h"
#include "AboutPage.h"
#include "MeltingCalc.h"
#include "VaporHeat.h"
#include "FuelHeat.h"

namespace QCalcUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WelcomePage
	/// </summary>
	public ref class WelcomePage : public System::Windows::Forms::Form
	{
	public:
		WelcomePage(void)
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
		~WelcomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  windowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  heatEnergyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  meltingEnergyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vaporEnergyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fuelEnergyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomePage::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->windowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->heatEnergyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meltingEnergyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vaporEnergyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fuelEnergyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->windowToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(421, 24);
			this->menuStrip1->TabIndex = 20;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// windowToolStripMenuItem
			// 
			this->windowToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->heatEnergyToolStripMenuItem,
					this->meltingEnergyToolStripMenuItem, this->vaporEnergyToolStripMenuItem, this->fuelEnergyToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->windowToolStripMenuItem->Name = L"windowToolStripMenuItem";
			this->windowToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->windowToolStripMenuItem->Text = L"Window";
			// 
			// heatEnergyToolStripMenuItem
			// 
			this->heatEnergyToolStripMenuItem->Name = L"heatEnergyToolStripMenuItem";
			this->heatEnergyToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->heatEnergyToolStripMenuItem->Text = L"Heat Energy";
			this->heatEnergyToolStripMenuItem->Click += gcnew System::EventHandler(this, &WelcomePage::heatEnergyToolStripMenuItem_Click);
			// 
			// meltingEnergyToolStripMenuItem
			// 
			this->meltingEnergyToolStripMenuItem->Name = L"meltingEnergyToolStripMenuItem";
			this->meltingEnergyToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->meltingEnergyToolStripMenuItem->Text = L"Melting Energy";
			this->meltingEnergyToolStripMenuItem->Click += gcnew System::EventHandler(this, &WelcomePage::meltingEnergyToolStripMenuItem_Click);
			// 
			// vaporEnergyToolStripMenuItem
			// 
			this->vaporEnergyToolStripMenuItem->Name = L"vaporEnergyToolStripMenuItem";
			this->vaporEnergyToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->vaporEnergyToolStripMenuItem->Text = L"Vapor Energy";
			this->vaporEnergyToolStripMenuItem->Click += gcnew System::EventHandler(this, &WelcomePage::vaporEnergyToolStripMenuItem_Click);
			// 
			// fuelEnergyToolStripMenuItem
			// 
			this->fuelEnergyToolStripMenuItem->Name = L"fuelEnergyToolStripMenuItem";
			this->fuelEnergyToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->fuelEnergyToolStripMenuItem->Text = L"Fuel Energy";
			this->fuelEnergyToolStripMenuItem->Click += gcnew System::EventHandler(this, &WelcomePage::fuelEnergyToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &WelcomePage::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &WelcomePage::aboutToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 83);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Q-Calc";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(13, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(83, 83);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// WelcomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 123);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(437, 162);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(437, 162);
			this->Name = L"WelcomePage";
			this->Text = L"Q Calculator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void heatEnergyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MainUI ^ heat = gcnew MainUI();
		heat->Show();
	}

	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutPage ^ about = gcnew AboutPage();
		about->ShowDialog();
	}	
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void meltingEnergyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MeltingCalc ^ melt = gcnew MeltingCalc();
	melt->Show();
}
private: System::Void vaporEnergyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	VaporHeat ^ vapor = gcnew VaporHeat();
	vapor->Show();
}
private: System::Void fuelEnergyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	FuelHeat ^ fuel = gcnew FuelHeat();
	fuel->Show();
}
};
}

