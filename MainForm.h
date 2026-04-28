#pragma once
#include "MinHeap.h"

namespace Heapinsertionapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		MinHeap* h; // pointer to native class

	public:
		MainForm(void)
		{
			InitializeComponent();
			h = new MinHeap(); // initialize native MinHeap
		}

	protected:
		~MainForm()
		{
			if (components)
				delete components;
			delete h; // free native heap
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtValue;
	private: System::Windows::Forms::Button^ btnInsert;
	private: System::Windows::Forms::Button^ btnDisplay;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Label^ lblHeading;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RichTextBox^ rtbHeap;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->txtValue = (gcnew System::Windows::Forms::TextBox());
			   this->btnInsert = (gcnew System::Windows::Forms::Button());
			   this->btnDisplay = (gcnew System::Windows::Forms::Button());
			   this->btnClear = (gcnew System::Windows::Forms::Button());
			   this->lblHeading = (gcnew System::Windows::Forms::Label());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->rtbHeap = (gcnew System::Windows::Forms::RichTextBox());
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			   this->label1->Location = System::Drawing::Point(11, 39);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(101, 22);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Enter value";
			   // 
			   // txtValue
			   // 
			   this->txtValue->BackColor = System::Drawing::Color::Linen;
			   this->txtValue->Location = System::Drawing::Point(174, 41);
			   this->txtValue->Name = L"txtValue";
			   this->txtValue->Size = System::Drawing::Size(138, 30);
			   this->txtValue->TabIndex = 1;
			   // 
			   // btnInsert
			   // 
			   this->btnInsert->BackColor = System::Drawing::Color::Linen;
			   this->btnInsert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic));
			   this->btnInsert->Location = System::Drawing::Point(379, 41);
			   this->btnInsert->Name = L"btnInsert";
			   this->btnInsert->Size = System::Drawing::Size(91, 29);
			   this->btnInsert->TabIndex = 2;
			   this->btnInsert->Text = L"Insert";
			   this->btnInsert->UseVisualStyleBackColor = false;
			   this->btnInsert->Click += gcnew System::EventHandler(this, &MainForm::btnInsert_Click);
			   // 
			   // btnDisplay
			   // 
			   this->btnDisplay->BackColor = System::Drawing::Color::Linen;
			   this->btnDisplay->Location = System::Drawing::Point(86, 349);
			   this->btnDisplay->Name = L"btnDisplay";
			   this->btnDisplay->Size = System::Drawing::Size(121, 32);
			   this->btnDisplay->TabIndex = 4;
			   this->btnDisplay->Text = L"Display Heap";
			   this->btnDisplay->UseVisualStyleBackColor = false;
			   this->btnDisplay->Click += gcnew System::EventHandler(this, &MainForm::btnDisplay_Click);
			   // 
			   // btnClear
			   // 
			   this->btnClear->BackColor = System::Drawing::Color::Linen;
			   this->btnClear->Location = System::Drawing::Point(385, 349);
			   this->btnClear->Name = L"btnClear";
			   this->btnClear->Size = System::Drawing::Size(129, 34);
			   this->btnClear->TabIndex = 3;
			   this->btnClear->Text = L"Clear output";
			   this->btnClear->UseVisualStyleBackColor = false;
			   this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			   // 
			   // lblHeading
			   // 
			   this->lblHeading->AutoSize = true;
			   this->lblHeading->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			   this->lblHeading->ForeColor = System::Drawing::Color::Navy;
			   this->lblHeading->Location = System::Drawing::Point(76, 31);
			   this->lblHeading->Name = L"lblHeading";
			   this->lblHeading->Size = System::Drawing::Size(418, 60);
			   this->lblHeading->TabIndex = 2;
			   this->lblHeading->Text = L"Min Heap Insertion";
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Controls->Add(this->txtValue);
			   this->groupBox1->Controls->Add(this->btnInsert);
			   this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			   this->groupBox1->Location = System::Drawing::Point(44, 114);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(498, 77);
			   this->groupBox1->TabIndex = 1;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Insert New Value";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->rtbHeap);
			   this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			   this->groupBox2->Location = System::Drawing::Point(44, 209);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(498, 100);
			   this->groupBox2->TabIndex = 0;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Current Heap";
			   // 
			   // rtbHeap
			   // 
			   this->rtbHeap->Location = System::Drawing::Point(42, 39);
			   this->rtbHeap->Name = L"rtbHeap";
			   this->rtbHeap->Size = System::Drawing::Size(428, 37);
			   this->rtbHeap->TabIndex = 0;
			   this->rtbHeap->Text = L"";
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->ClientSize = System::Drawing::Size(601, 441);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->lblHeading);
			   this->Controls->Add(this->btnClear);
			   this->Controls->Add(this->btnDisplay);
			   this->Name = L"MainForm";
			   this->Text = L"Current Heap";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   // Event Handlers
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtValue->Text == "") {
			MessageBox::Show("Please enter a value!");
			return;
		}
		int val = Convert::ToInt32(txtValue->Text);
		h->insert(val); // pointer syntax
		MessageBox::Show("Value inserted into Min Heap!");
		txtValue->Clear();
	}

	private: System::Void btnDisplay_Click(System::Object^ sender, System::EventArgs^ e) {
		rtbHeap->Clear();
		std::string heapStrStd = h->display(); // pointer syntax
		String^ heapStr = gcnew String(heapStrStd.c_str()); // convert to managed string
		rtbHeap->Text = heapStr;
	}

	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		rtbHeap->Clear();
	}
	};
}
