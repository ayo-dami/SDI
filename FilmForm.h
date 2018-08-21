#pragma once

namespace SDIGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FilmForm
	/// </summary>
	public ref class FilmForm : public System::Windows::Forms::Form
	{
	public:
		FilmForm(void)
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
		~FilmForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label9;
	protected:
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  Summary;
	private: System::Windows::Forms::Label^  summaryTxt;
	private: System::Windows::Forms::Label^  releaseState;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  addstate;
	private: System::Windows::Forms::Label^  addruntime;
	private: System::Windows::Forms::Label^  addlanguage;
	private: System::Windows::Forms::Label^  addcrew;
	private: System::Windows::Forms::Label^  addrelease;
	private: System::Windows::Forms::Label^  addgenre;
	private: System::Windows::Forms::Label^  addfilmtitle2;


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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Summary = (gcnew System::Windows::Forms::Label());
			this->summaryTxt = (gcnew System::Windows::Forms::Label());
			this->releaseState = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->addstate = (gcnew System::Windows::Forms::Label());
			this->addruntime = (gcnew System::Windows::Forms::Label());
			this->addlanguage = (gcnew System::Windows::Forms::Label());
			this->addcrew = (gcnew System::Windows::Forms::Label());
			this->addrelease = (gcnew System::Windows::Forms::Label());
			this->addgenre = (gcnew System::Windows::Forms::Label());
			this->addfilmtitle2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(421, 124);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 17);
			this->label9->TabIndex = 50;
			this->label9->Text = L"Crew:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(73, 403);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 17);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Run Time:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(72, 374);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 17);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Languages:";
			// 
			// Summary
			// 
			this->Summary->AutoSize = true;
			this->Summary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Summary->Location = System::Drawing::Point(69, 103);
			this->Summary->Name = L"Summary";
			this->Summary->Size = System::Drawing::Size(71, 17);
			this->Summary->TabIndex = 47;
			this->Summary->Text = L"Summary:";
			// 
			// summaryTxt
			// 
			this->summaryTxt->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->summaryTxt->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->summaryTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->summaryTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->summaryTxt->Location = System::Drawing::Point(69, 123);
			this->summaryTxt->MaximumSize = System::Drawing::Size(300, 220);
			this->summaryTxt->Name = L"summaryTxt";
			this->summaryTxt->Size = System::Drawing::Size(300, 146);
			this->summaryTxt->TabIndex = 46;
			this->summaryTxt->Text = L"A computer hacker learns from mysterious rebels about the true nature of his real"
				L"ity and his role in the war against its controllers.";
			// 
			// releaseState
			// 
			this->releaseState->AutoSize = true;
			this->releaseState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->releaseState->Location = System::Drawing::Point(72, 321);
			this->releaseState->Name = L"releaseState";
			this->releaseState->Size = System::Drawing::Size(101, 17);
			this->releaseState->TabIndex = 45;
			this->releaseState->Text = L"Release State:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(73, 348);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Release Date:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(72, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 17);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Genre:";
			// 
			// addstate
			// 
			this->addstate->AutoSize = true;
			this->addstate->BackColor = System::Drawing::Color::SteelBlue;
			this->addstate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addstate->Location = System::Drawing::Point(179, 323);
			this->addstate->Name = L"addstate";
			this->addstate->Size = System::Drawing::Size(0, 16);
			this->addstate->TabIndex = 42;
			// 
			// addruntime
			// 
			this->addruntime->AutoSize = true;
			this->addruntime->BackColor = System::Drawing::Color::SteelBlue;
			this->addruntime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addruntime->Location = System::Drawing::Point(177, 405);
			this->addruntime->Name = L"addruntime";
			this->addruntime->Size = System::Drawing::Size(0, 16);
			this->addruntime->TabIndex = 41;
			// 
			// addlanguage
			// 
			this->addlanguage->AutoSize = true;
			this->addlanguage->BackColor = System::Drawing::Color::SteelBlue;
			this->addlanguage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addlanguage->Location = System::Drawing::Point(176, 374);
			this->addlanguage->Name = L"addlanguage";
			this->addlanguage->Size = System::Drawing::Size(0, 16);
			this->addlanguage->TabIndex = 40;
			// 
			// addcrew
			// 
			this->addcrew->AutoSize = true;
			this->addcrew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addcrew->Location = System::Drawing::Point(421, 141);
			this->addcrew->Name = L"addcrew";
			this->addcrew->Size = System::Drawing::Size(93, 16);
			this->addcrew->TabIndex = 39;
			this->addcrew->Text = L"crewMembers";
			// 
			// addrelease
			// 
			this->addrelease->AutoSize = true;
			this->addrelease->BackColor = System::Drawing::Color::SteelBlue;
			this->addrelease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addrelease->Location = System::Drawing::Point(177, 348);
			this->addrelease->Name = L"addrelease";
			this->addrelease->Size = System::Drawing::Size(0, 16);
			this->addrelease->TabIndex = 38;
			// 
			// addgenre
			// 
			this->addgenre->AutoSize = true;
			this->addgenre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addgenre->Location = System::Drawing::Point(179, 295);
			this->addgenre->Name = L"addgenre";
			this->addgenre->Size = System::Drawing::Size(0, 16);
			this->addgenre->TabIndex = 37;
			// 
			// addfilmtitle2
			// 
			this->addfilmtitle2->AutoSize = true;
			this->addfilmtitle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->addfilmtitle2->Location = System::Drawing::Point(62, 27);
			this->addfilmtitle2->Name = L"addfilmtitle2";
			this->addfilmtitle2->Size = System::Drawing::Size(186, 55);
			this->addfilmtitle2->TabIndex = 36;
			this->addfilmtitle2->Text = L"filmTitle";
			this->addfilmtitle2->Click += gcnew System::EventHandler(this, &FilmForm::addfilmtitle2_Click);
			// 
			// FilmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 448);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Summary);
			this->Controls->Add(this->summaryTxt);
			this->Controls->Add(this->releaseState);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->addstate);
			this->Controls->Add(this->addruntime);
			this->Controls->Add(this->addlanguage);
			this->Controls->Add(this->addcrew);
			this->Controls->Add(this->addrelease);
			this->Controls->Add(this->addgenre);
			this->Controls->Add(this->addfilmtitle2);
			this->Name = L"FilmForm";
			this->Text = L"FilmForm";
			this->Load += gcnew System::EventHandler(this, &FilmForm::FilmForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FilmForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void addfilmtitle2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
