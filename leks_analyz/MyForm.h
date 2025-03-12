#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace System::IO;


struct RecordSymTable {
	std::string token;
	enum type { id, constanta, function, key_word, operation} type_token;
};

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
	private: System::Windows::Forms::DataGridView^ keywords;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Leksema;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Code;
	private: System::Windows::Forms::DataGridView^ identifiers;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



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
			this->input_box = (gcnew System::Windows::Forms::TextBox());
			this->output_box = (gcnew System::Windows::Forms::TextBox());
			this->preprocess = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->count_lines = (gcnew System::Windows::Forms::Label());
			this->leks = (gcnew System::Windows::Forms::Button());
			this->keywords = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Leksema = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->identifiers = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keywords))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiers))->BeginInit();
			this->SuspendLayout();
			// 
			// input_box
			// 
			this->input_box->Location = System::Drawing::Point(12, 66);
			this->input_box->Multiline = true;
			this->input_box->Name = L"input_box";
			this->input_box->Size = System::Drawing::Size(347, 174);
			this->input_box->TabIndex = 0;
			// 
			// output_box
			// 
			this->output_box->Location = System::Drawing::Point(575, 66);
			this->output_box->Multiline = true;
			this->output_box->Name = L"output_box";
			this->output_box->Size = System::Drawing::Size(347, 174);
			this->output_box->TabIndex = 1;
			// 
			// preprocess
			// 
			this->preprocess->Location = System::Drawing::Point(382, 66);
			this->preprocess->Name = L"preprocess";
			this->preprocess->Size = System::Drawing::Size(165, 46);
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
			this->label1->Location = System::Drawing::Point(146, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Source code";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(680, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Preprocessed code";
			// 
			// count_lines
			// 
			this->count_lines->AutoSize = true;
			this->count_lines->Location = System::Drawing::Point(478, 344);
			this->count_lines->Name = L"count_lines";
			this->count_lines->Size = System::Drawing::Size(0, 13);
			this->count_lines->TabIndex = 5;
			// 
			// leks
			// 
			this->leks->Location = System::Drawing::Point(382, 136);
			this->leks->Name = L"leks";
			this->leks->Size = System::Drawing::Size(165, 47);
			this->leks->TabIndex = 6;
			this->leks->Text = L"leks";
			this->leks->UseVisualStyleBackColor = true;
			this->leks->Click += gcnew System::EventHandler(this, &MyForm::leks_Click);
			// 
			// keywords
			// 
			this->keywords->AllowUserToAddRows = false;
			this->keywords->AllowUserToDeleteRows = false;
			this->keywords->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->keywords->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->num, this->Leksema,
					this->Code
			});
			this->keywords->Location = System::Drawing::Point(42, 279);
			this->keywords->Name = L"keywords";
			this->keywords->ReadOnly = true;
			this->keywords->Size = System::Drawing::Size(275, 150);
			this->keywords->TabIndex = 7;
			// 
			// num
			// 
			this->num->HeaderText = L"№";
			this->num->Name = L"num";
			this->num->ReadOnly = true;
			this->num->Width = 30;
			// 
			// Leksema
			// 
			this->Leksema->HeaderText = L"Leksema";
			this->Leksema->Name = L"Leksema";
			this->Leksema->ReadOnly = true;
			// 
			// Code
			// 
			this->Code->HeaderText = L"Code";
			this->Code->Name = L"Code";
			this->Code->ReadOnly = true;
			// 
			// identifiers
			// 
			this->identifiers->AllowUserToAddRows = false;
			this->identifiers->AllowUserToDeleteRows = false;
			this->identifiers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->identifiers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->identifiers->Location = System::Drawing::Point(364, 279);
			this->identifiers->Name = L"identifiers";
			this->identifiers->ReadOnly = true;
			this->identifiers->Size = System::Drawing::Size(274, 150);
			this->identifiers->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"№";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Leksema";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Code";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(115, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"KEYWORDS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(448, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"IDENTIFIERS";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 588);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->identifiers);
			this->Controls->Add(this->keywords);
			this->Controls->Add(this->leks);
			this->Controls->Add(this->count_lines);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->preprocess);
			this->Controls->Add(this->output_box);
			this->Controls->Add(this->input_box);
			this->Name = L"MyForm";
			this->Text = L"Leks";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keywords))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiers))->EndInit();
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
				if (input[i] == '\n'){//окончание коммента
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
				else if (input[i] == '\n' && i < this->input_box->Text->Length - 2 && input[i + 2] == '\n' ) {
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
	
	
private: System::Void leks_Click(System::Object^ sender, System::EventArgs^ e) {
	//чистка таблиц
	clear_table();


	StreamReader^ source_code_file = gcnew StreamReader("source_code.txt");
	String^ code = source_code_file->ReadToEnd();
	
	enum state {begin, identifier, constant, error} st;
	st = begin;

	//определяем идентификаторы и константы
	std::string word; String^ str;//сюда пишем обработанную лексему
	int cnt_ident = 0, cnt_keywords = 0;
	for (int i = 0; i < code->Length; i++) {

		if (Char::IsLetter(code[i]) || code[i] == '_') {//обрабатываем символ
			switch (st)
			{
			case begin:
			case identifier:
				word += code[i];
				st = identifier;
				break;
			case constant:
				word += code[i];
				st = error;
				break;

			case error:
				word += code[i];
				break;

			default:
				break;
			}
			
		}
		else if (Char::IsDigit(code[i])) {//обрабатываем цифру
			switch (st) {
			case begin:
			case constant:
				word += code[i];
				st = constant;
				break;

			case identifier:
				word += code[i];
				break;

			case error:
				word += code[i];
				break;

			default:
				break;
			}
		}
		else if(code[i] == ' ' || code[i] == '\n') {// пришел разделитель, обрабатываем слово
			switch (st)
			{
			case begin:
				break;
				
				//состояние идентификатора - определяем ключевое слово или просто идентификатор
			case identifier:
				str = gcnew String(word.c_str());
				
				if (word == "int" || word == "double" || word == "char") {
					st = begin;
					std::cout << "keyword: " << word << '\n';

					//кидаем в таблицу
					this->keywords->Rows->Add(cnt_keywords++, str, str);

					break;
				}

				st = begin;
				std::cout << "identifier: " << word << '\n';

				//кидаем в таблицу
				this->identifiers->Rows->Add(cnt_ident++,str, "id");
				
				break;

				//состояние константы - проверяем без ошибок ли написано число
			case constant:
				st = begin;
				std::cout << "constanta: " << word << '\n';
				
				break;

				//состояние ошибки - выводим идентификатор в котором допущена ошибка
			case error:
				std::cout << "Error: " << word << '\n';
				st = begin;
				break;

			default:
				st = begin;
				break;
			}
			word = "";//очищаем для следующего слова
			
		}

	}

	source_code_file->Close();
}

};
}
void leksanalyz::MyForm::clear_table() {
	this->keywords->Rows->Clear();
	this->identifiers->Rows->Clear();
}