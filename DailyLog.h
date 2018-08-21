#pragma once
#include <string>
#include "MainScreen.h"
#include "binary_search_view.h"
#include "advanced_search_view.h"

namespace SDIGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DailyLog
	/// </summary>
	public ref class DailyLog : public System::Windows::Forms::Form
	{
	public:
		DailyLog(void)
		{
			InitializeComponent();
		}

		void addLogEntry(std::vector<std::string> entryText) 
		{
			for (std::string entry : entryText)
			{
				System::String^text = gcnew System::String(entry.c_str());
				txtBoxDailyLog->AppendText("\r\n" + text);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DailyLog()
		{
			if (components)
			{
				delete components;
			}
		}

		int numberOfLogEntries;
	private: System::Windows::Forms::Button^  closeButton;
	private: System::Windows::Forms::TextBox^  txtBoxDailyLog;

	protected:





	private: System::Windows::Forms::Label^  label1;
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
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->txtBoxDailyLog = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// closeButton
			// 
			this->closeButton->Location = System::Drawing::Point(535, 558);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(75, 30);
			this->closeButton->TabIndex = 0;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &DailyLog::button1_Click);
			// 
			// txtBoxDailyLog
			// 
			this->txtBoxDailyLog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxDailyLog->Location = System::Drawing::Point(10, 40);
			this->txtBoxDailyLog->Multiline = true;
			this->txtBoxDailyLog->Name = L"txtBoxDailyLog";
			this->txtBoxDailyLog->ReadOnly = true;
			this->txtBoxDailyLog->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtBoxDailyLog->Size = System::Drawing::Size(600, 512);
			this->txtBoxDailyLog->TabIndex = 1;
			this->txtBoxDailyLog->TextChanged += gcnew System::EventHandler(this, &DailyLog::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"TrekStar Pictures";
			// 
			// DailyLog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(614, 592);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtBoxDailyLog);
			this->Controls->Add(this->closeButton);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Location = System::Drawing::Point(9, 9);
			this->Name = L"DailyLog";
			this->Text = L"Daily Logger";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	};
}
