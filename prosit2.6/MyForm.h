#pragma once
#include "Cad.h"
#include "GestionClient.h"
#include "MapClient.h"

namespace prosit26 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ TextBoxNom;

	private: System::Windows::Forms::Button^ buttonChargerTable;
	private: System::Windows::Forms::Button^ buttonAddClient;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ TextID;
	private: System::Windows::Forms::Label^ TextValorID;
	private: System::Windows::Forms::Label^ TextNom;
	private: System::Windows::Forms::Label^ TextPrenom;
	private: System::Windows::Forms::TextBox^ TextBoxPrenom;


		   Services::GestionClient^ GestionClient;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonChargerTable = (gcnew System::Windows::Forms::Button());
			this->TextBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddClient = (gcnew System::Windows::Forms::Button());
			this->TextID = (gcnew System::Windows::Forms::Label());
			this->TextValorID = (gcnew System::Windows::Forms::Label());
			this->TextNom = (gcnew System::Windows::Forms::Label());
			this->TextPrenom = (gcnew System::Windows::Forms::Label());
			this->TextBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(142, 16);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(440, 197);
			this->dataGridView1->TabIndex = 0;
			// 
			// buttonChargerTable
			// 
			this->buttonChargerTable->Location = System::Drawing::Point(10, 189);
			this->buttonChargerTable->Margin = System::Windows::Forms::Padding(2);
			this->buttonChargerTable->Name = L"buttonChargerTable";
			this->buttonChargerTable->Size = System::Drawing::Size(109, 19);
			this->buttonChargerTable->TabIndex = 1;
			this->buttonChargerTable->Text = L"Charger Table Client";
			this->buttonChargerTable->UseVisualStyleBackColor = true;
			this->buttonChargerTable->Click += gcnew System::EventHandler(this, &MyForm::buttonChargerTable_Click);
			// 
			// TextBoxNom
			// 
			this->TextBoxNom->Location = System::Drawing::Point(10, 58);
			this->TextBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->TextBoxNom->Name = L"TextBoxNom";
			this->TextBoxNom->Size = System::Drawing::Size(101, 20);
			this->TextBoxNom->TabIndex = 2;
			// 
			// buttonAddClient
			// 
			this->buttonAddClient->Location = System::Drawing::Point(10, 156);
			this->buttonAddClient->Margin = System::Windows::Forms::Padding(2);
			this->buttonAddClient->Name = L"buttonAddClient";
			this->buttonAddClient->Size = System::Drawing::Size(75, 19);
			this->buttonAddClient->TabIndex = 3;
			this->buttonAddClient->Text = L"Ajouter Personne";
			this->buttonAddClient->UseVisualStyleBackColor = true;
			this->buttonAddClient->Click += gcnew System::EventHandler(this, &MyForm::buttonAddClient_Click);
			// 
			// TextID
			// 
			this->TextID->AutoSize = true;
			this->TextID->Location = System::Drawing::Point(12, 16);
			this->TextID->Name = L"TextID";
			this->TextID->Size = System::Drawing::Size(18, 13);
			this->TextID->TabIndex = 5;
			this->TextID->Text = L"ID";
			// 
			// TextValorID
			// 
			this->TextValorID->AutoSize = true;
			this->TextValorID->Location = System::Drawing::Point(36, 16);
			this->TextValorID->Name = L"TextValorID";
			this->TextValorID->Size = System::Drawing::Size(16, 13);
			this->TextValorID->TabIndex = 6;
			this->TextValorID->Text = L"-1";
			// 
			// TextNom
			// 
			this->TextNom->AutoSize = true;
			this->TextNom->Location = System::Drawing::Point(12, 43);
			this->TextNom->Name = L"TextNom";
			this->TextNom->Size = System::Drawing::Size(29, 13);
			this->TextNom->TabIndex = 7;
			this->TextNom->Text = L"Nom";
			// 
			// TextPrenom
			// 
			this->TextPrenom->AutoSize = true;
			this->TextPrenom->Location = System::Drawing::Point(12, 95);
			this->TextPrenom->Name = L"TextPrenom";
			this->TextPrenom->Size = System::Drawing::Size(43, 13);
			this->TextPrenom->TabIndex = 8;
			this->TextPrenom->Text = L"Prenom";
			// 
			// TextBoxPrenom
			// 
			this->TextBoxPrenom->Location = System::Drawing::Point(11, 111);
			this->TextBoxPrenom->Name = L"TextBoxPrenom";
			this->TextBoxPrenom->Size = System::Drawing::Size(100, 20);
			this->TextBoxPrenom->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 265);
			this->Controls->Add(this->TextBoxPrenom);
			this->Controls->Add(this->TextPrenom);
			this->Controls->Add(this->TextNom);
			this->Controls->Add(this->TextValorID);
			this->Controls->Add(this->TextID);
			this->Controls->Add(this->buttonAddClient);
			this->Controls->Add(this->TextBoxNom);
			this->Controls->Add(this->buttonChargerTable);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonChargerTable_Click(System::Object^ sender, System::EventArgs^ e) {
		loadDataGridView();
	}

	private: System::Void buttonAddClient_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionClient->ajouterClient(TextBoxNom->Text, TextBoxPrenom->Text);
		loadDataGridView();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		GestionClient = gcnew Services::GestionClient();
	}

	private: void loadDataGridView() {
		dataGridView1->DataSource = GestionClient->listeClient("Client");
		dataGridView1->DataMember = "Client";
	}
};
}
