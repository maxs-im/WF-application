#pragma once

namespace Incidence_matrix {

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

	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eXITToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::NumericUpDown^  numberV;
	private: System::Windows::Forms::NumericUpDown^  numberE;





	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->eXITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numberV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numberE = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numberV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numberE))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Number of Vertices";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Number of Edges";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 43);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Matrix =";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 80);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Press when the Matrix will be ready";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ScrollBar;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->NullValue = L"0";
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->NullValue = L"0";
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(121, 123);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 75;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->DefaultCellStyle->NullValue = L"0";
			this->dataGridView1->Size = System::Drawing::Size(269, 188);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Tag = L"0";
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			this->dataGridView1->DefaultValuesNeeded += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &MyForm::dataGridView1_DefaultValuesNeeded);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->выходToolStripMenuItem, 
				this->eXITToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(402, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->AutoSize = false;
			this->выходToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripTextBox1});
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->выходToolStripMenuItem->Text = L"Info";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripTextBox1->BackColor = System::Drawing::Color::LightSalmon;
			this->toolStripTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Italic));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->ReadOnly = true;
			this->toolStripTextBox1->Size = System::Drawing::Size(255, 17);
			this->toolStripTextBox1->Text = L"Created by a student K-17 Galchenko Maxim";
			this->toolStripTextBox1->ToolTipText = L"This program is to determine the connectivity of the graph by its incidence matri" 
				L"x.\r\nThe matrix is filled by standard rules.\r\n\r\n* The program works for all graph" 
				L"s.";
			// 
			// eXITToolStripMenuItem
			// 
			this->eXITToolStripMenuItem->Name = L"eXITToolStripMenuItem";
			this->eXITToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->eXITToolStripMenuItem->Text = L"EXIT";
			this->eXITToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eXITToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Clear Matrix";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numberV
			// 
			this->numberV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->numberV->Location = System::Drawing::Point(121, 42);
			this->numberV->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numberV->Name = L"numberV";
			this->numberV->Size = System::Drawing::Size(55, 20);
			this->numberV->TabIndex = 1;
			this->numberV->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numberV->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numberV->ValueChanged += gcnew System::EventHandler(this, &MyForm::numberV_ValueChanged);
			// 
			// numberE
			// 
			this->numberE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->numberE->Location = System::Drawing::Point(121, 85);
			this->numberE->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numberE->Name = L"numberE";
			this->numberE->Size = System::Drawing::Size(55, 20);
			this->numberE->TabIndex = 2;
			this->numberE->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numberE->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numberE->ValueChanged += gcnew System::EventHandler(this, &MyForm::numberE_ValueChanged_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(402, 336);
			this->Controls->Add(this->numberE);
			this->Controls->Add(this->numberV);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Incidence matrix of the Graph";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numberV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numberE))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void Change() {
					 int sizeE= Convert::ToInt32(numberE->Value),
						 sizeV= Convert::ToInt32(numberV->Value);
				 
					dataGridView1->RowCount= sizeV;
					dataGridView1->ColumnCount= sizeE;

					for(int i= 0; i < sizeV; i++)
						dataGridView1->Rows[i]->HeaderCell->Value= Convert::ToString(i+1);
					for(int i= 0; i < sizeE; i++)
						dataGridView1->Columns[i]->HeaderCell->Value= Convert::ToString(i+1);

				 } //Change
		private: bool Correct() {
					 for (int i= 0; i < dataGridView1->Columns->Count; i++) {
						  int i2= 0, i1= 0, dat;
						 for (int j= 0; j < dataGridView1->Rows->Count; j++) {
							  dat= Convert::ToInt32(dataGridView1->Rows[j]->Cells[i]->Value); 
							  if ((dat > 1) || (dat < -1)) return false;
							  if (dat == 1) i1++;
							  if (dat == -1) i2++;
						 }
						 if ((i1 + i2 > 2) || (i2 == 2)) return false;
					 }
					 return true;
				 } //Correct
		private: bool Connectgraph(int sizeV, int sizeE, int **mass) {
					 bool *point= new bool[sizeV];
					 bool index= true;
					for(int j= 0; j < sizeV; j++)
					{
						for (int i= 0; i < sizeV; i++) point[i]= false;
						dfs(j, sizeV, sizeE, mass, point);
						for (int i= 0; i < sizeV; i++)
							if (!point[i]) { index= false; break; };
					}

					return index;
				 } //Connectgraph

		private: void Typing(int sizeV, int sizeE, int **mass) {
					 for(int i= 0; i < sizeV; i++)
						 for(int j= 0; j < sizeE; j++)
							 mass[i][j]= Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				 } //Typing

		private: void Clear() {
					 int dat;
					 for (int i= 0; i < dataGridView1->Rows->Count; i++)
						 for (int j= 0; j < dataGridView1->Columns->Count; j++)
								 dataGridView1->Rows[i]->Cells[j]->Value= "0";
				 } //Clear
		private: void dfs(int vin, int sizeV, int sizeE, int **mass, bool *&point) {				
					point[vin]= true;
					for(int i= 0; i < sizeE; i++)
						if (mass[vin][i] == 1)
							for (int j= 0; j < sizeV; j++)
								if (((mass[j][i] == 1) || (mass[j][i] == -1)) && (!point[j]))
								{ dfs(j, sizeV, sizeE, mass, point); break; }
					return;
				 } //dfs
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			Change();
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int sizeV= Convert::ToInt32(numberV->Value),
				 sizeE= Convert::ToInt32(numberE->Value);
			 
			if (!Correct()) {
				MessageBox::Show("\t\tMatrix is incorrect \n\n Remember that one edge is incident to a maximum of two vertices", "Error");
				return;
			}
			 
			 int **mass= new int *[sizeV];
			for(int i= 0; i < sizeV; i++)
				mass[i]= new int[sizeE];
			Typing(sizeV, sizeE, mass);

			if (Connectgraph(sizeV, sizeE, mass))
				 MessageBox::Show("Graph is CONNECTED", "Answer");
			else
				MessageBox::Show("Graph is DISCONNECTED", "Answer");

			for(int i= 0; i < sizeV; i++)
				delete [] mass[i];
			delete [] mass;
		 }
private: System::Void numberE_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			Change();
		 }
private: System::Void eXITToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Clear();
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->TopLeftHeaderCell->Value= "v| e->";
			 Change();
			 Clear();
		 }
private: System::Void dataGridView1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			  int dat;
			 if(!Int32::TryParse(Convert::ToString(dataGridView1->CurrentCell->Value), dat)) {
				MessageBox::Show("The matrix can contain only numbers", "Error");
				dataGridView1->CurrentCell->Value= "0";
			 }
		 }
private: System::Void dataGridView1_DefaultValuesNeeded(System::Object^  sender, System::Windows::Forms::DataGridViewRowEventArgs^  e) {
			 dataGridView1->CurrentCell->Value= "0";
		 }
private: System::Void numberV_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 Change();
		 }
private: System::Void numberE_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 Change();
		 }
};
}
