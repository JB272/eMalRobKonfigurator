#pragma once
#include "Funktionen.cpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <msclr\marshal_cppstd.h>




namespace eMalRobKonfiguratorV20201117 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			//
			//TODO: Konstruktorcode hier hinzufügen.
			
			//(gcnew cli::array< System::Object^  >(2) { L"Test1", L"Test2" })
			//gcnew cli::array <System::Object^>(sizeof(ComPorts) {})
			//comboBox1->Items-> Add(ComPorts);
			//
		}
		

		

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ button1;

	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	public:
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label4;
	
	private:
		

	public:

	protected:

	public:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1628, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Herzlich Wilkommen zum Konfigurationsassistent ihres EMalRobs.";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(45, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(387, 80);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Erneut nach verbundenen \r\nGeräten suchen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(36, 511);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 67);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Abbrechen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(672, 511);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(290, 67);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Software übertragen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 62);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Bitte Suchen Sie nach den verbundenen Geräten.\r\nSie können auch gleichzeitig mehr"
				L"ere Controller kofigurieren.";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(461, 191);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(501, 214);
			this->checkedListBox1->TabIndex = 6;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 421);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(840, 62);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Wählen Sie das gewünschte Gerät aus und klicken Sie auf \"Software\r\nübertragen\".\r\n"
				L"";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(376, 62);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Es wurden an folgenden Ports\r\nGeräte gefunden:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1032, 598);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"EMalRob Konfigurator";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button3->Enabled = true;
		char lpTargetPath[5000]; // buffer to store the path of the COMPORTS
		bool gotPort = false; // in case the port is not found
		extern std::vector <int> ComPorts;
		
		checkedListBox1->Items->Clear();
		for (int i = 0; i < 255; i++) // checking ports from COM0 to COM255
		{
			std::string str = "COM" + std::to_string(i); // converting to COM0, COM1, COM2
			DWORD test = QueryDosDevice(str.c_str(), lpTargetPath, 5000);

			// Test the return value and error if any
			if (test != 0) //QueryDosDevice returns zero if it didn't find an object
			{
				//std::cout << str << ": " << lpTargetPath << std::endl;
				//printf(i+ lpTargetPath);

				ComPorts.push_back(i);
				
				
				checkedListBox1->Items->Add(i, false);
				gotPort = true;
			}

			if (::GetLastError() == ERROR_INSUFFICIENT_BUFFER)
			{
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}





private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	extern std::vector <int> ComPorts;
	std::string CommandlineP1 = "START esptool.exe --chip esp32 --port COM";
	std::string CommandlineP2 = " --baud 921600 --before default_reset --after hard_reset write_flash -z --flash_mode dio --flash_freq 40m --flash_size detect 0xe000 boot_app0.bin 0x1000 bootloader_dio_40m.bin 0x10000 firmware.bin 0x8000 partitions.bin 0x00290000 spiffs.bin";
	
	for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++)
	{
		std::string final = CommandlineP1 + std::to_string(ComPorts[i]) + CommandlineP2;
		const char* command = final.c_str();
		system(command);
		system(command);
	};
	
	
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
