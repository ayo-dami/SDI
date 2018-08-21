#pragma once
#include "binary_search_view.h"
#include "advanced_search_view.h"

#include "FilmForm.h"
#include "DailyLog.h"
#include "CoreSource\header\DataStore.h"
#include "CoreSource\header\file_parser.h";

namespace SDIGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainScreen
	/// </summary>
	public ref class MainScreen : public System::Windows::Forms::Form
	{
	public:
		MainScreen(void)
		{
			Project *PRJ;
			SelectedProject = new Project;

			InitializeComponent();
			SelectedProject = PRJ;

			dailyLogGUI = gcnew DailyLog;
			dailyLogGUI->addLogEntry(DataStore::dailyLog.getAllEntries());

			this->searchComp = new Search;
			this->searchCompBinary = new BinarySearch;
			this->ProjectList = new std::vector<Project*>;
			//
			//TODO: Add the constructor code here
			//
		}
	public: FilmForm ^ film_view_form;
	public: binary_search_view^ binary_search_form;
	public: search_view^ advanced_search_form;	
	public: Search * searchComp;
	public: BinarySearch *searchCompBinary;
	public: DailyLog^ dailyLogGUI;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Genre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ReleaseDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CrewList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Language;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Runtime;


	private: Project * SelectedProject;
	private: Project * currentlySelectedProject;
	private: Project * newProject;
	private: String^ selectedMaterialItem;
	protected: System::Windows::Forms::TabControl^  tabMain;
	private: System::Windows::Forms::TabPage^  tabHome;
	private: System::Windows::Forms::TabPage^  tabEdit;




	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  btnreleased;

	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnUnreleased;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Button^  ad_searchBtn;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnEditReleased;


	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  State;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  Summary;

	private: System::Windows::Forms::Label^  releaseState;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  addstate;
	private: System::Windows::Forms::Label^  addruntime;
	private: System::Windows::Forms::Label^  addlanguage;
	private: System::Windows::Forms::Label^  addrelease;
	private: System::Windows::Forms::Label^  addgenre;
	private: System::Windows::Forms::Label^  addfilmtitle;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btnEditMaterials;

	private: System::Windows::Forms::Label^  addcrew;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  btnLogout;

	private: System::Windows::Forms::TabPage^  tabAdvSearch;
	private: System::Windows::Forms::TabPage^  norm_search;


	private: System::Windows::Forms::TextBox^  filmNameTxt;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  crew;
	private: System::Windows::Forms::TextBox^  crewNameTxt;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  releaseStateTxt;
	private: System::Windows::Forms::TextBox^  keyWordTxt;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DataGridView^  dataGridView4;







private: System::Windows::Forms::Button^  view;
private: System::Windows::Forms::Button^  button1;







private: System::Windows::Forms::TextBox^  keyWordTxt2;

private: System::Windows::Forms::ComboBox^  searchFieldTxt;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::DataGridView^  dataGridView5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
private: System::Windows::Forms::Button^  viewBtn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::Button^  btnDelete;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  txtnew_runtime;



private: System::Windows::Forms::TextBox^  txtnew_languages;





private: System::Windows::Forms::TextBox^  txtnew_genre;





private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  txtnew_crew;
private: System::Windows::Forms::Button^  btn_addnewprj;


private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  txtnew_date;
private: System::Windows::Forms::ComboBox^  txtnew_state;
private: System::Windows::Forms::Label^  lbledittitle;
private: System::Windows::Forms::TextBox^  txtnew_title;
private: System::Windows::Forms::Button^  newprojecbutton;
private: System::Windows::Forms::TextBox^  txt_summary;
private: System::Windows::Forms::TabPage^  tabMaterials;
private: System::Windows::Forms::Label^  lblTotlBox;



private: System::Windows::Forms::Label^  txtBoxTotal;
private: System::Windows::Forms::ComboBox^  comboListMaterials;
private: System::Windows::Forms::TextBox^  materialBox;



private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Button^  btnAddMaterials;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Button^  btnDeleteMaterial;
private: System::Windows::Forms::Button^  btnMaterial;
private: System::Windows::Forms::TextBox^  editMaterialBox;
private: System::Windows::Forms::Button^  editMaterialsButton;






	private: std::vector<Project*> *ProjectList;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainScreen()
		{
			delete SelectedProject;
			if (components)
			{
				delete components;
			}

			if (searchComp)
			{
				delete searchComp;
			}
			if (searchCompBinary)
			{
				delete searchCompBinary;
			}

			if (ProjectList)
			{
				delete ProjectList;
			}
		}

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
			this->Genre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ReleaseDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CrewList = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Language = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Runtime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabMain = (gcnew System::Windows::Forms::TabControl());
			this->tabHome = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnreleased = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnUnreleased = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ad_searchBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnEditReleased = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->State = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::Button());
			this->tabEdit = (gcnew System::Windows::Forms::TabPage());
			this->Summary = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxTotal = (gcnew System::Windows::Forms::Label());
			this->lblTotlBox = (gcnew System::Windows::Forms::Label());
			this->txt_summary = (gcnew System::Windows::Forms::TextBox());
			this->newprojecbutton = (gcnew System::Windows::Forms::Button());
			this->lbledittitle = (gcnew System::Windows::Forms::Label());
			this->txtnew_title = (gcnew System::Windows::Forms::TextBox());
			this->txtnew_state = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtnew_date = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_addnewprj = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addfilmtitle = (gcnew System::Windows::Forms::Label());
			this->addgenre = (gcnew System::Windows::Forms::Label());
			this->addstate = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->addrelease = (gcnew System::Windows::Forms::Label());
			this->addlanguage = (gcnew System::Windows::Forms::Label());
			this->addruntime = (gcnew System::Windows::Forms::Label());
			this->txtnew_crew = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->releaseState = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtnew_runtime = (gcnew System::Windows::Forms::TextBox());
			this->txtnew_languages = (gcnew System::Windows::Forms::TextBox());
			this->txtnew_genre = (gcnew System::Windows::Forms::TextBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnEditMaterials = (gcnew System::Windows::Forms::Button());
			this->addcrew = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabAdvSearch = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->view = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keyWordTxt = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->releaseStateTxt = (gcnew System::Windows::Forms::ComboBox());
			this->crew = (gcnew System::Windows::Forms::Label());
			this->crewNameTxt = (gcnew System::Windows::Forms::TextBox());
			this->filmNameTxt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->norm_search = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->viewBtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->searchFieldTxt = (gcnew System::Windows::Forms::ComboBox());
			this->keyWordTxt2 = (gcnew System::Windows::Forms::TextBox());
			this->tabMaterials = (gcnew System::Windows::Forms::TabPage());
			this->editMaterialBox = (gcnew System::Windows::Forms::TextBox());
			this->btnMaterial = (gcnew System::Windows::Forms::Button());
			this->btnDeleteMaterial = (gcnew System::Windows::Forms::Button());
			this->btnAddMaterials = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboListMaterials = (gcnew System::Windows::Forms::ComboBox());
			this->materialBox = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->editMaterialsButton = (gcnew System::Windows::Forms::Button());
			this->tabMain->SuspendLayout();
			this->tabHome->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabEdit->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabAdvSearch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->norm_search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabMaterials->SuspendLayout();
			this->SuspendLayout();
			// 
			// Genre
			// 
			this->Genre->HeaderText = L"Genre";
			this->Genre->Name = L"Genre";
			this->Genre->ReadOnly = true;
			// 
			// ReleaseDate
			// 
			this->ReleaseDate->HeaderText = L"Release Date";
			this->ReleaseDate->Name = L"ReleaseDate";
			this->ReleaseDate->ReadOnly = true;
			// 
			// CrewList
			// 
			this->CrewList->HeaderText = L"Crew Members";
			this->CrewList->Name = L"CrewList";
			this->CrewList->ReadOnly = true;
			// 
			// Language
			// 
			this->Language->HeaderText = L"Language";
			this->Language->Name = L"Language";
			this->Language->ReadOnly = true;
			// 
			// Runtime
			// 
			this->Runtime->HeaderText = L"Runtime";
			this->Runtime->Name = L"Runtime";
			this->Runtime->ReadOnly = true;
			// 
			// tabMain
			// 
			this->tabMain->Controls->Add(this->tabHome);
			this->tabMain->Controls->Add(this->tabEdit);
			this->tabMain->Controls->Add(this->tabAdvSearch);
			this->tabMain->Controls->Add(this->norm_search);
			this->tabMain->Controls->Add(this->tabMaterials);
			this->tabMain->Location = System::Drawing::Point(12, 12);
			this->tabMain->Name = L"tabMain";
			this->tabMain->SelectedIndex = 0;
			this->tabMain->Size = System::Drawing::Size(989, 469);
			this->tabMain->TabIndex = 38;
			// 
			// tabHome
			// 
			this->tabHome->BackColor = System::Drawing::Color::SteelBlue;
			this->tabHome->Controls->Add(this->button5);
			this->tabHome->Controls->Add(this->button4);
			this->tabHome->Controls->Add(this->btnreleased);
			this->tabHome->Controls->Add(this->dataGridView3);
			this->tabHome->Controls->Add(this->label1);
			this->tabHome->Controls->Add(this->btnUnreleased);
			this->tabHome->Controls->Add(this->dataGridView2);
			this->tabHome->Controls->Add(this->ad_searchBtn);
			this->tabHome->Controls->Add(this->label4);
			this->tabHome->Controls->Add(this->label3);
			this->tabHome->Controls->Add(this->searchBtn);
			this->tabHome->Controls->Add(this->groupBox1);
			this->tabHome->Location = System::Drawing::Point(4, 22);
			this->tabHome->Name = L"tabHome";
			this->tabHome->Padding = System::Windows::Forms::Padding(3);
			this->tabHome->Size = System::Drawing::Size(981, 443);
			this->tabHome->TabIndex = 1;
			this->tabHome->Text = L"Home";
			this->tabHome->Click += gcnew System::EventHandler(this, &MainScreen::tabPage2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button5->Location = System::Drawing::Point(689, 361);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(296, 29);
			this->button5->TabIndex = 61;
			this->button5->Text = L"Add/Edit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainScreen::button5_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(386, 361);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(297, 29);
			this->button4->TabIndex = 57;
			this->button4->Text = L"Add/Edit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainScreen::button4_Click_1);
			// 
			// btnreleased
			// 
			this->btnreleased->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnreleased->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnreleased->Location = System::Drawing::Point(689, 331);
			this->btnreleased->Name = L"btnreleased";
			this->btnreleased->Size = System::Drawing::Size(296, 29);
			this->btnreleased->TabIndex = 59;
			this->btnreleased->Text = L"Load Now Playing";
			this->btnreleased->UseVisualStyleBackColor = true;
			this->btnreleased->Click += gcnew System::EventHandler(this, &MainScreen::btnreleased_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn4
			});
			this->dataGridView3->Location = System::Drawing::Point(688, 87);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(296, 244);
			this->dataGridView3->TabIndex = 58;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Title";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"State";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(393, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 29);
			this->label1->TabIndex = 50;
			this->label1->Text = L"TrekStar Film Manager";
			// 
			// btnUnreleased
			// 
			this->btnUnreleased->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnUnreleased->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUnreleased->Location = System::Drawing::Point(386, 331);
			this->btnUnreleased->Name = L"btnUnreleased";
			this->btnUnreleased->Size = System::Drawing::Size(297, 29);
			this->btnUnreleased->TabIndex = 56;
			this->btnUnreleased->Text = L"Load Releases";
			this->btnUnreleased->UseVisualStyleBackColor = true;
			this->btnUnreleased->Click += gcnew System::EventHandler(this, &MainScreen::btnUnreleased_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->dataGridView2->Location = System::Drawing::Point(386, 87);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(296, 244);
			this->dataGridView2->TabIndex = 55;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Title";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 150;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"State";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// ad_searchBtn
			// 
			this->ad_searchBtn->Location = System::Drawing::Point(839, 17);
			this->ad_searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->ad_searchBtn->Name = L"ad_searchBtn";
			this->ad_searchBtn->Size = System::Drawing::Size(137, 29);
			this->ad_searchBtn->TabIndex = 54;
			this->ad_searchBtn->Text = L"Advanced Search";
			this->ad_searchBtn->UseVisualStyleBackColor = true;
			this->ad_searchBtn->Click += gcnew System::EventHandler(this, &MainScreen::ad_searchBtn_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(768, 64);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 20);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Now Playing";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(472, 64);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 20);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Upcoming";
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(689, 17);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(146, 29);
			this->searchBtn->TabIndex = 51;
			this->searchBtn->Text = L"Search";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &MainScreen::searchBtn_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->btnEditReleased);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->search);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(382, 402);
			this->groupBox1->TabIndex = 60;
			this->groupBox1->TabStop = false;
			// 
			// btnEditReleased
			// 
			this->btnEditReleased->Location = System::Drawing::Point(32, 350);
			this->btnEditReleased->Name = L"btnEditReleased";
			this->btnEditReleased->Size = System::Drawing::Size(293, 29);
			this->btnEditReleased->TabIndex = 11;
			this->btnEditReleased->Text = L"Add/Edit";
			this->btnEditReleased->UseVisualStyleBackColor = true;
			this->btnEditReleased->Click += gcnew System::EventHandler(this, &MainScreen::btnEditReleased_Click);
			this->btnEditReleased->MouseCaptureChanged += gcnew System::EventHandler(this, &MainScreen::tabEdit_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Title,
					this->State
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(293, 223);
			this->dataGridView1->TabIndex = 9;
			// 
			// Title
			// 
			this->Title->HeaderText = L"Title";
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			this->Title->Width = 150;
			// 
			// State
			// 
			this->State->HeaderText = L"State";
			this->State->Name = L"State";
			this->State->ReadOnly = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 36);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Recent Releases";
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::SystemColors::WindowText;
			this->search->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(29, 315);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(296, 29);
			this->search->TabIndex = 10;
			this->search->Text = L"Load Released Films";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &MainScreen::search_Click_1);
			// 
			// tabEdit
			// 
			this->tabEdit->BackColor = System::Drawing::Color::SteelBlue;
			this->tabEdit->Controls->Add(this->Summary);
			this->tabEdit->Controls->Add(this->label7);
			this->tabEdit->Controls->Add(this->groupBox2);
			this->tabEdit->Location = System::Drawing::Point(4, 22);
			this->tabEdit->Name = L"tabEdit";
			this->tabEdit->Padding = System::Windows::Forms::Padding(3);
			this->tabEdit->Size = System::Drawing::Size(981, 443);
			this->tabEdit->TabIndex = 0;
			this->tabEdit->Text = L"Management Page";
			this->tabEdit->Click += gcnew System::EventHandler(this, &MainScreen::tabEdit_Click);
			// 
			// Summary
			// 
			this->Summary->AutoSize = true;
			this->Summary->BackColor = System::Drawing::Color::White;
			this->Summary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Summary->Location = System::Drawing::Point(27, 89);
			this->Summary->Name = L"Summary";
			this->Summary->Size = System::Drawing::Size(71, 17);
			this->Summary->TabIndex = 62;
			this->Summary->Text = L"Summary:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(30, 281);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 17);
			this->label7->TabIndex = 58;
			this->label7->Text = L"Genre:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->txtBoxTotal);
			this->groupBox2->Controls->Add(this->lblTotlBox);
			this->groupBox2->Controls->Add(this->txt_summary);
			this->groupBox2->Controls->Add(this->newprojecbutton);
			this->groupBox2->Controls->Add(this->lbledittitle);
			this->groupBox2->Controls->Add(this->txtnew_title);
			this->groupBox2->Controls->Add(this->txtnew_state);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->txtnew_date);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->btn_addnewprj);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->addfilmtitle);
			this->groupBox2->Controls->Add(this->addgenre);
			this->groupBox2->Controls->Add(this->addstate);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->addrelease);
			this->groupBox2->Controls->Add(this->addlanguage);
			this->groupBox2->Controls->Add(this->addruntime);
			this->groupBox2->Controls->Add(this->txtnew_crew);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->releaseState);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->txtnew_runtime);
			this->groupBox2->Controls->Add(this->txtnew_languages);
			this->groupBox2->Controls->Add(this->txtnew_genre);
			this->groupBox2->Controls->Add(this->btnDelete);
			this->groupBox2->Controls->Add(this->btnEditMaterials);
			this->groupBox2->Controls->Add(this->addcrew);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Location = System::Drawing::Point(6, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(975, 441);
			this->groupBox2->TabIndex = 65;
			this->groupBox2->TabStop = false;
			// 
			// txtBoxTotal
			// 
			this->txtBoxTotal->AutoSize = true;
			this->txtBoxTotal->BackColor = System::Drawing::Color::White;
			this->txtBoxTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxTotal->Location = System::Drawing::Point(131, 404);
			this->txtBoxTotal->Name = L"txtBoxTotal";
			this->txtBoxTotal->Size = System::Drawing::Size(28, 16);
			this->txtBoxTotal->TabIndex = 73;
			this->txtBoxTotal->Text = L"null";
			// 
			// lblTotlBox
			// 
			this->lblTotlBox->AutoSize = true;
			this->lblTotlBox->BackColor = System::Drawing::Color::White;
			this->lblTotlBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lblTotlBox->Location = System::Drawing::Point(25, 386);
			this->lblTotlBox->Name = L"lblTotlBox";
			this->lblTotlBox->Size = System::Drawing::Size(109, 34);
			this->lblTotlBox->TabIndex = 72;
			this->lblTotlBox->Text = L"Total Box \r\nOffice Earnings:";
			// 
			// txt_summary
			// 
			this->txt_summary->Location = System::Drawing::Point(24, 103);
			this->txt_summary->Multiline = true;
			this->txt_summary->Name = L"txt_summary";
			this->txt_summary->Size = System::Drawing::Size(282, 154);
			this->txt_summary->TabIndex = 71;
			// 
			// newprojecbutton
			// 
			this->newprojecbutton->BackColor = System::Drawing::Color::Green;
			this->newprojecbutton->ForeColor = System::Drawing::Color::White;
			this->newprojecbutton->Location = System::Drawing::Point(699, 352);
			this->newprojecbutton->Name = L"newprojecbutton";
			this->newprojecbutton->Size = System::Drawing::Size(212, 49);
			this->newprojecbutton->TabIndex = 70;
			this->newprojecbutton->Text = L"Add New";
			this->newprojecbutton->UseVisualStyleBackColor = false;
			this->newprojecbutton->Click += gcnew System::EventHandler(this, &MainScreen::newprojecbutton_Click);
			// 
			// lbledittitle
			// 
			this->lbledittitle->AutoSize = true;
			this->lbledittitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbledittitle->Location = System::Drawing::Point(615, 61);
			this->lbledittitle->Name = L"lbledittitle";
			this->lbledittitle->Size = System::Drawing::Size(67, 16);
			this->lbledittitle->TabIndex = 69;
			this->lbledittitle->Text = L"New Title:";
			// 
			// txtnew_title
			// 
			this->txtnew_title->Location = System::Drawing::Point(699, 57);
			this->txtnew_title->Name = L"txtnew_title";
			this->txtnew_title->Size = System::Drawing::Size(212, 20);
			this->txtnew_title->TabIndex = 68;
			// 
			// txtnew_state
			// 
			this->txtnew_state->FormattingEnabled = true;
			this->txtnew_state->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"released", L"unreleased", L"nowplaying" });
			this->txtnew_state->Location = System::Drawing::Point(699, 110);
			this->txtnew_state->Name = L"txtnew_state";
			this->txtnew_state->Size = System::Drawing::Size(212, 21);
			this->txtnew_state->TabIndex = 67;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(566, 141);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(122, 16);
			this->label18->TabIndex = 66;
			this->label18->Text = L"NewRelease Date:";
			// 
			// txtnew_date
			// 
			this->txtnew_date->Location = System::Drawing::Point(699, 137);
			this->txtnew_date->Name = L"txtnew_date";
			this->txtnew_date->Size = System::Drawing::Size(212, 20);
			this->txtnew_date->TabIndex = 65;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(25, 343);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 17);
			this->label8->TabIndex = 64;
			this->label8->Text = L"Run Time:";
			// 
			// btn_addnewprj
			// 
			this->btn_addnewprj->BackColor = System::Drawing::Color::Green;
			this->btn_addnewprj->ForeColor = System::Drawing::Color::White;
			this->btn_addnewprj->Location = System::Drawing::Point(699, 297);
			this->btn_addnewprj->Name = L"btn_addnewprj";
			this->btn_addnewprj->Size = System::Drawing::Size(212, 49);
			this->btn_addnewprj->TabIndex = 48;
			this->btn_addnewprj->Text = L"Edit Project";
			this->btn_addnewprj->UseVisualStyleBackColor = false;
			this->btn_addnewprj->Click += gcnew System::EventHandler(this, &MainScreen::btn_addnewprj_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(24, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 17);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Languages:";
			// 
			// addfilmtitle
			// 
			this->addfilmtitle->AutoSize = true;
			this->addfilmtitle->BackColor = System::Drawing::Color::White;
			this->addfilmtitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->addfilmtitle->Location = System::Drawing::Point(6, 16);
			this->addfilmtitle->Name = L"addfilmtitle";
			this->addfilmtitle->Size = System::Drawing::Size(186, 55);
			this->addfilmtitle->TabIndex = 52;
			this->addfilmtitle->Text = L"filmTitle";
			// 
			// addgenre
			// 
			this->addgenre->AutoSize = true;
			this->addgenre->BackColor = System::Drawing::Color::White;
			this->addgenre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addgenre->Location = System::Drawing::Point(131, 275);
			this->addgenre->Name = L"addgenre";
			this->addgenre->Size = System::Drawing::Size(28, 16);
			this->addgenre->TabIndex = 53;
			this->addgenre->Text = L"null";
			this->addgenre->Click += gcnew System::EventHandler(this, &MainScreen::addgenre_Click);
			// 
			// addstate
			// 
			this->addstate->AutoSize = true;
			this->addstate->BackColor = System::Drawing::Color::White;
			this->addstate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addstate->ForeColor = System::Drawing::Color::Black;
			this->addstate->Location = System::Drawing::Point(131, 293);
			this->addstate->Name = L"addstate";
			this->addstate->Size = System::Drawing::Size(28, 16);
			this->addstate->TabIndex = 57;
			this->addstate->Text = L"null";
			this->addstate->Click += gcnew System::EventHandler(this, &MainScreen::addstate_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(622, 215);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 16);
			this->label17->TabIndex = 47;
			this->label17->Text = L"New Crew:";
			// 
			// addrelease
			// 
			this->addrelease->AutoSize = true;
			this->addrelease->BackColor = System::Drawing::Color::White;
			this->addrelease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addrelease->Location = System::Drawing::Point(131, 309);
			this->addrelease->Name = L"addrelease";
			this->addrelease->Size = System::Drawing::Size(28, 16);
			this->addrelease->TabIndex = 54;
			this->addrelease->Text = L"null";
			// 
			// addlanguage
			// 
			this->addlanguage->AutoSize = true;
			this->addlanguage->BackColor = System::Drawing::Color::White;
			this->addlanguage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addlanguage->Location = System::Drawing::Point(131, 327);
			this->addlanguage->Name = L"addlanguage";
			this->addlanguage->Size = System::Drawing::Size(28, 16);
			this->addlanguage->TabIndex = 55;
			this->addlanguage->Text = L"null";
			// 
			// addruntime
			// 
			this->addruntime->AutoSize = true;
			this->addruntime->BackColor = System::Drawing::Color::White;
			this->addruntime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addruntime->Location = System::Drawing::Point(131, 343);
			this->addruntime->Name = L"addruntime";
			this->addruntime->Size = System::Drawing::Size(28, 16);
			this->addruntime->TabIndex = 56;
			this->addruntime->Text = L"null";
			// 
			// txtnew_crew
			// 
			this->txtnew_crew->Location = System::Drawing::Point(699, 215);
			this->txtnew_crew->Multiline = true;
			this->txtnew_crew->Name = L"txtnew_crew";
			this->txtnew_crew->Size = System::Drawing::Size(212, 76);
			this->txtnew_crew->TabIndex = 46;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(594, 193);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(99, 16);
			this->label16->TabIndex = 45;
			this->label16->Text = L"New Run Time:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(24, 309);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 59;
			this->label6->Text = L"Release Date:";
			// 
			// releaseState
			// 
			this->releaseState->AutoSize = true;
			this->releaseState->BackColor = System::Drawing::Color::White;
			this->releaseState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->releaseState->Location = System::Drawing::Point(24, 292);
			this->releaseState->Name = L"releaseState";
			this->releaseState->Size = System::Drawing::Size(101, 17);
			this->releaseState->TabIndex = 60;
			this->releaseState->Text = L"Release State:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(584, 167);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 16);
			this->label15->TabIndex = 44;
			this->label15->Text = L"New Languages:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(566, 113);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(127, 16);
			this->label14->TabIndex = 43;
			this->label14->Text = L"New Release State:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(615, 87);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 16);
			this->label13->TabIndex = 42;
			this->label13->Text = L"New Genre:";
			// 
			// txtnew_runtime
			// 
			this->txtnew_runtime->Location = System::Drawing::Point(699, 189);
			this->txtnew_runtime->Name = L"txtnew_runtime";
			this->txtnew_runtime->Size = System::Drawing::Size(212, 20);
			this->txtnew_runtime->TabIndex = 41;
			// 
			// txtnew_languages
			// 
			this->txtnew_languages->Location = System::Drawing::Point(699, 163);
			this->txtnew_languages->Name = L"txtnew_languages";
			this->txtnew_languages->Size = System::Drawing::Size(212, 20);
			this->txtnew_languages->TabIndex = 40;
			// 
			// txtnew_genre
			// 
			this->txtnew_genre->Location = System::Drawing::Point(699, 83);
			this->txtnew_genre->Name = L"txtnew_genre";
			this->txtnew_genre->Size = System::Drawing::Size(212, 20);
			this->txtnew_genre->TabIndex = 38;
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::Maroon;
			this->btnDelete->ForeColor = System::Drawing::Color::White;
			this->btnDelete->Location = System::Drawing::Point(327, 103);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(212, 49);
			this->btnDelete->TabIndex = 37;
			this->btnDelete->Text = L"Delete Current Project";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MainScreen::btnDelete_Click);
			// 
			// btnEditMaterials
			// 
			this->btnEditMaterials->Location = System::Drawing::Point(327, 160);
			this->btnEditMaterials->Name = L"btnEditMaterials";
			this->btnEditMaterials->Size = System::Drawing::Size(212, 40);
			this->btnEditMaterials->TabIndex = 36;
			this->btnEditMaterials->Text = L"Edit Materials";
			this->btnEditMaterials->UseVisualStyleBackColor = true;
			this->btnEditMaterials->Click += gcnew System::EventHandler(this, &MainScreen::btnEditMaterials_Click);
			// 
			// addcrew
			// 
			this->addcrew->AutoSize = true;
			this->addcrew->BackColor = System::Drawing::Color::White;
			this->addcrew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addcrew->Location = System::Drawing::Point(131, 360);
			this->addcrew->Name = L"addcrew";
			this->addcrew->Size = System::Drawing::Size(28, 16);
			this->addcrew->TabIndex = 23;
			this->addcrew->Text = L"null";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(25, 360);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 17);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Crew:";
			// 
			// tabAdvSearch
			// 
			this->tabAdvSearch->Controls->Add(this->button1);
			this->tabAdvSearch->Controls->Add(this->view);
			this->tabAdvSearch->Controls->Add(this->dataGridView4);
			this->tabAdvSearch->Controls->Add(this->keyWordTxt);
			this->tabAdvSearch->Controls->Add(this->label12);
			this->tabAdvSearch->Controls->Add(this->label11);
			this->tabAdvSearch->Controls->Add(this->releaseStateTxt);
			this->tabAdvSearch->Controls->Add(this->crew);
			this->tabAdvSearch->Controls->Add(this->crewNameTxt);
			this->tabAdvSearch->Controls->Add(this->filmNameTxt);
			this->tabAdvSearch->Controls->Add(this->label10);
			this->tabAdvSearch->Location = System::Drawing::Point(4, 22);
			this->tabAdvSearch->Name = L"tabAdvSearch";
			this->tabAdvSearch->Padding = System::Windows::Forms::Padding(3);
			this->tabAdvSearch->Size = System::Drawing::Size(981, 443);
			this->tabAdvSearch->TabIndex = 2;
			this->tabAdvSearch->Text = L"Advanced Search";
			this->tabAdvSearch->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(336, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainScreen::button1_Click);
			// 
			// view
			// 
			this->view->Location = System::Drawing::Point(14, 401);
			this->view->Name = L"view";
			this->view->Size = System::Drawing::Size(75, 23);
			this->view->TabIndex = 19;
			this->view->Text = L"View";
			this->view->UseVisualStyleBackColor = true;
			this->view->Click += gcnew System::EventHandler(this, &MainScreen::view_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AllowUserToOrderColumns = true;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11
			});
			this->dataGridView4->Location = System::Drawing::Point(14, 127);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(961, 268);
			this->dataGridView4->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Title";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 150;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Genre";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Release Date";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->FillWeight = 200;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Actors and Crew Members";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 500;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Language";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Runtime";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"State";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			// 
			// keyWordTxt
			// 
			this->keyWordTxt->Location = System::Drawing::Point(77, 101);
			this->keyWordTxt->Name = L"keyWordTxt";
			this->keyWordTxt->Size = System::Drawing::Size(253, 20);
			this->keyWordTxt->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 101);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Keyword";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 74);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"State";
			// 
			// releaseStateTxt
			// 
			this->releaseStateTxt->FormattingEnabled = true;
			this->releaseStateTxt->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"released", L"unreleased", L"nowplaying" });
			this->releaseStateTxt->Location = System::Drawing::Point(77, 74);
			this->releaseStateTxt->Name = L"releaseStateTxt";
			this->releaseStateTxt->Size = System::Drawing::Size(253, 21);
			this->releaseStateTxt->TabIndex = 14;
			// 
			// crew
			// 
			this->crew->AutoSize = true;
			this->crew->Location = System::Drawing::Point(11, 51);
			this->crew->Name = L"crew";
			this->crew->Size = System::Drawing::Size(32, 13);
			this->crew->TabIndex = 13;
			this->crew->Text = L"Actor";
			// 
			// crewNameTxt
			// 
			this->crewNameTxt->Location = System::Drawing::Point(77, 48);
			this->crewNameTxt->Name = L"crewNameTxt";
			this->crewNameTxt->Size = System::Drawing::Size(253, 20);
			this->crewNameTxt->TabIndex = 12;
			// 
			// filmNameTxt
			// 
			this->filmNameTxt->Location = System::Drawing::Point(77, 22);
			this->filmNameTxt->Name = L"filmNameTxt";
			this->filmNameTxt->Size = System::Drawing::Size(253, 20);
			this->filmNameTxt->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Film Title";
			// 
			// norm_search
			// 
			this->norm_search->Controls->Add(this->dataGridView5);
			this->norm_search->Controls->Add(this->viewBtn);
			this->norm_search->Controls->Add(this->button2);
			this->norm_search->Controls->Add(this->searchFieldTxt);
			this->norm_search->Controls->Add(this->keyWordTxt2);
			this->norm_search->Location = System::Drawing::Point(4, 22);
			this->norm_search->Name = L"norm_search";
			this->norm_search->Padding = System::Windows::Forms::Padding(3);
			this->norm_search->Size = System::Drawing::Size(981, 443);
			this->norm_search->TabIndex = 3;
			this->norm_search->Text = L"Search";
			this->norm_search->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->AllowUserToOrderColumns = true;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn12,
					this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18
			});
			this->dataGridView5->Location = System::Drawing::Point(6, 65);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(961, 268);
			this->dataGridView5->TabIndex = 19;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Title";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 150;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Genre";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Release Date";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->FillWeight = 200;
			this->dataGridViewTextBoxColumn15->HeaderText = L"Actors and Crew Members";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 268;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Language";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Runtime";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"State";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			// 
			// viewBtn
			// 
			this->viewBtn->Location = System::Drawing::Point(6, 339);
			this->viewBtn->Name = L"viewBtn";
			this->viewBtn->Size = System::Drawing::Size(75, 23);
			this->viewBtn->TabIndex = 14;
			this->viewBtn->Text = L"View";
			this->viewBtn->UseVisualStyleBackColor = true;
			this->viewBtn->Click += gcnew System::EventHandler(this, &MainScreen::viewBtn_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(410, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainScreen::button2_Click_1);
			// 
			// searchFieldTxt
			// 
			this->searchFieldTxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchFieldTxt->FormattingEnabled = true;
			this->searchFieldTxt->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Search by title", L"Search by state", L"Search by actor",
					L"Search by keyword"
			});
			this->searchFieldTxt->Location = System::Drawing::Point(268, 36);
			this->searchFieldTxt->Name = L"searchFieldTxt";
			this->searchFieldTxt->Size = System::Drawing::Size(136, 21);
			this->searchFieldTxt->TabIndex = 11;
			// 
			// keyWordTxt2
			// 
			this->keyWordTxt2->Location = System::Drawing::Point(9, 36);
			this->keyWordTxt2->Name = L"keyWordTxt2";
			this->keyWordTxt2->Size = System::Drawing::Size(253, 20);
			this->keyWordTxt2->TabIndex = 9;
			// 
			// tabMaterials
			// 
			this->tabMaterials->Controls->Add(this->editMaterialsButton);
			this->tabMaterials->Controls->Add(this->editMaterialBox);
			this->tabMaterials->Controls->Add(this->btnMaterial);
			this->tabMaterials->Controls->Add(this->btnDeleteMaterial);
			this->tabMaterials->Controls->Add(this->btnAddMaterials);
			this->tabMaterials->Controls->Add(this->label21);
			this->tabMaterials->Controls->Add(this->label20);
			this->tabMaterials->Controls->Add(this->label19);
			this->tabMaterials->Controls->Add(this->comboListMaterials);
			this->tabMaterials->Controls->Add(this->materialBox);
			this->tabMaterials->Location = System::Drawing::Point(4, 22);
			this->tabMaterials->Name = L"tabMaterials";
			this->tabMaterials->Padding = System::Windows::Forms::Padding(3);
			this->tabMaterials->Size = System::Drawing::Size(981, 443);
			this->tabMaterials->TabIndex = 4;
			this->tabMaterials->Text = L"Materials";
			this->tabMaterials->UseVisualStyleBackColor = true;
			// 
			// editMaterialBox
			// 
			this->editMaterialBox->Location = System::Drawing::Point(519, 111);
			this->editMaterialBox->Multiline = true;
			this->editMaterialBox->Name = L"editMaterialBox";
			this->editMaterialBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->editMaterialBox->Size = System::Drawing::Size(359, 168);
			this->editMaterialBox->TabIndex = 57;
			this->editMaterialBox->WordWrap = false;
			// 
			// btnMaterial
			// 
			this->btnMaterial->Location = System::Drawing::Point(246, 84);
			this->btnMaterial->Name = L"btnMaterial";
			this->btnMaterial->Size = System::Drawing::Size(134, 23);
			this->btnMaterial->TabIndex = 56;
			this->btnMaterial->Text = L"Load Material";
			this->btnMaterial->UseVisualStyleBackColor = true;
			this->btnMaterial->Click += gcnew System::EventHandler(this, &MainScreen::btnMaterial_Click);
			// 
			// btnDeleteMaterial
			// 
			this->btnDeleteMaterial->Location = System::Drawing::Point(106, 314);
			this->btnDeleteMaterial->Name = L"btnDeleteMaterial";
			this->btnDeleteMaterial->Size = System::Drawing::Size(134, 21);
			this->btnDeleteMaterial->TabIndex = 55;
			this->btnDeleteMaterial->Text = L"Delete Material";
			this->btnDeleteMaterial->UseVisualStyleBackColor = true;
			// 
			// btnAddMaterials
			// 
			this->btnAddMaterials->Location = System::Drawing::Point(106, 285);
			this->btnAddMaterials->Name = L"btnAddMaterials";
			this->btnAddMaterials->Size = System::Drawing::Size(134, 23);
			this->btnAddMaterials->TabIndex = 54;
			this->btnAddMaterials->Text = L"Add Materials";
			this->btnAddMaterials->UseVisualStyleBackColor = true;
			this->btnAddMaterials->Click += gcnew System::EventHandler(this, &MainScreen::btnAddMaterials_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->label21->Location = System::Drawing::Point(6, 6);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(218, 55);
			this->label21->TabIndex = 53;
			this->label21->Text = L"Materials";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(21, 108);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(79, 13);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Materials Detail";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(17, 84);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"List of Materials:";
			// 
			// comboListMaterials
			// 
			this->comboListMaterials->FormattingEnabled = true;
			this->comboListMaterials->Location = System::Drawing::Point(106, 84);
			this->comboListMaterials->Name = L"comboListMaterials";
			this->comboListMaterials->Size = System::Drawing::Size(134, 21);
			this->comboListMaterials->TabIndex = 1;
			// 
			// materialBox
			// 
			this->materialBox->Location = System::Drawing::Point(106, 111);
			this->materialBox->Multiline = true;
			this->materialBox->Name = L"materialBox";
			this->materialBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->materialBox->Size = System::Drawing::Size(373, 168);
			this->materialBox->TabIndex = 0;
			this->materialBox->WordWrap = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Green;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(96, 487);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 26);
			this->button6->TabIndex = 50;
			this->button6->Text = L"Daily Log";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainScreen::button6_Click_1);
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::Color::Maroon;
			this->btnLogout->ForeColor = System::Drawing::Color::White;
			this->btnLogout->Location = System::Drawing::Point(15, 487);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(75, 26);
			this->btnLogout->TabIndex = 51;
			this->btnLogout->Text = L"Log Out";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainScreen::btnLogout_Click);
			// 
			// editMaterialsButton
			// 
			this->editMaterialsButton->Location = System::Drawing::Point(519, 285);
			this->editMaterialsButton->Name = L"editMaterialsButton";
			this->editMaterialsButton->Size = System::Drawing::Size(134, 23);
			this->editMaterialsButton->TabIndex = 58;
			this->editMaterialsButton->Text = L"Edit Materials";
			this->editMaterialsButton->UseVisualStyleBackColor = true;
			this->editMaterialsButton->Click += gcnew System::EventHandler(this, &MainScreen::editMaterialsButton_Click);
			// 
			// MainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(1010, 516);
			this->Controls->Add(this->tabMain);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btnLogout);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainScreen";
			this->Text = L"MainScreen";
			this->tabMain->ResumeLayout(false);
			this->tabHome->ResumeLayout(false);
			this->tabHome->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabEdit->ResumeLayout(false);
			this->tabEdit->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabAdvSearch->ResumeLayout(false);
			this->tabAdvSearch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->norm_search->ResumeLayout(false);
			this->norm_search->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabMaterials->ResumeLayout(false);
			this->tabMaterials->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	Project *prj = SelectedProject;
}
private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();

	if (!binary_search_form)
	{
		binary_search_form = gcnew binary_search_view(this, SelectedProject); //here?
	}
	binary_search_form->ShowDialog();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//open relevant movie page
}
private: System::Void ad_searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();

	if (!advanced_search_form)
	{
		advanced_search_form = gcnew search_view(this, SelectedProject); //here?
	}
	advanced_search_form->ShowDialog();
}



private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {



}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 void MainScreen_Load(Object^ sender, System::EventArgs^ e)
		 {
			 //clear dataGrid on last searching
			 dataGridView3->Rows->Clear();

			 //delete data from last search
			 if (ProjectList && !ProjectList->empty())
			 {
				 delete ProjectList;
			 }

			 //convert text from textbox to a string
			 std::string filmName = "";
			 std::string crewName = "";
			 std::string state = "nowplaying";
			 std::string keyWord = "";

			 std::vector<Project*> foundPrj = searchComp->searchIt(filmName, crewName, state, keyWord);

			 if (foundPrj.empty())
			 {
				 MessageBox::Show("Sorry search not found", "Sorry search not found!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }

			 //copy search data to list
			 ProjectList = new std::vector<Project*>(foundPrj);

			 for each (Project *prj in foundPrj)
			 {
				 //prepare data for a row
				 System::String^title = gcnew System::String(prj->title.c_str());
				 System::String^genre = gcnew System::String(prj->genre.c_str());
				 System::String^releaseDate = gcnew System::String(prj->releaseDate.c_str());

				 std::string allCrewMembers;
				 for each (struct Crew crewMember in prj->crewMembers)
				 {
					 allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
				 }

				 //delete last 2 char "<semi colon><space>"
				 allCrewMembers.pop_back();
				 allCrewMembers.pop_back();
				 System::String^crewMembers = gcnew System::String(allCrewMembers.c_str());
				 System::String^language = gcnew System::String(prj->language.c_str());
				 System::String^runtime = gcnew System::String(prj->runtime.c_str());
				 System::String^state = gcnew System::String(prj->state.c_str());

				 //add data to new row
				 dataGridView3->Rows->Add(title, state);
			 }
			 
		 }
void populate(std::string filmName) {

	std::string crewName;
	std::string state;
	std::string keyWord;
	std::vector<Project*> foundPrj = searchComp->searchIt(filmName, crewName, state, keyWord);


	if (foundPrj.empty())
	{
		MessageBox::Show("Sorry search not found", "Sorry search not found!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	//copy search data to list
	ProjectList = new std::vector<Project*>(foundPrj);

	for each (Project *prj in foundPrj)
	{
		
		//prepare data for a row
		System::String^title = gcnew System::String(prj->title.c_str());
		System::String^summary = gcnew System::String(prj->summary.c_str());
		System::String^genre = gcnew System::String(prj->genre.c_str());
		System::String^releaseDate = gcnew System::String(prj->releaseDate.c_str());

		std::string allCrewMembers;
		for each (struct Crew crewMember in prj->crewMembers)
		{
			allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
		}

		//delete last 2 char "<semi colon><space>"
		allCrewMembers.pop_back();
		allCrewMembers.pop_back();

		System::String^crewMembers = gcnew System::String(allCrewMembers.c_str());
		System::String^language = gcnew System::String(prj->language.c_str());
		System::String^runtime = gcnew System::String(prj->runtime.c_str());
		System::String^state = gcnew System::String(prj->state.c_str());

		//add data to new row
		addfilmtitle->Text = title;
		txt_summary->Text = summary;
		addgenre->Text = genre;
		addrelease->Text = releaseDate;
		addcrew->Text = crewMembers;
		addlanguage->Text = language;
		addruntime->Text = runtime;
		addstate->Text = state;
		//dataGridView4->Rows->Add(title, genre, releaseDate, crewMembers, language, runtime, state);

		currentlySelectedProject = prj;
	}

}

// Buttons of Populating the Film details //

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView3->CurrentCell)
		{
			int selectedRow = dataGridView3->CurrentRow->Index;

			//dataGridView4->Rows->Clear();
			String^ t;
			t = dataGridView3->CurrentCell->Value->ToString();

			//delete data from last search
			if (ProjectList && !ProjectList->empty())
			{
				delete ProjectList;
			}

			//convert text from textbox to a string
			std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t);
			std::string crewName = "";
			std::string state = "";
			std::string keyWord = "";

			populate((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t));

		}
	
	}
	

// Opening crew editor
static int x=200;
static int y=200;
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	FilmForm^ form2 = gcnew  FilmForm;

	form2->Visible = true;
	form2->SetDesktopLocation(x, y);
	x += 100;
	y += 30;

	this->Activate();
	this->btnEditMaterials->Enabled = false;

}
void FilmForm_Activated(Object^ sender, System::EventArgs^ e) {
			 
}

void FilmForm_Load(Object^ sender, System::EventArgs^ e)
{

	


}

private: System::Void summaryTxt_Click(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
}

// Starts the Load of Release states //
private: System::Void search_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//clear dataGrid on last searching
	
	dataGridView1->Rows->Clear();

	//delete data from last search
	if (ProjectList && !ProjectList->empty())
	{
		delete ProjectList;
	}

	//convert text from textbox to a string
	std::string filmName = "";
	std::string crewName = "";
	std::string state = "released";
	std::string keyWord = "";

	std::vector<Project*> foundPrj = searchComp->searchIt(filmName, crewName, state, keyWord);

	if (foundPrj.empty())
	{
		MessageBox::Show("Sorry search not found", "Sorry search not found!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	//copy search data to list
	ProjectList = new std::vector<Project*>(foundPrj);

	for each (Project *prj in foundPrj)
	{
		//prepare data for a row
		System::String^title = gcnew System::String(prj->title.c_str());
		System::String^genre = gcnew System::String(prj->genre.c_str());
		System::String^releaseDate = gcnew System::String(prj->releaseDate.c_str());

		std::string allCrewMembers;
		for each (struct Crew crewMember in prj->crewMembers)
		{
			allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
		}

		//delete last 2 char "<semi colon><space>"
		allCrewMembers.pop_back();
		allCrewMembers.pop_back();

		System::String^crewMembers = gcnew System::String(allCrewMembers.c_str());

		System::String^language = gcnew System::String(prj->language.c_str());
		System::String^runtime = gcnew System::String(prj->runtime.c_str());
		System::String^state = gcnew System::String(prj->state.c_str());

		//add data to new row
		dataGridView1->Rows->Add(title, state);
	}

}
private: System::Void btnUnreleased_Click(System::Object^  sender, System::EventArgs^  e) {
	//clear dataGrid on last searching
	dataGridView2->Rows->Clear();

	//delete data from last search
	if (ProjectList && !ProjectList->empty())
	{
		delete ProjectList;
	}

	//convert text from textbox to a string
	std::string filmName = "";
	std::string crewName = "";
	std::string state = "unreleased";
	std::string keyWord = "";

	std::vector<Project*> foundPrj = searchComp->searchIt(filmName, crewName, state, keyWord);

	if (foundPrj.empty())
	{
		MessageBox::Show("Sorry search not found", "Sorry search not found!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	//copy search data to list
	ProjectList = new std::vector<Project*>(foundPrj);

	for each (Project *prj in foundPrj)
	{
		//prepare data for a row
		System::String^title = gcnew System::String(prj->title.c_str());
		System::String^genre = gcnew System::String(prj->genre.c_str());
		System::String^releaseDate = gcnew System::String(prj->releaseDate.c_str());

		std::string allCrewMembers;
		for each (struct Crew crewMember in prj->crewMembers)
		{
			allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
		}

		//delete last 2 char "<semi colon><space>"
		allCrewMembers.pop_back();
		allCrewMembers.pop_back();

		System::String^crewMembers = gcnew System::String(allCrewMembers.c_str());

		System::String^language = gcnew System::String(prj->language.c_str());
		System::String^runtime = gcnew System::String(prj->runtime.c_str());
		System::String^state = gcnew System::String(prj->state.c_str());

		//add data to new row
		dataGridView2->Rows->Add(title, state);
	}
}
private: System::Void btnreleased_Click(System::Object^  sender, System::EventArgs^  e) {
	//clear dataGrid on last searching
	dataGridView3->Rows->Clear();

	//delete data from last search
	if (ProjectList && !ProjectList->empty())
	{
		delete ProjectList;
	}

	//convert text from textbox to a string
	std::string filmName = "";
	std::string crewName = "";
	std::string state = "nowplaying";
	std::string keyWord = "";

	std::vector<Project*> foundPrj = searchComp->searchIt(filmName, crewName, state, keyWord);

	if (foundPrj.empty())
	{
		MessageBox::Show("Sorry search not found", "Sorry search not found!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	//copy search data to list
	ProjectList = new std::vector<Project*>(foundPrj);

	for each (Project *prj in foundPrj)
	{
		//prepare data for a row
		System::String^title = gcnew System::String(prj->title.c_str());
		System::String^genre = gcnew System::String(prj->genre.c_str());
		System::String^releaseDate = gcnew System::String(prj->releaseDate.c_str());

		std::string allCrewMembers;
		for each (struct Crew crewMember in prj->crewMembers)
		{
			allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
		}

		//delete last 2 char "<semi colon><space>"
		allCrewMembers.pop_back();
		allCrewMembers.pop_back();

		System::String^crewMembers = gcnew System::String(allCrewMembers.c_str());

		System::String^language = gcnew System::String(prj->language.c_str());
		System::String^runtime = gcnew System::String(prj->runtime.c_str());
		System::String^state = gcnew System::String(prj->state.c_str());

		//add data to new row
		dataGridView3->Rows->Add(title, state);
	}
}
// Ends the Load of Release states

//Starts the Load of view and edit//
private: System::Void btnEditReleased_Click(System::Object^  sender, System::EventArgs^  e) {

	if (dataGridView1->CurrentCell)
	{
		tabMain->SelectedTab = tabEdit;
		int selectedRow = dataGridView1->CurrentRow->Index;

		//dataGridView4->Rows->Clear();
		String^ t;
		t = dataGridView1->CurrentCell->Value->ToString();

		//delete data from last search
		if (ProjectList && !ProjectList->empty())
		{
			delete ProjectList;
		}

		//convert text from textbox to a string
		std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t);
		std::string crewName = "";
		std::string state = "";
		std::string keyWord = "";

		populate((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t));

	}

}
public: System::Void tabEdit_Click(System::Object^  sender, System::EventArgs^  e) {
	
}

private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView2->CurrentCell)
	{
		tabMain->SelectedTab = tabEdit;
		int selectedRow = dataGridView2->CurrentRow->Index;

		//dataGridView4->Rows->Clear();
		String^ t;
		t = dataGridView2->CurrentCell->Value->ToString();

		//delete data from last search
		if (ProjectList && !ProjectList->empty())
		{
			delete ProjectList;
		}

		//convert text from textbox to a string
		std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t);
		std::string crewName = "";
		std::string state = "";
		std::string keyWord = "";

		populate((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t));

	}
}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView2->CurrentCell)
	{
		tabMain->SelectedTab = tabEdit;
		int selectedRow = dataGridView3->CurrentRow->Index;

		//dataGridView4->Rows->Clear();
		String^ t;
		t = dataGridView3->CurrentCell->Value->ToString();

		//delete data from last search
		if (ProjectList && !ProjectList->empty())
		{
			delete ProjectList;
		}

		//convert text from textbox to a string
		std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t);
		std::string crewName = "";
		std::string state = "";
		std::string keyWord = "";

		populate((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t));

	}
}

//Search and Advanced search
private: System::Void ad_searchBtn_Click_1(System::Object^  sender, System::EventArgs^  e) {
	tabMain->SelectedTab = tabAdvSearch;

}

private: System::Void searchBtn_Click_1(System::Object^  sender, System::EventArgs^  e) {
	tabMain->SelectedTab = tabAdvSearch;
}


private: System::Void view_Click(System::Object^  sender, System::EventArgs^  e) {
	//go back to home with display

	if (dataGridView4->CurrentCell)
	{
		tabMain->SelectedTab = tabEdit;
		

		//dataGridView4->Rows->Clear();
		String^ t;
		t = dataGridView4->CurrentCell->Value->ToString();

		//delete data from last search
		if (ProjectList && !ProjectList->empty())
		{
			delete ProjectList;
		}

		//convert text from textbox to a string
		std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t);
		std::string crewName = "";
		std::string state = "";
		std::string keyWord = "";

		populate((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t));

	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//clear dataGrid on last searching
	dataGridView4->Rows->Clear();

	//delete data from last search
	if (ProjectList && !ProjectList->empty())
	{
		delete ProjectList;
	}

	//convert text from textbox to a string
	std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->filmNameTxt->Text);
	std::string crewName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->crewNameTxt->Text);
	std::string state = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->releaseStateTxt->Text);
	std::string keyWord = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->keyWordTxt->Text);

	std::vector<Project*> foundPrj = searchComp->searchIt(filmName, crewName, state, keyWord);

	if (foundPrj.empty())
	{
		MessageBox::Show("Sorry search not found", "Sorry search not found!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	//copy search data to list
	ProjectList = new std::vector<Project*>(foundPrj);

	for each (Project *prj in foundPrj)
	{
		//prepare data for a row
		System::String^title = gcnew System::String(prj->title.c_str());
		System::String^genre = gcnew System::String(prj->genre.c_str());
		System::String^releaseDate = gcnew System::String(prj->releaseDate.c_str());

		std::string allCrewMembers;
		for each (struct Crew crewMember in prj->crewMembers)
		{
			allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
		}

		//delete last 2 char "<semi colon><space>"

		System::String^crewMembers = gcnew System::String(allCrewMembers.c_str());

		System::String^language = gcnew System::String(prj->language.c_str());
		System::String^runtime = gcnew System::String(prj->runtime.c_str());
		System::String^state = gcnew System::String(prj->state.c_str());

		//add data to new row
		dataGridView4->Rows->Add(title, genre, releaseDate, crewMembers, language, runtime, state);
	}
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

	SearchField searchField;

	//clear data on dataGrid from last search
	dataGridView5->Rows->Clear();

	//delete data from last search
	if (ProjectList && !ProjectList->empty())
	{
		delete ProjectList;
	}

	//convert keyword from textbox to string
	std::string keyword = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->keyWordTxt2->Text);

	//define search field
	if (this->searchFieldTxt->Text == "Search by title")
	{
		searchField = TITLE;
	}
	else if (this->searchFieldTxt->Text == "Search by state")
	{
		searchField = STATE;
	}
	else if (this->searchFieldTxt->Text == "Search by actor")
	{
		searchField = CREW;
	}
	else if (this->searchFieldTxt->Text == "Search by keyword")
	{
		searchField = KEYWORD;
	}
	else
	{
		return;
	}

	std::vector<Project*> foundPrj = searchCompBinary->searchIt(keyword, searchField);

	//copy search data to list
	ProjectList = new std::vector<Project*>(foundPrj);

	if (foundPrj.empty())
	{
		MessageBox::Show("Sorry search not found", "Sorry search not found!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	for each (Project *prj in foundPrj)
	{
		//prepare data to add new row
		System::String^title = gcnew System::String(prj->title.c_str());
		System::String^genre = gcnew System::String(prj->genre.c_str());
		System::String^releaseDate = gcnew System::String(prj->releaseDate.c_str());

		std::string allCrewMembers;
		for each (struct Crew crewMember in prj->crewMembers)
		{
			allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
		}
		//delete last 2 char "<semi-colon><space>"
		if (allCrewMembers.size() > 0)
		{
			allCrewMembers.pop_back();
			allCrewMembers.pop_back();
		}

		System::String^crewMembers = gcnew System::String(allCrewMembers.c_str());
		
		System::String^language = gcnew System::String(prj->language.c_str());
		System::String^runtime = gcnew System::String(prj->runtime.c_str());
		System::String^state = gcnew System::String(prj->state.c_str());

		//add new row
		dataGridView5->Rows->Add(title, genre, releaseDate, crewMembers, language, runtime, state);
	}

}
private: System::Void viewBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//go back to home with display
	if (dataGridView5->CurrentCell)
	{
		tabMain->SelectedTab = tabEdit;


		//dataGridView4->Rows->Clear();
		String^ t;
		t = dataGridView5->CurrentCell->Value->ToString();
		
		
		//delete data from last search
		if (ProjectList && !ProjectList->empty())
		{
			delete ProjectList;
		}

		//convert text from textbox to a string
		std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t);
		std::string crewName = "";
		std::string state = "";
		std::string keyWord = "";

		populate((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t));

	}

}

void viewMaterials()
{
		if (dataGridView5->CurrentCell)
		{
		tabMain->SelectedTab = tabEdit;


		//dataGridView4->Rows->Clear();
		String^ t;
		t = dataGridView5->CurrentCell->Value->ToString();
		
		
		//delete data from last search
		if (ProjectList && !ProjectList->empty())
		{
			delete ProjectList;
		}

		//convert text from textbox to a string
		std::string filmName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t);
		std::string crewName = "";
		std::string state = "";
		std::string keyWord = "";

		populate((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(t));

	}
}
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (currentlySelectedProject != NULL)
	{
		std::time_t t = std::time(0); // get current time
		std::tm* now = std::localtime(&t); // convert to c++ date/time structure

		DataStore::dailyLog.enqueue(currentlySelectedProject->title + "was deleted from the database.", now->tm_mday, now->tm_hour);
		std::vector<std::string> dailyLogGUIEntry;
		dailyLogGUIEntry.push_back(currentlySelectedProject->title + "was deleted from the database.");
		dailyLogGUI->addLogEntry(dailyLogGUIEntry);

		currentlySelectedProject->~Project();
		currentlySelectedProject = NULL;
		tabMain->SelectedTab = tabHome;
		
	}
	search_Click_1(sender, e);
	btnUnreleased_Click(sender, e);
	btnreleased_Click(sender, e);
	
}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	// open daily log
	if (!dailyLogGUI)
	{
		dailyLogGUI = gcnew DailyLog();
	}

	dailyLogGUI->ShowDialog();
}
private: System::Void addstate_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void addgenre_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 //Edit button
private: System::Void btn_addnewprj_Click(System::Object^  sender, System::EventArgs^  e) {

	std::time_t t = std::time(0); // get current time
	std::tm* now = std::localtime(&t); // convert to c++ date/time structure

	DataStore::dailyLog.enqueue(currentlySelectedProject->title + " was edited in the database", now->tm_mday, now->tm_hour);
	std::vector<std::string> dailyLogGUIEntry;
	dailyLogGUIEntry.push_back(currentlySelectedProject->title + " was edited in the database.");
	dailyLogGUI->addLogEntry(dailyLogGUIEntry);


	String^ filmname = txtnew_title->Text;
	String^ summary = txt_summary->Text;
	String^ genre = txtnew_genre->Text;
	String^ state = txtnew_state->Text;
	String^ releaseDate = txtnew_date->Text;
	String^ languages = txtnew_languages->Text;
	String^ runtime = txtnew_runtime->Text;
	String^ getCrew = txtnew_crew->Text;
	//txtnew_crew->Text
	if (filmname == "" || summary == ""|| genre == "" || state == "" || releaseDate == ""|| languages == "" || runtime == "" )
	{
		
		MessageBox::Show("Please fill all boxes");

	}
	else {
		std::string allCrewMembers;
		for each (struct Crew crewMember in currentlySelectedProject->crewMembers)
		{
			allCrewMembers = allCrewMembers + crewMember.job + ":" + crewMember.name + "; ";
		}
		//delete last 2 char "<semi-colon><space>"
		currentlySelectedProject->crewMembers.pop_back();
		allCrewMembers.pop_back();
		allCrewMembers.pop_back();

		currentlySelectedProject->title = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filmname);
		currentlySelectedProject->summary = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(summary);
		currentlySelectedProject->genre = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(genre);
		currentlySelectedProject->state = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(state);
		currentlySelectedProject->releaseDate = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(releaseDate);
		currentlySelectedProject->language = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(languages);
		currentlySelectedProject->runtime = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(runtime);
		//currentlySelectedProject->crewMembers;

			//
		tabMain->SelectedTab = tabHome;
		search_Click_1(sender, e);
		btnUnreleased_Click(sender, e);
		btnreleased_Click(sender, e);
	}
}

private: System::Void newprojecbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	{
		String^ newFilmName = txtnew_title->Text;
		String^ newSummary = txt_summary->Text;
		String^ newGenre = txtnew_genre->Text;
		String^ newState = txtnew_state->Text;
		String^ newReleaseDate = txtnew_date->Text;
		String^ newLanguages = txtnew_languages->Text;
		String^ newRuntime = txtnew_runtime->Text;
		String^ newGetCrew = txtnew_crew->Text;


		Project newProj;
		newProj.title = msclr::interop::marshal_as<std::string>(newFilmName);
		newProj.summary = msclr::interop::marshal_as<std::string>(newSummary);
		newProj.genre = msclr::interop::marshal_as<std::string>(newGenre);
		newProj.state = msclr::interop::marshal_as<std::string>(newState);
		newProj.releaseDate = msclr::interop::marshal_as<std::string>(newReleaseDate);
		newProj.language = msclr::interop::marshal_as<std::string>(newLanguages);
		newProj.runtime = msclr::interop::marshal_as<std::string>(newRuntime);
		std::string crewString = msclr::interop::marshal_as<std::string>(newGetCrew);
		crewString += ',';
		Crew newCrewMember;
		std::string newCrewMemberString;

		for (char c : crewString)
		{
			// seperate values if comma is reached
			if (c == ',')
			{
				int split = newCrewMemberString.find(':');
				newCrewMember.name = newCrewMemberString.substr(0, split);
				newCrewMember.job = newCrewMemberString.substr(split + 1);
				newProj.crewMembers.push_back(newCrewMember);
				newCrewMemberString = "";
			}
			// else add character to current substring
			else
			{
				newCrewMemberString += c;
			}
		}

		std::time_t t = std::time(0); // get current time
		std::tm* now = std::localtime(&t); // convert to c++ date/time structure

		DataStore::dailyLog.enqueue(newProj.title + " was added in the database", now->tm_mday, now->tm_hour);
		std::vector<std::string> dailyLogGUIEntry;
		dailyLogGUIEntry.push_back(newProj.title + " was added in the database.");
		dailyLogGUI->addLogEntry(dailyLogGUIEntry);

		//newProj.runtime.c_str = newgetCrew;
		//(char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(newProj.title.c_str) = newfilmname;
		//(char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(newProj.genre.c_str) = newgenre;
		//(char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(newProj.state.c_str) = newfilmname;
		//(char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(newProj.releaseDate.c_str) = newfilmname;
		//(char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(newProj.language.c_str) = newfilmname;



		DataStore::allProjects.push_back(newProj);

	}
	tabMain->SelectedTab = tabHome;
	search_Click_1(sender, e);
	btnUnreleased_Click(sender, e);
	btnreleased_Click(sender, e);

}
private: System::Void btnLogout_Click(System::Object^  sender, System::EventArgs^  e) {
	writeProjectsFile("Database.txt");
	DataStore::dailyLog.writeToFile();
	Application::Exit();
}
private: System::Void btnEditMaterials_Click(System::Object^  sender, System::EventArgs^  e) {
	tabMain->SelectedTab = tabMaterials;
	currentlySelectedProject->listOfMaterials;

	for (int i = 0; i < currentlySelectedProject->listOfMaterials.size(); i++)
	{
		currentlySelectedProject->listOfMaterials[i].type;

		String^ materialName = gcnew System::String(currentlySelectedProject->listOfMaterials[i].type.c_str());
		comboListMaterials->Items->Add(materialName);
	}

	//comboListMaterials->Text = listOfMaterialpush_back


}
private: System::Void btnAddMaterials_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnMaterial_Click(System::Object^  sender, System::EventArgs^  e) {

	materialBox->Clear();

	String^ selectedMaterialItem = comboListMaterials->SelectedItem->ToString();

	for (int i = 0; i < currentlySelectedProject->listOfMaterials.size(); i++)
	{
		if (currentlySelectedProject->listOfMaterials[i].type == msclr::interop::marshal_as<std::string>(selectedMaterialItem))
		{
			materialBox->AppendText("Title: ");
			materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].materialTitle.c_str()));
			editMaterialBox->AppendText("\r\n");
			editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].materialTitle.c_str()));
			
			materialBox->AppendText("\r\n");
			materialBox->AppendText("ID Number: ");
			materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].idNumber.c_str()));
			editMaterialBox->AppendText("\r\n");
			editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].idNumber.c_str()));

			materialBox->AppendText("\r\n");
			materialBox->AppendText("Format: ");
			materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].format.c_str()));
			editMaterialBox->AppendText("\r\n");
			editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].format.c_str()));

			materialBox->AppendText("\r\n");
			materialBox->AppendText("Audio Format: ");
			materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].audioFormat.c_str()));
			editMaterialBox->AppendText("\r\n");
			editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].audioFormat.c_str()));

			materialBox->AppendText("\r\n");
			materialBox->AppendText("Runtime: ");
			materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].materialRuntime.c_str()));
			editMaterialBox->AppendText("\r\n");
			editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].materialRuntime.c_str()));

			materialBox->AppendText("\r\n");
			materialBox->AppendText("Retail Price: ");
			materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].retailPrice.c_str()));
			editMaterialBox->AppendText("\r\n");
			editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].retailPrice.c_str()));

			materialBox->AppendText("\r\n");
			materialBox->AppendText("Frame Aspect: ");
			materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].frameAspect.c_str()));
			editMaterialBox->AppendText("\r\n");
			editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].frameAspect.c_str()));

			if (currentlySelectedProject->listOfMaterials[i].type == "VHS")
			{
				materialBox->AppendText("\r\n");
				materialBox->AppendText("Packaging: ");
				materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].packaging.c_str()));
				editMaterialBox->AppendText("\r\n");
				editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].packaging.c_str()));

				materialBox->AppendText("\r\n");
				materialBox->AppendText("Language: ");
				materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].vhsLanguage.c_str()));
				editMaterialBox->AppendText("\r\n");
				editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].vhsLanguage.c_str()));

				materialBox->AppendText("\r\n");
				materialBox->AppendText("Subtitle Language: ");
				materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].vhsSubtitleLanguage.c_str()));
				editMaterialBox->AppendText("\r\n");
				editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].vhsSubtitleLanguage.c_str()));
			}
			else
			{
				for (int j = 0; j < currentlySelectedProject->listOfMaterials[i].languageTracks.size(); j++)
				{
					materialBox->AppendText("\r\n");
					materialBox->AppendText("Language Track: ");
					materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].languageTracks[j].c_str()));
					editMaterialBox->AppendText("\r\n");
					editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].languageTracks[j].c_str()));
				}
				for (int j = 0; j < currentlySelectedProject->listOfMaterials[i].subtitles.size(); j++)
				{
					materialBox->AppendText("\r\n");
					materialBox->AppendText("Subtitle Track: ");
					materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].subtitles[j].c_str()));
					editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].subtitles[j].c_str()));
					editMaterialBox->AppendText("\r\n");
				}
				for (int j = 0; j < currentlySelectedProject->listOfMaterials[i].featuresPerDisc.size(); j++)
				{
					for (int k = 0; k < currentlySelectedProject->listOfMaterials[i].featuresPerDisc[j].size(); k++)
					{
						materialBox->AppendText("\r\n");
						materialBox->AppendText("Features on disc ");
						materialBox->AppendText(j.ToString());
						materialBox->AppendText(": ");
						materialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].featuresPerDisc[j][k].c_str()));
						editMaterialBox->AppendText("\r\n");
						editMaterialBox->AppendText(gcnew System::String(currentlySelectedProject->listOfMaterials[i].featuresPerDisc[j][k].c_str()));
					}
				}
			}
		}
	}

}
private: System::Void editMaterialsButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	for (int i = 0; i < currentlySelectedProject->listOfMaterials.size(); i++)
	{
		if ()
	}
}
};
}
