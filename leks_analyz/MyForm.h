#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <string>

using namespace System::IO;

namespace my_token {
	struct token {
		int num_table;
		int num_record;
	};
}


namespace leksanalyz {

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
		void clear_table();

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
		///


		///
	private: System::Windows::Forms::TextBox^ input_box;
	private: System::Windows::Forms::TextBox^ output_box;
	private: System::Windows::Forms::Button^ preprocess;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ count_lines;
	private: System::Windows::Forms::Button^ leks;
	private: System::Windows::Forms::DataGridView^ keywords_table;








	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Leksema;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Code;
	private: System::Windows::Forms::DataGridView^ identifiers_table;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ constants_table;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ operation_sign_table;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ compare_sign_table;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ separators_table;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ descriptive_code;
	private: System::Windows::Forms::Button^ make_descr_code;
	private: System::Windows::Forms::TextBox^ PseudoCode;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ Errors;
	private: System::Windows::Forms::Label^ label11;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_box = (gcnew System::Windows::Forms::TextBox());
			this->output_box = (gcnew System::Windows::Forms::TextBox());
			this->preprocess = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->count_lines = (gcnew System::Windows::Forms::Label());
			this->leks = (gcnew System::Windows::Forms::Button());
			this->keywords_table = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Leksema = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->identifiers_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->constants_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->operation_sign_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->compare_sign_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->separators_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->descriptive_code = (gcnew System::Windows::Forms::TextBox());
			this->make_descr_code = (gcnew System::Windows::Forms::Button());
			this->PseudoCode = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Errors = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keywords_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiers_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->constants_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->operation_sign_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->compare_sign_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separators_table))->BeginInit();
			this->SuspendLayout();
			// 
			// input_box
			// 
			this->input_box->Location = System::Drawing::Point(13, 48);
			this->input_box->Margin = System::Windows::Forms::Padding(4);
			this->input_box->Multiline = true;
			this->input_box->Name = L"input_box";
			this->input_box->Size = System::Drawing::Size(461, 213);
			this->input_box->TabIndex = 0;
			// 
			// output_box
			// 
			this->output_box->Location = System::Drawing::Point(762, 48);
			this->output_box->Margin = System::Windows::Forms::Padding(4);
			this->output_box->Multiline = true;
			this->output_box->Name = L"output_box";
			this->output_box->Size = System::Drawing::Size(461, 213);
			this->output_box->TabIndex = 1;
			// 
			// preprocess
			// 
			this->preprocess->Location = System::Drawing::Point(509, 48);
			this->preprocess->Margin = System::Windows::Forms::Padding(4);
			this->preprocess->Name = L"preprocess";
			this->preprocess->Size = System::Drawing::Size(220, 57);
			this->preprocess->TabIndex = 2;
			this->preprocess->Text = L"Preprocessing";
			this->preprocess->UseVisualStyleBackColor = true;
			this->preprocess->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(199, 19);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Source code";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(915, 19);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Preprocessed code";
			// 
			// count_lines
			// 
			this->count_lines->AutoSize = true;
			this->count_lines->Location = System::Drawing::Point(612, 500);
			this->count_lines->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->count_lines->Name = L"count_lines";
			this->count_lines->Size = System::Drawing::Size(0, 16);
			this->count_lines->TabIndex = 5;
			// 
			// leks
			// 
			this->leks->Location = System::Drawing::Point(509, 113);
			this->leks->Margin = System::Windows::Forms::Padding(4);
			this->leks->Name = L"leks";
			this->leks->Size = System::Drawing::Size(220, 58);
			this->leks->TabIndex = 6;
			this->leks->Text = L"leks";
			this->leks->UseVisualStyleBackColor = true;
			this->leks->Click += gcnew System::EventHandler(this, &MyForm::leks_Click);
			// 
			// keywords_table
			// 
			this->keywords_table->AllowUserToAddRows = false;
			this->keywords_table->AllowUserToDeleteRows = false;
			this->keywords_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->keywords_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->num, this->Leksema,
					this->Code
			});
			this->keywords_table->Location = System::Drawing::Point(31, 420);
			this->keywords_table->Margin = System::Windows::Forms::Padding(4);
			this->keywords_table->Name = L"keywords_table";
			this->keywords_table->ReadOnly = true;
			this->keywords_table->RowHeadersWidth = 51;
			this->keywords_table->Size = System::Drawing::Size(367, 185);
			this->keywords_table->TabIndex = 7;
			// 
			// num
			// 
			this->num->HeaderText = L"№";
			this->num->MinimumWidth = 6;
			this->num->Name = L"num";
			this->num->ReadOnly = true;
			this->num->Width = 30;
			// 
			// Leksema
			// 
			this->Leksema->HeaderText = L"Leksema";
			this->Leksema->MinimumWidth = 6;
			this->Leksema->Name = L"Leksema";
			this->Leksema->ReadOnly = true;
			this->Leksema->Width = 125;
			// 
			// Code
			// 
			this->Code->HeaderText = L"Code";
			this->Code->MinimumWidth = 6;
			this->Code->Name = L"Code";
			this->Code->ReadOnly = true;
			this->Code->Width = 125;
			// 
			// identifiers_table
			// 
			this->identifiers_table->AllowUserToAddRows = false;
			this->identifiers_table->AllowUserToDeleteRows = false;
			this->identifiers_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->identifiers_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->identifiers_table->Location = System::Drawing::Point(427, 420);
			this->identifiers_table->Margin = System::Windows::Forms::Padding(4);
			this->identifiers_table->Name = L"identifiers_table";
			this->identifiers_table->ReadOnly = true;
			this->identifiers_table->RowHeadersWidth = 51;
			this->identifiers_table->Size = System::Drawing::Size(365, 185);
			this->identifiers_table->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"№";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Leksema";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Code";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(128, 392);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"KEYWORDS(1)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(530, 392);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"IDENTIFIERS(2)";
			// 
			// constants_table
			// 
			this->constants_table->AllowUserToAddRows = false;
			this->constants_table->AllowUserToDeleteRows = false;
			this->constants_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->constants_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->constants_table->Location = System::Drawing::Point(839, 420);
			this->constants_table->Margin = System::Windows::Forms::Padding(4);
			this->constants_table->Name = L"constants_table";
			this->constants_table->ReadOnly = true;
			this->constants_table->RowHeadersWidth = 51;
			this->constants_table->Size = System::Drawing::Size(365, 185);
			this->constants_table->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"№";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 30;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Leksema";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Code";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(932, 392);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"CONSTANTS(3)";
			// 
			// operation_sign_table
			// 
			this->operation_sign_table->AllowUserToAddRows = false;
			this->operation_sign_table->AllowUserToDeleteRows = false;
			this->operation_sign_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->operation_sign_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->operation_sign_table->Location = System::Drawing::Point(31, 664);
			this->operation_sign_table->Margin = System::Windows::Forms::Padding(4);
			this->operation_sign_table->Name = L"operation_sign_table";
			this->operation_sign_table->ReadOnly = true;
			this->operation_sign_table->RowHeadersWidth = 51;
			this->operation_sign_table->Size = System::Drawing::Size(367, 185);
			this->operation_sign_table->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"№";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 30;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Leksema";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Code";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(115, 636);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(207, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"OPERATION SIGN(4)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(514, 636);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"COMPARE SIGN(5)";
			// 
			// compare_sign_table
			// 
			this->compare_sign_table->AllowUserToAddRows = false;
			this->compare_sign_table->AllowUserToDeleteRows = false;
			this->compare_sign_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->compare_sign_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->compare_sign_table->Location = System::Drawing::Point(427, 664);
			this->compare_sign_table->Margin = System::Windows::Forms::Padding(4);
			this->compare_sign_table->Name = L"compare_sign_table";
			this->compare_sign_table->ReadOnly = true;
			this->compare_sign_table->RowHeadersWidth = 51;
			this->compare_sign_table->Size = System::Drawing::Size(367, 185);
			this->compare_sign_table->TabIndex = 15;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"№";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 30;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Leksema";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Code";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(932, 636);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(174, 25);
			this->label8->TabIndex = 18;
			this->label8->Text = L"SEPARATORS(6)";
			// 
			// separators_table
			// 
			this->separators_table->AllowUserToAddRows = false;
			this->separators_table->AllowUserToDeleteRows = false;
			this->separators_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->separators_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
			});
			this->separators_table->Location = System::Drawing::Point(838, 664);
			this->separators_table->Margin = System::Windows::Forms::Padding(4);
			this->separators_table->Name = L"separators_table";
			this->separators_table->ReadOnly = true;
			this->separators_table->RowHeadersWidth = 51;
			this->separators_table->Size = System::Drawing::Size(367, 185);
			this->separators_table->TabIndex = 17;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"№";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 30;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Leksema";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 125;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Code";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 125;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(182, 274);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(156, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Descriptive code";
			// 
			// descriptive_code
			// 
			this->descriptive_code->Location = System::Drawing::Point(12, 311);
			this->descriptive_code->Name = L"descriptive_code";
			this->descriptive_code->Size = System::Drawing::Size(462, 22);
			this->descriptive_code->TabIndex = 20;
			// 
			// make_descr_code
			// 
			this->make_descr_code->Location = System::Drawing::Point(509, 179);
			this->make_descr_code->Margin = System::Windows::Forms::Padding(4);
			this->make_descr_code->Name = L"make_descr_code";
			this->make_descr_code->Size = System::Drawing::Size(220, 58);
			this->make_descr_code->TabIndex = 21;
			this->make_descr_code->Text = L"Descriptive code";
			this->make_descr_code->UseVisualStyleBackColor = true;
			this->make_descr_code->Click += gcnew System::EventHandler(this, &MyForm::make_descr_code_Click);
			// 
			// PseudoCode
			// 
			this->PseudoCode->Location = System::Drawing::Point(761, 311);
			this->PseudoCode->Name = L"PseudoCode";
			this->PseudoCode->Size = System::Drawing::Size(462, 22);
			this->PseudoCode->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(932, 274);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 25);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Pseudo code";
			// 
			// Errors
			// 
			this->Errors->Location = System::Drawing::Point(1246, 48);
			this->Errors->Margin = System::Windows::Forms::Padding(4);
			this->Errors->Multiline = true;
			this->Errors->Name = L"Errors";
			this->Errors->Size = System::Drawing::Size(259, 369);
			this->Errors->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1345, 19);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 25);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Errors";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1518, 898);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Errors);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->PseudoCode);
			this->Controls->Add(this->make_descr_code);
			this->Controls->Add(this->descriptive_code);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->separators_table);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->compare_sign_table);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->operation_sign_table);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->constants_table);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->identifiers_table);
			this->Controls->Add(this->keywords_table);
			this->Controls->Add(this->leks);
			this->Controls->Add(this->count_lines);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->preprocess);
			this->Controls->Add(this->output_box);
			this->Controls->Add(this->input_box);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Leks";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keywords_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiers_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->constants_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->operation_sign_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->compare_sign_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separators_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//удаляем лишние пробелы и комменты
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->output_box->Text = "";
		String^ input = this->input_box->Text;

		enum state { begin, word, space, comment, long_comment, line_break };

		state st = begin;

		String^ result;//сюда пишем обработанный код

		for (int i = 0; i < this->input_box->Text->Length; i++) {

			switch (st) {

			case comment:
				if (input[i] == '\n') {//окончание коммента
					st = begin;
				}
				break;
			case long_comment:
				if (input[i] == '*' && input[i + 1] == '/') {//окончание длинного коммента
					st = begin;
					i += 3;//удаляем перенос строки после long comment
				}
				break;
			case space:
				if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n') {
					st = begin;//встретили символы после череды пуустого пространства
				}
				else {
					break;//продолжают идти пробелы и тд
				}

			case begin://идут какие то слова которые нужно печатать

				if (input[i] == '/' && input[i + 1] == '/') {
					st = comment; i++;//начало однострочного коммента
				}
				else if (input[i] == '/' && input[i + 1] == '*') {
					st = long_comment; i++;//начало длинного коммента
				}
				else if (input[i] == '\n' && i < this->input_box->Text->Length - 2 && input[i + 2] == '\n') {
					st = space;//встречаем перенос и за ним еще переносы (проверяем что символ не последний)
				}
				else if (input[i] == ' ') {
					result += input[i];//пробел между словами
					st = space;
				}
				else {
					result += input[i];
				}
				break;

			}
		}

		//пишем промежуточный код в файл
		StreamWriter^ wr = gcnew StreamWriter("source_code.txt");
		wr->WriteLine(result);
		wr->Close();

		/////читаем из файла, нумеруем
		std::ifstream in_file_1("source_code.txt");
		std::string one_str;
		std::string res_temp;
		int num = 1;
		while (std::getline(in_file_1, one_str)) {
			one_str = std::to_string(num) + '.' + one_str;
			num++;
			res_temp += one_str + '\n';
		}

		//пишем нумерованный текст в файл
		std::ofstream out_file_1("preprocess.txt");
		out_file_1 << res_temp;
		out_file_1.close();
		in_file_1.close();

		//пишем из файла в textbox
		StreamReader^ read_file = gcnew StreamReader("preprocess.txt");
		String^ res = read_file->ReadToEnd();
		this->output_box->Text = res;
		read_file->Close();

		//это на всякий пусть будет преобразование из си строк в строки winforms
		//String^ res = gcnew String(res_temp.c_str());//конечный обработанный текст (String^)


	}
		   /////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////
		   /////////////////////////////////////////////////////////////////////////////////////////
		   //лексический анализ

	private: System::Void leks_Click(System::Object^ sender, System::EventArgs^ e) {

		std::map<std::string, std::string> map_keywords;//словарь с ключевыми словами
		std::map<std::string, std::string> map_identifiers;//словарь с идентификаторами
		std::map<std::string, std::string> map_constants;//словарь с константами
		std::map<std::string, std::string> map_op_sign;//словарь со знаками операций
		std::map<std::string, std::string> map_comp_sign;//словарь со знаками сравнения
		std::map<std::string, std::string> map_separator_sign;//словарь с разделителями


		//чистка таблиц
		clear_table();



		StreamReader^ source_code_file = gcnew StreamReader("source_code.txt");//читаем исходный код после препроцессинга
		String^ code = source_code_file->ReadToEnd();
		source_code_file->Close();

		
		//int , char , double, sizeof, float, class
		
		enum state { begin, keyword, identifier, constant, str_constant, op_sign, comp_sign, separator, error } st;
		enum temp_state {
			SE1, SE2, SE3,
			S0, S1, S2, S3, S4, S5, S6, S7, S8, S9, S11, S12, S13, S14, S15, S16, S17, S18, S19, S20,
			S21, S22, S23, S24, S25, S26, S27, S28, S29, S30, S31, S32, S33, S34, S35
		} tmp_st;

		st = begin; tmp_st = S0;

		//определяем идентификаторы и константы
		std::string word; //сюда пишем обработанную лексему

		int cnt_identifiers = 0, cnt_keywords = 0, cnt_consts = 0, cnt_op_sign = 0, cnt_comp_sign = 0, cnt_sep_sign = 0;

		for (int i = 0; i < code->Length; i++) {

			if (Char::IsLetter(code[i]) || code[i] == '_' || code[i] == '?') {//обрабатываем символ
				switch (tmp_st)
				{
				case S0:
					tmp_st = S1;   //состояние идентификатора
					switch (code[i]) {//первые буквы ключевых слов
					case 'i':
						tmp_st = S2;
						break;
					case 'c':
						tmp_st = S11;
						break;
					case 'd':
						tmp_st = S15;
						break;
					case 's' :
						tmp_st = S21;
						break;
					case 'f':
						tmp_st = S27;
						break;
					default:
						tmp_st = S1;
						break;
					}
					word += code[i];
					break;
				case S1:	 //состояние идентификатора
					word += code[i];
					break;
				case S2:
					if (code[i] == 'n') {
						tmp_st = S3;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S3:
					if (code[i] == 't') {
						tmp_st = S4;//состояние последнего символа ключ слова int
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;

				case S11:
					if (code[i] == 'h') {
						tmp_st = S12;
					}
					else if (code[i] == 'l') {
						tmp_st = S32;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S12:
					if (code[i] == 'a') {
						tmp_st = S13;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S13:
					if (code[i] == 'r') {
						tmp_st = S14;//состояние последнего символа ключ слова char
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S15:
					if (code[i] == 'o') {
						tmp_st = S16;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S16:
					if (code[i] == 'u') {
						tmp_st = S17;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S17:
					if (code[i] == 'b') {
						tmp_st = S18;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S18:
					if (code[i] == 'l') {
						tmp_st = S19;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S19:
					if (code[i] == 'e') {
						tmp_st = S20;//состояние последнего символа ключ слова double
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S21:
					if (code[i] == 'i') {
						tmp_st = S22;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S22:
					if (code[i] == 'z') {
						tmp_st = S23;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S23:
					if (code[i] == 'e') {
						tmp_st = S24;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S24:
					if (code[i] == 'o') {
						tmp_st = S25;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S25:
					if (code[i] == 'f') {//ключевое слово sizeof
						tmp_st = S26;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S27:
					if (code[i] == 'l') {
						tmp_st = S28;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S28:
					if (code[i] == 'o') {
						tmp_st = S29;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S29:
					if (code[i] == 'a') {
						tmp_st = S30;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S30:
					if (code[i] == 't') {//ключевое словов float
						tmp_st = S31;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S32:
					if (code[i] == 'a') {
						tmp_st = S33;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S33:
					if (code[i] == 's') {
						tmp_st = S34;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S34:
					if (code[i] == 's') {
						tmp_st = S35;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S5://были в состоянии числовой константы и пришла буква - то есть переходим в ошибку
				//состояние числовой константы и пришло Е (10Е+2)
					if (code[i] == 'E') {
						word += code[i];
						tmp_st = SE1;
					}
					else {
						word += code[i];
						st = error;
					}
					break;
				case SE1:
				case SE2:
				case SE3:
					word += code[i];
					st = error;
					break;
				case S6://были на знаке операции и пришла буква - непорядок
					word += code[i];
					st = error;
					break;
				case S7://знаки сравнения а пришла буква - непорядок, пишем в ошибку
				case S8:
					word += code[i];
					st = error;
					break;
				case S9://строковая костанта
					word += code[i];
					break;
				default:
					break;
				}

			}

			else if (Char::IsDigit(code[i])) {//обрабатываем цифру
				switch (tmp_st)
				{
				case S0://начало
					tmp_st = S5;
					word += code[i];
					break;
				case S5://константа
					word += code[i];
					break;
				case S6://знак операции - пусть вводят разделитель
					word += code[i];
					st = error;
					break;
				case S7:
				case S8://знак сравения - нужен разделитель
					word += code[i];
					st = error;
					break;
				case S9://строковая костанта
					word += code[i];
					break;

				case SE2:
				case SE3:
					word += code[i];
					tmp_st = SE3;
					break;
				default:
					break;
				}
			}

			else if (code[i] == '=' || code[i] == '+' || code[i] == '-' || code[i] == '/' || code[i] == '*') {//обработка знаков операций
				switch (tmp_st)
				{
				case S0:
					tmp_st = S6;//знак операции
					word += code[i];
					break;
				case S6://второй раз знак = значит это сравнение - S7
					if (code[i] == '=') {
						tmp_st = S7;
						word += code[i];
					}
					break;
				case S8://приходит = после < или >
					if (code[i] == '=') {
						tmp_st = S7;
						word += code[i];
					}
					break;
				case S9://строковая костанта
					word += code[i];
					break;

				case SE1://10E+2 эспонинцеальная форма
					if (code[i] == '+' || code[i] == '-') {
						word += code[i];
						tmp_st = SE2;
					}
					else {
						st = error;	
						word += code[i];
					}
					break;
				default://во всех случаях кроме после разделителя
					st = error;
					word += code[i];
					break;
				}

			}
			else if (code[i] == '<' || code[i] == '>') {
				switch (tmp_st)
				{
				case S0:
					tmp_st = S8;//знак сравнения
					word += code[i];
					break;
				case S9://строковая константа
					word += code[i];
					break;
				default:
					st = error;
					word += code[i];
					break;
				}
			}
			else if (code[i] == ' ' || code[i] == '\n' || code[i] == '"' || code[i] == ';' || code[i] == ',' || code[i] == '(' || code[i] == ')' || code[i] == '{' || code[i] == '}') {// пришел разделитель, обрабатываем слово
				
				
				//определяем что за лексема
				switch (tmp_st) {
				case S0://распознали разделитель
					st = separator;
					if (code[i] == '"') {
						std::cout << "first \"";//встретили первую кавычку
						st = str_constant;
					}
					break;
				case S1:
					st = identifier;//распознали идентификатор
					break;
				case S4://int
					st = keyword;
					break;
				case S14://char
					st = keyword;
					break;
				case S20://double
					st = keyword;
					break;
				case S26://sizeof
					st = keyword;
					break;
				case S31://float
					st = keyword;
					break;
				case S35://class
					st = keyword;
					break;
				case S5:
					if (st != error) {//распознали константу без ошибок
						st = constant;
					}
					break;
				case S6:
					st = op_sign;//знак операции
					break;
				case S7://знак == <= >=
					st = comp_sign;
					break;
				case S8://знаки < or >
					st = comp_sign;
					break;
				case S9:
					if (st == str_constant && code[i] == '"') {//встретили вторую кавычку
						std::cout << "second \"";
						st = constant;
					}
					break;
				case SE3:
					st = constant;
					break;
				default:
					st = identifier;
					break;
				}
				
				//пишем в мапы
				switch (st)
				{
				case separator:
					//запись в мапу разделителей
					if (code[i] == ' ') {
						std::cout << "separator( space ): " << code[i];
						std::string c_str = "space";
						map_separator_sign[c_str] = "space";
					}
					else if (code[i] == '\n') {
						std::cout << "separator(\\n): " << code[i];
						std::string c_str = "\\n";
						map_separator_sign[c_str] = "\\n";
					}
					else {
						std::cout << "separator: " << code[i];
						std::string c_str; c_str.push_back(code[i]);
						map_separator_sign[c_str] = code[i];
					}
					break;

					//ключевое слово
				case keyword:
					std::cout << "keyword: " << word << '\n';
					map_keywords[word] = word;//пишем ключевое слово и его код(оно же) в мапу ключевых слов
					i--;//чтобы откатиться и распознать разделитель
					break;

					//состояние идентификатора - определяем ключевое слово или просто идентификатор
				case identifier:
					std::cout << "identifier: " << word << '\n';
					//кидаем в мапу с идентификаторами
					map_identifiers[word] = "id";
					i--;//чтобы откатиться и распознать разделитель
					break;

					//состояние константы - проверяем без ошибок ли написано число
				case constant:
					if (tmp_st == S9) {
						std::cout << "string constant: " << word << '\n';
						//запись в мапу констант
						map_constants[word] = "string";
					}
					else {
						std::cout << "constanta: " << word << '\n';
						//запись в мапу констант
						map_constants[word] = "number";
						i--;//чтобы откатиться и распознать разделитель
					}
					
					break;
				
					//состояние знака операции
				case op_sign:
					std::cout << "op_sign: " << word << '\n';
					//запись в мапу map_op_sign
					map_op_sign[word] = word;
					i--;//чтобы откатиться и распознать разделитель
					break;

					//Знак сравнения
				case comp_sign:
					std::cout << "comp_sign: " << word << '\n';
					//запись в мапу map_comp_sign
					map_comp_sign[word] = word;
					i--;//чтобы откатиться и распознать разделитель
					break;
				case str_constant:
					if (tmp_st != S9) {
						tmp_st = S9;//когда встретилась первая кавычка переходим в состояние S9
					}
					else {
						word += code[i];//уже находимся в S9 просто пишем строку
						break;
					}
					break;
					//состояние ошибки - выводим идентификатор в котором допущена ошибка
				case error:
					std::cout << "Error: " << word << '\n';
					break;

				default:
					break;
				}

		
				if (st != str_constant) {
					word = "";//очищаем для следующего слова
					st = begin;
					tmp_st = S0;
				}
			}

		}

		//теперь из мап пишем в таблицу
		for (auto a : map_keywords) {
			String^ leksema = gcnew String(a.first.c_str());
			String^ code_leks = gcnew String(a.second.c_str());
			this->keywords_table->Rows->Add(cnt_keywords++, leksema, code_leks);
		}
		for (auto a : map_identifiers) {
			String^ identifier = gcnew String(a.first.c_str());
			String^ code_identifier = gcnew String(a.second.c_str());
			this->identifiers_table->Rows->Add(cnt_identifiers++, identifier, code_identifier);
		}
		for (auto a : map_constants) {
			String^ constanta = gcnew String(a.first.c_str());
			String^ code_identifier = gcnew String(a.second.c_str());
			this->constants_table->Rows->Add(cnt_consts++, constanta, code_identifier);
		}
		for (auto a : map_op_sign) {
			String^ sign = gcnew String(a.first.c_str());
			String^ code_sign = gcnew String(a.second.c_str());
			this->operation_sign_table->Rows->Add(cnt_op_sign++, sign, code_sign);
		}
		for (auto a : map_comp_sign) {
			String^ comp_sign = gcnew String(a.first.c_str());
			String^ code_comp_sign = gcnew String(a.second.c_str());
			this->compare_sign_table->Rows->Add(cnt_comp_sign++, comp_sign, code_comp_sign);
		}
		for (auto a : map_separator_sign) {
			String^ sep_sign = gcnew String(a.first.c_str());
			String^ code_sep_sign = gcnew String(a.second.c_str());
			this->separators_table->Rows->Add(cnt_sep_sign++, sep_sign, code_sep_sign);
		}



	}

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	public: std::vector<my_token::token>* tokens;

		  ///пишем дескрипторный код
	private: System::Void make_descr_code_Click(System::Object^ sender, System::EventArgs^ e) {
		tokens = new std::vector<my_token::token>;//вектор с токенами
		this->descriptive_code->Clear();


		StreamReader^ source_code_file = gcnew StreamReader("source_code.txt");//читаем исходный код после препроцессинга
		String^ code = source_code_file->ReadToEnd();
		source_code_file->Close();

		enum state { begin, keyword, identifier, constant, str_constant, op_sign, comp_sign, separator, error } st;
		enum temp_state {
			SE1, SE2, SE3,
			S0, S1, S2, S3, S4, S5, S6, S7, S8, S9, S11, S12, S13, S14, S15, S16, S17, S18, S19, S20,
			S21, S22, S23, S24, S25, S26, S27, S28, S29, S30, S31, S32, S33, S34, S35
		} tmp_st;
		
		st = begin; tmp_st = S0;

		//определяем идентификаторы и константы
		std::string word = ""; //сюда пишем обработанную лексему

		for (int i = 0; i < code->Length; i++) {

			//пришла буква
			if (Char::IsLetter(code[i]) || code[i] == '_') {

				switch (tmp_st)
				{
				case S0:
					tmp_st = S1;   //состояние идентификатора
					switch (code[i]) {//первые буквы ключевых слов
					case 'i':
						tmp_st = S2;
						break;
					case 'c':
						tmp_st = S11;
						break;
					case 'd':
						tmp_st = S15;
						break;
					case 's':
						tmp_st = S21;
						break;
					case 'f':
						tmp_st = S27;
						break;
					default:
						tmp_st = S1;
						break;
					}
					word += code[i];
					break;
				case S1:	 //состояние идентификатора
					word += code[i];
					break;
				case S2:
					if (code[i] == 'n') {
						tmp_st = S3;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S3:
					if (code[i] == 't') {
						tmp_st = S4;//состояние последнего символа ключ слова int
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;

				case S11:
					if (code[i] == 'h') {
						tmp_st = S12;
					}
					else if (code[i] == 'l') {
						tmp_st = S32;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S12:
					if (code[i] == 'a') {
						tmp_st = S13;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S13:
					if (code[i] == 'r') {
						tmp_st = S14;//состояние последнего символа ключ слова char
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S15:
					if (code[i] == 'o') {
						tmp_st = S16;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S16:
					if (code[i] == 'u') {
						tmp_st = S17;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S17:
					if (code[i] == 'b') {
						tmp_st = S18;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S18:
					if (code[i] == 'l') {
						tmp_st = S19;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S19:
					if (code[i] == 'e') {
						tmp_st = S20;//состояние последнего символа ключ слова double
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S21:
					if (code[i] == 'i') {
						tmp_st = S22;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S22:
					if (code[i] == 'z') {
						tmp_st = S23;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S23:
					if (code[i] == 'e') {
						tmp_st = S24;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S24:
					if (code[i] == 'o') {
						tmp_st = S25;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S25:
					if (code[i] == 'f') {//ключевое слово sizeof
						tmp_st = S26;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S27:
					if (code[i] == 'l') {
						tmp_st = S28;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S28:
					if (code[i] == 'o') {
						tmp_st = S29;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S29:
					if (code[i] == 'a') {
						tmp_st = S30;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S30:
					if (code[i] == 't') {//ключевое словов float
						tmp_st = S31;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S32:
					if (code[i] == 'a') {
						tmp_st = S33;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S33:
					if (code[i] == 's') {
						tmp_st = S34;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S34:
					if (code[i] == 's') {
						tmp_st = S35;
					}
					else {
						tmp_st = S1;
					}
					word += code[i];
					break;
				case S5://были в состоянии числовой константы и пришла буква - то есть переходим в ошибку
					//состояние числовой константы и пришло Е (10Е+2)
					if (code[i] == 'E') {
						word += code[i];
						tmp_st = SE1;
					}
					else {
						word += code[i];
						st = error;
					}
					break;
				case SE1:
				case SE2:
				case SE3:
					word += code[i];
					st = error;
					break;
				case S6://были на знаке операции и пришла буква - непорядок
					word += code[i];
					st = error;
					break;
				case S7://знаки сравнения а пришла буква - непорядок, пишем в ошибку
				case S8:
					word += code[i];
					st = error;
					break;
				case S9://строковая костанта
					word += code[i];
					break;
				default:
					break;
				}
			}
			//пришла цифра
			if (Char::IsDigit(code[i])) {
				switch (tmp_st)
				{
				case S0://начало
					tmp_st = S5;
					word += code[i];
					break;
				case S5://константа
					word += code[i];
					break;
				case S6://знак операции - пусть вводят разделитель
					word += code[i];
					st = error;
					break;
				case S7:
				case S8://знак сравения - нужен разделитель
					word += code[i];
					st = error;
					break;
				case S9://строковая константа
					word += code[i];
					break;
				case SE2:
				case SE3:
					word += code[i];
					tmp_st = SE3;
					break;
				default:
					break;
				}
			}
			//пришел знак операции
			if (code[i] == '+' || code[i] == '-' || code[i] == '*' || code[i] == '/' || code[i] == '=') {

				switch (tmp_st)
				{
				case S0:
					tmp_st = S6;//знак операции
					word += code[i];
					break;
				case S6://второй раз знак = значит это сравнение - S7
					if (code[i] == '=') {
						tmp_st = S7;
						word += code[i];
					}
					break;
				case S8://приходит = после < или >
					if (code[i] == '=') {
						tmp_st = S7;
						word += code[i];
					}
					break;
				case S9://строковая костанта
					word += code[i];
					break;

				case SE1://10E+2 эспонинцеальная форма
					if (code[i] == '+' || code[i] == '-') {
						word += code[i];
						tmp_st = SE2;
					}
					else {
						st = error;
						word += code[i];
					}
					break;
				default://во всех случаях кроме после разделителя
					st = error;
					word += code[i];
					break;
				}

			}

			if (code[i] == '<' || code[i] == '>') {
				switch (tmp_st)
				{
				case S0:
					tmp_st = S8;//знак сравнения
					word += code[i];
					break;
				case S9://строковая константа
					word += code[i];
					break;
				default:
					st = error;
					word += code[i];
					break;
				}
			}
			//пришел разделитель
			if (code[i] == ' ' || code[i] == '\n' || code[i] == ';' || code[i] == ',' || code[i] == '"' || code[i] == '(' || code[i] == ')' || code[i] == '{' || code[i] == '}') {

				//определяем что за лексема
				switch (tmp_st) {
				case S0://распознали разделитель
					st = separator;
					if (code[i] == '"') {
						std::cout << "first \"";//встретили первую кавычку
						st = str_constant;
					}
					break;
				case S1:
					st = identifier;//распознали идентификатор
					break;
				case S4://int
					st = keyword;
					break;
				case S14://char
					st = keyword;
					break;
				case S20://double
					st = keyword;
					break;
				case S26://sizeof
					st = keyword;
					break;
				case S31://float
					st = keyword;
					break;
				case S35://class
					st = keyword;
					break;
				case S5:
					if (st != error) {//распознали константу без ошибок
						st = constant;
					}
					break;
				case S6:
					st = op_sign;//знак операции
					break;
				case S7://знак == <= >=
					st = comp_sign;
					break;
				case S8://знаки < or >
					st = comp_sign;
					break;
				case S9:
					if (st == str_constant && code[i] == '"') {//встретили вторую кавычку
						std::cout << "second \"";
						st = constant;
					}
					break;
				case SE3:
					st = constant;
					break;
				default:
					st = identifier;
					break;
				}

				//пишем дескрипторный код
				String^ leksema = gcnew String(word.c_str());//лексема 


				String^ number_table;

				int num_table, num_record;

				switch (st) {
					//ключевые слова
				case keyword:
					number_table = "1";//номер таблицы с ключевыми словами

					//ищем совпадения в таблице с лексемой и записываем токен(номер таблицы + номер записи)
					for each(DataGridViewRow ^ row in this->keywords_table->Rows) {

						if (row->Cells[1]->Value->ToString()->Equals(leksema)) {

							std::cout << "FIND KEYWORD!\n";

							num_table = Int32::Parse(number_table->ToString());
							num_record = Int32::Parse(row->Cells[0]->Value->ToString());
							my_token::token tok{ num_table, num_record };
							tokens->push_back(tok);
						}

					}
					i--;//чтобы откатиться и распознать разделитель

					break;

					//идентификаторы
				case identifier:
					number_table = "2";
					for each(DataGridViewRow ^ row in this->identifiers_table->Rows) {

						if (row->Cells[1]->Value->ToString()->Equals(leksema)) {

							std::cout << "FIND IDENTIFIER!\n";

							//запись в вектор
							num_table = Int32::Parse(number_table->ToString());
							num_record = Int32::Parse(row->Cells[0]->Value->ToString());
							my_token::token tok{ num_table, num_record };
							tokens->push_back(tok);
						}

					}
					i--;//чтобы откатиться и распознать разделитель
					break;

					//константы
				case constant:
					number_table = "3";

					for each(DataGridViewRow ^ row in this->constants_table->Rows) {

						if (row->Cells[1]->Value->ToString()->Equals(leksema)) {

							std::cout << "FIND CONSTANTA!\n";
							//запись в вектор токенов
							num_table = Int32::Parse(number_table->ToString());
							num_record = Int32::Parse(row->Cells[0]->Value->ToString());
							my_token::token tok{ num_table, num_record };
							tokens->push_back(tok);
						}
					}
					if (code[i] != '"') {//чтобы не возвращался назад если это была закрывающая строку каавычка
						i--;//чтобы откатиться и распознать разделитель
					}
					break;

					//знаки операций
				case op_sign:
					number_table = "4";
					for each (DataGridViewRow ^ row in this->operation_sign_table->Rows) {

						if (row->Cells[1]->Value->ToString()->Equals(leksema)) {

							std::cout << "FIND OP_SIGN!\n";
							//запись в вектор токенов
							num_table = Int32::Parse(number_table->ToString());
							num_record = Int32::Parse(row->Cells[0]->Value->ToString());
							my_token::token tok{ num_table, num_record };
							tokens->push_back(tok);
						}

					}
					i--;//чтобы откатиться и распознать разделитель
					break;

					//знаки сравнения
				case comp_sign:
					number_table = "5";
					for each (DataGridViewRow ^ row in this->compare_sign_table->Rows) {

						if (row->Cells[1]->Value->ToString()->Equals(leksema)) {

							std::cout << "FIND COMP_SIGN!\n";
							//запись в вектор токенов
							num_table = Int32::Parse(number_table->ToString());
							num_record = Int32::Parse(row->Cells[0]->Value->ToString());
							my_token::token tok{ num_table, num_record };
							tokens->push_back(tok);
						}

					}
					i--;//чтобы откатиться и распознать разделитель

					break;

					//разделитель
				case separator:
					//пишем сам разделитель в дескр. код
					number_table = "6";
					if (code[i] == ' ') {//эта чухня потому что в таблице пробелы и переносы записаны словами а не просто символом(иначе их не видно:(()
						for each (DataGridViewRow ^ row in this->separators_table->Rows) {
							if (row->Cells[1]->Value->ToString()->Equals(Convert::ToString("space"))) {

								std::cout << "FIND SEP_SIGN!\n";
								//запись в вектор токенов
								num_table = Int32::Parse(number_table->ToString());
								num_record = Int32::Parse(row->Cells[0]->Value->ToString());
								my_token::token tok{ num_table, num_record };
								tokens->push_back(tok);
							}
						}
	
					}
					else if (code[i] == '\n') {//эта чухня потому что в таблице пробелы и переносы записаны словами а не просто символом(иначе их не видно:(()
						for each (DataGridViewRow ^ row in this->separators_table->Rows) {
							if (row->Cells[1]->Value->ToString()->Equals(Convert::ToString("\\n"))) {

								std::cout << "FIND SEP_SIGN!\n";
								//запись в вектор токенов
								num_table = Int32::Parse(number_table->ToString());
								num_record = Int32::Parse(row->Cells[0]->Value->ToString());
								my_token::token tok{ num_table, num_record };
								tokens->push_back(tok);
							}
						}

					}
					else {
						for each (DataGridViewRow ^ row in this->separators_table->Rows) {

							if (row->Cells[1]->Value->ToString()->Equals(Convert::ToString(code[i]))) {

								std::cout << "FIND SEP_SIGN!\n";
								//запись в вектор токенов
								num_table = Int32::Parse(number_table->ToString());
								num_record = Int32::Parse(row->Cells[0]->Value->ToString());
								my_token::token tok{ num_table, num_record };
								tokens->push_back(tok);
							}

						}
					}
					break;

				case str_constant:
					if (tmp_st != S9) {
						tmp_st = S9;//когда встретилась первая кавычка переходим в состояние S9
					}
					else {
						word += code[i];//уже находимся в S9 просто пишем строку
						break;
					}
					break;
					//ошибки
				case error:
					std::cout << "ERRROR: " << word << '\n';
					break;

				}

				//очищаем лексему и обнуляем состояния
				if (st != str_constant) {
					word = "";
					st = begin;
					tmp_st = S0;
				}
			}


		}
		//пишем дескрипторный код идя по токенам из вектора
		for (auto i : *tokens) {
			this->descriptive_code->Text += "[" + i.num_table + "," + i.num_record + "] ";
		}

	}
	};
}


void leksanalyz::MyForm::clear_table() {
	this->keywords_table->Rows->Clear();
	this->identifiers_table->Rows->Clear();
	this->constants_table->Rows->Clear();
	this->operation_sign_table->Rows->Clear();
	this->compare_sign_table->Rows->Clear();
	this->separators_table->Rows->Clear();

	delete tokens;
}