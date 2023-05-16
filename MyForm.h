#pragma once
#include "Class.h"

using namespace std;

namespace Edgar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ expression_label;
	private: System::Windows::Forms::Button^ button_var_a;
	private: System::Windows::Forms::Button^ button_var_b;
	private: System::Windows::Forms::Button^ button_var_c;
	private: System::Windows::Forms::Button^ button_op_and;
	private: System::Windows::Forms::Button^ button_op_or;
	private: System::Windows::Forms::Button^ button_op_no;
	private: System::Windows::Forms::Button^ button_op_open;
	private: System::Windows::Forms::Button^ button_op_close;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Button^ button_answer;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->expression_label = (gcnew System::Windows::Forms::Label());
			this->button_var_a = (gcnew System::Windows::Forms::Button());
			this->button_var_b = (gcnew System::Windows::Forms::Button());
			this->button_var_c = (gcnew System::Windows::Forms::Button());
			this->button_op_and = (gcnew System::Windows::Forms::Button());
			this->button_op_or = (gcnew System::Windows::Forms::Button());
			this->button_op_no = (gcnew System::Windows::Forms::Button());
			this->button_op_open = (gcnew System::Windows::Forms::Button());
			this->button_op_close = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_answer = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// expression_label
			// 
			this->expression_label->BackColor = System::Drawing::Color::DarkGray;
			this->expression_label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->expression_label->Font = (gcnew System::Drawing::Font(L"DePixel", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expression_label->Location = System::Drawing::Point(96, 68);
			this->expression_label->Name = L"expression_label";
			this->expression_label->Size = System::Drawing::Size(450, 54);
			this->expression_label->TabIndex = 0;
			this->expression_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_var_a
			// 
			this->button_var_a->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_var_a->Location = System::Drawing::Point(208, 239);
			this->button_var_a->Name = L"button_var_a";
			this->button_var_a->Size = System::Drawing::Size(70, 70);
			this->button_var_a->TabIndex = 1;
			this->button_var_a->Text = L"A";
			this->button_var_a->UseVisualStyleBackColor = true;
			this->button_var_a->Click += gcnew System::EventHandler(this, &MyForm::button_var_a_Click);
			// 
			// button_var_b
			// 
			this->button_var_b->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_var_b->Location = System::Drawing::Point(284, 239);
			this->button_var_b->Name = L"button_var_b";
			this->button_var_b->Size = System::Drawing::Size(70, 70);
			this->button_var_b->TabIndex = 2;
			this->button_var_b->Text = L"B";
			this->button_var_b->UseVisualStyleBackColor = true;
			this->button_var_b->Click += gcnew System::EventHandler(this, &MyForm::button_var_b_Click);
			// 
			// button_var_c
			// 
			this->button_var_c->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_var_c->Location = System::Drawing::Point(360, 239);
			this->button_var_c->Name = L"button_var_c";
			this->button_var_c->Size = System::Drawing::Size(70, 70);
			this->button_var_c->TabIndex = 3;
			this->button_var_c->Text = L"C";
			this->button_var_c->UseVisualStyleBackColor = true;
			this->button_var_c->Click += gcnew System::EventHandler(this, &MyForm::button_var_c_Click);
			// 
			// button_op_and
			// 
			this->button_op_and->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_op_and->Location = System::Drawing::Point(132, 163);
			this->button_op_and->Name = L"button_op_and";
			this->button_op_and->Size = System::Drawing::Size(70, 70);
			this->button_op_and->TabIndex = 4;
			this->button_op_and->Text = L"•";
			this->button_op_and->UseVisualStyleBackColor = true;
			this->button_op_and->Click += gcnew System::EventHandler(this, &MyForm::button_op_and_Click);
			// 
			// button_op_or
			// 
			this->button_op_or->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_op_or->Location = System::Drawing::Point(208, 163);
			this->button_op_or->Name = L"button_op_or";
			this->button_op_or->Size = System::Drawing::Size(70, 70);
			this->button_op_or->TabIndex = 5;
			this->button_op_or->Text = L"+";
			this->button_op_or->UseVisualStyleBackColor = true;
			this->button_op_or->Click += gcnew System::EventHandler(this, &MyForm::button_op_or_Click);
			// 
			// button_op_no
			// 
			this->button_op_no->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_op_no->Location = System::Drawing::Point(284, 163);
			this->button_op_no->Name = L"button_op_no";
			this->button_op_no->Size = System::Drawing::Size(70, 70);
			this->button_op_no->TabIndex = 6;
			this->button_op_no->Text = L"¬";
			this->button_op_no->UseVisualStyleBackColor = true;
			this->button_op_no->Click += gcnew System::EventHandler(this, &MyForm::button_op_no_Click);
			// 
			// button_op_open
			// 
			this->button_op_open->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_op_open->Location = System::Drawing::Point(360, 163);
			this->button_op_open->Name = L"button_op_open";
			this->button_op_open->Size = System::Drawing::Size(70, 70);
			this->button_op_open->TabIndex = 7;
			this->button_op_open->Text = L"(";
			this->button_op_open->UseVisualStyleBackColor = true;
			this->button_op_open->Click += gcnew System::EventHandler(this, &MyForm::button_op_open_Click);
			// 
			// button_op_close
			// 
			this->button_op_close->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_op_close->Location = System::Drawing::Point(436, 163);
			this->button_op_close->Name = L"button_op_close";
			this->button_op_close->Size = System::Drawing::Size(70, 70);
			this->button_op_close->TabIndex = 8;
			this->button_op_close->Text = L")";
			this->button_op_close->UseVisualStyleBackColor = true;
			this->button_op_close->Click += gcnew System::EventHandler(this, &MyForm::button_op_close_Click);
			// 
			// button_delete
			// 
			this->button_delete->Font = (gcnew System::Drawing::Font(L"DePixel", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_delete->Location = System::Drawing::Point(552, 68);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(81, 54);
			this->button_delete->TabIndex = 9;
			this->button_delete->Text = L"←";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_answer
			// 
			this->button_answer->Location = System::Drawing::Point(260, 386);
			this->button_answer->Name = L"button_answer";
			this->button_answer->Size = System::Drawing::Size(100, 49);
			this->button_answer->TabIndex = 10;
			this->button_answer->Text = L"Посчитать";
			this->button_answer->UseVisualStyleBackColor = true;
			this->button_answer->Click += gcnew System::EventHandler(this, &MyForm::button_answer_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(654, 68);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(265, 258);
			this->dataGridView1->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 539);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button_answer);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_op_close);
			this->Controls->Add(this->button_op_open);
			this->Controls->Add(this->button_op_no);
			this->Controls->Add(this->button_op_or);
			this->Controls->Add(this->button_op_and);
			this->Controls->Add(this->button_var_c);
			this->Controls->Add(this->button_var_b);
			this->Controls->Add(this->button_var_a);
			this->Controls->Add(this->expression_label);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_var_a_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += "A";
		validation();
	}
	private: System::Void button_var_b_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += "B";
		validation();
	}
	private: System::Void button_var_c_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += "C";
		validation();
	}
	private: System::Void button_op_and_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += "•";
		validation();
	}
	private: System::Void button_op_or_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += "+";
		validation();
	}
	private: System::Void button_op_no_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += "¬";
		validation();
	}
	private: System::Void button_op_open_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += "(";
		validation();
	}
	private: System::Void button_op_close_Click(System::Object^ sender, System::EventArgs^ e) {
		expression_label->Text += ")";
		validation();
	}
	private: System::Void validation() {
		button_var_a->Enabled = true;
		button_var_b->Enabled = true;
		button_var_c->Enabled = true;
		button_op_and->Enabled = true;
		button_op_or->Enabled = true;
		button_op_no->Enabled = true;
		button_op_open->Enabled = true;
		button_op_close->Enabled = true;
		String^ s = expression_label->Text;
		char last;
		if (s->Length > 0) last = s[s->Length - 1];
		else last = ' ';
		if (last == 'A' || last == 'B' || last == 'C' || last == ')') {
			button_var_a->Enabled = false;
			button_var_b->Enabled = false;
			button_var_c->Enabled = false;
			button_op_open->Enabled = false;
			button_op_no->Enabled = false;
			if (counter(s, '(') == counter(s, ')')) button_op_close->Enabled = false;
		}
		else {
			button_op_and->Enabled = false;
			button_op_or->Enabled = false;
			button_op_close->Enabled = false;
		}
	}
	private: int counter(String^ s, char c) {
		int res = 0;
		for (int i = 0; i < s->Length; i++) {
			if (s[i] == c) res++;
		}
		return res;
	}
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expression_label->Text->Length > 0) expression_label->Text = expression_label->Text->Substring(0, expression_label->Text->Length - 1);
		validation();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		validation();
		
	}
private: System::Void button_answer_Click(System::Object^ sender, System::EventArgs^ e) {
	Logic t;
	String^ rev = t.reversed_notation(expression_label->Text);
	
	String^ let = "ABC";
	int x = 0;
	for (int i = 0; i < let->Length; i++) {
		for (int symbol = 0; symbol < rev->Length; symbol++) {
			if (let[i] == rev[symbol]) {
				x++;
				break;
			}
		}
	}

	dataGridView1->ColumnCount = x + 1;
	dataGridView1->RowCount = 1 + pow(2, x);
	for (int i = 0; i < x; i++) dataGridView1->Rows[0]->Cells[i]->Value = let[i];
	dataGridView1->Rows[0]->Cells[x]->Value = "Результат";

	char** combs = t.all_combs(x);
	
	String^ s;
	for (int i = 0; i < pow(2, x); i++) {
		char* row = combs[i];
		s = rev;
		for (int j = 0; j < x; j++) {
			s = s->Replace(let[j], row[j]);
			dataGridView1->Rows[i + 1]->Cells[j]->Value = row[j] == '1' ? "1" : "0";
		}
		dataGridView1->Rows[i + 1]->Cells[x]->Value = t.solve(s);	
	}
}
};
}
