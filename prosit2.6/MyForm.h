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

	private: System::Windows::Forms::Label^ TextNom;
	private: System::Windows::Forms::Label^ TextPrenom;
	private: System::Windows::Forms::TextBox^ TextBoxPrenom;
	private: System::Windows::Forms::Label^ TextAdresse;
	private: System::Windows::Forms::Label^ TextVille;
	private: System::Windows::Forms::TextBox^ TextBoxAdresse;
	private: System::Windows::Forms::TextBox^ TextBoxVille;
	
	private: System::Windows::Forms::Button^ buttonSupClient;
	private: System::Windows::Forms::TextBox^ TextBoxIDclient;







	private: System::Windows::Forms::Button^ buttonUpdateClient;


	






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
			this->TextNom = (gcnew System::Windows::Forms::Label());
			this->TextPrenom = (gcnew System::Windows::Forms::Label());
			this->TextBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->TextAdresse = (gcnew System::Windows::Forms::Label());
			this->TextVille = (gcnew System::Windows::Forms::Label());
			this->TextBoxAdresse = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxVille = (gcnew System::Windows::Forms::TextBox());
			this->buttonSupClient = (gcnew System::Windows::Forms::Button());
			this->TextBoxIDclient = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdateClient = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(334, 20);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(747, 242);
			this->dataGridView1->TabIndex = 0;
			// 
			// buttonChargerTable
			// 
			this->buttonChargerTable->Location = System::Drawing::Point(936, 266);
			this->buttonChargerTable->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonChargerTable->Name = L"buttonChargerTable";
			this->buttonChargerTable->Size = System::Drawing::Size(145, 23);
			this->buttonChargerTable->TabIndex = 1;
			this->buttonChargerTable->Text = L"Charger Table Client";
			this->buttonChargerTable->UseVisualStyleBackColor = true;
			this->buttonChargerTable->Click += gcnew System::EventHandler(this, &MyForm::buttonChargerTable_Click);
			// 
			// TextBoxNom
			// 
			this->TextBoxNom->Location = System::Drawing::Point(12, 47);
			this->TextBoxNom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxNom->Name = L"TextBoxNom";
			this->TextBoxNom->Size = System::Drawing::Size(133, 22);
			this->TextBoxNom->TabIndex = 2;
			// 
			// buttonAddClient
			// 
			this->buttonAddClient->Location = System::Drawing::Point(12, 224);
			this->buttonAddClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAddClient->Name = L"buttonAddClient";
			this->buttonAddClient->Size = System::Drawing::Size(100, 23);
			this->buttonAddClient->TabIndex = 3;
			this->buttonAddClient->Text = L"Ajouter ";
			this->buttonAddClient->UseVisualStyleBackColor = true;
			this->buttonAddClient->Click += gcnew System::EventHandler(this, &MyForm::buttonAddClient_Click);
			// 
			// TextID
			// 
			this->TextID->AutoSize = true;
			this->TextID->Location = System::Drawing::Point(211, 91);
			this->TextID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TextID->Name = L"TextID";
			this->TextID->Size = System::Drawing::Size(71, 16);
			this->TextID->TabIndex = 5;
			this->TextID->Text = L"ID CLIENT";
			// 
			// TextNom
			// 
			this->TextNom->AutoSize = true;
			this->TextNom->Location = System::Drawing::Point(9, 29);
			this->TextNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TextNom->Name = L"TextNom";
			this->TextNom->Size = System::Drawing::Size(37, 16);
			this->TextNom->TabIndex = 7;
			this->TextNom->Text = L"Nom";
			// 
			// TextPrenom
			// 
			this->TextPrenom->AutoSize = true;
			this->TextPrenom->Location = System::Drawing::Point(10, 71);
			this->TextPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TextPrenom->Name = L"TextPrenom";
			this->TextPrenom->Size = System::Drawing::Size(55, 16);
			this->TextPrenom->TabIndex = 8;
			this->TextPrenom->Text = L"Prenom";
			// 
			// TextBoxPrenom
			// 
			this->TextBoxPrenom->Location = System::Drawing::Point(12, 91);
			this->TextBoxPrenom->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxPrenom->Name = L"TextBoxPrenom";
			this->TextBoxPrenom->Size = System::Drawing::Size(133, 22);
			this->TextBoxPrenom->TabIndex = 9;
			// 
			// TextAdresse
			// 
			this->TextAdresse->AutoSize = true;
			this->TextAdresse->Location = System::Drawing::Point(10, 117);
			this->TextAdresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TextAdresse->Name = L"TextAdresse";
			this->TextAdresse->Size = System::Drawing::Size(59, 16);
			this->TextAdresse->TabIndex = 10;
			this->TextAdresse->Text = L"Adresse";
			// 
			// TextVille
			// 
			this->TextVille->AutoSize = true;
			this->TextVille->Location = System::Drawing::Point(13, 163);
			this->TextVille->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TextVille->Name = L"TextVille";
			this->TextVille->Size = System::Drawing::Size(34, 16);
			this->TextVille->TabIndex = 11;
			this->TextVille->Text = L"Ville";
			// 
			// TextBoxAdresse
			// 
			this->TextBoxAdresse->Location = System::Drawing::Point(13, 137);
			this->TextBoxAdresse->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxAdresse->Name = L"TextBoxAdresse";
			this->TextBoxAdresse->Size = System::Drawing::Size(133, 22);
			this->TextBoxAdresse->TabIndex = 12;
			// 
			// TextBoxVille
			// 
			this->TextBoxVille->Location = System::Drawing::Point(13, 183);
			this->TextBoxVille->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxVille->Name = L"TextBoxVille";
			this->TextBoxVille->Size = System::Drawing::Size(133, 22);
			this->TextBoxVille->TabIndex = 13;
			// 
			// buttonSupClient
			// 
			this->buttonSupClient->Location = System::Drawing::Point(195, 168);
			this->buttonSupClient->Margin = System::Windows::Forms::Padding(4);
			this->buttonSupClient->Name = L"buttonSupClient";
			this->buttonSupClient->Size = System::Drawing::Size(100, 23);
			this->buttonSupClient->TabIndex = 15;
			this->buttonSupClient->Text = L"Supprimer";
			this->buttonSupClient->UseVisualStyleBackColor = true;
			this->buttonSupClient->Click += gcnew System::EventHandler(this, &MyForm::buttonSupClient_Click);
			// 
			// TextBoxIDclient
			// 
			this->TextBoxIDclient->Location = System::Drawing::Point(198, 111);
			this->TextBoxIDclient->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxIDclient->Name = L"TextBoxIDclient";
			this->TextBoxIDclient->Size = System::Drawing::Size(97, 22);
			this->TextBoxIDclient->TabIndex = 16;
			// 
			// buttonUpdateClient
			// 
			this->buttonUpdateClient->Location = System::Drawing::Point(195, 139);
			this->buttonUpdateClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonUpdateClient->Name = L"buttonUpdateClient";
			this->buttonUpdateClient->Size = System::Drawing::Size(100, 23);
			this->buttonUpdateClient->TabIndex = 18;
			this->buttonUpdateClient->Text = L"Modifier";
			this->buttonUpdateClient->UseVisualStyleBackColor = true;
			this->buttonUpdateClient->Click += gcnew System::EventHandler(this, &MyForm::buttonUpdateClient_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1093, 300);
			this->Controls->Add(this->buttonUpdateClient);
			this->Controls->Add(this->TextBoxIDclient);
			this->Controls->Add(this->buttonSupClient);
			this->Controls->Add(this->TextBoxVille);
			this->Controls->Add(this->TextBoxAdresse);
			this->Controls->Add(this->TextVille);
			this->Controls->Add(this->TextAdresse);
			this->Controls->Add(this->TextBoxPrenom);
			this->Controls->Add(this->TextPrenom);
			this->Controls->Add(this->TextNom);
			this->Controls->Add(this->TextID);
			this->Controls->Add(this->buttonAddClient);
			this->Controls->Add(this->TextBoxNom);
			this->Controls->Add(this->buttonChargerTable);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
		GestionClient->ajouterClient(TextBoxNom->Text, TextBoxPrenom->Text, TextBoxAdresse->Text, TextBoxVille->Text);
		loadDataGridView();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		GestionClient = gcnew Services::GestionClient();
	}

	private: void loadDataGridView() {
		dataGridView1->DataSource = GestionClient->listeClient("Client");
		dataGridView1->DataMember = "Client";
		TextBoxAdresse->Text = "";
		TextBoxVille->Text = "";
		TextBoxPrenom->Text = "";
		TextBoxNom->Text = "";
		TextBoxIDclient->Text = "";
	}
private: System::Void buttonSupClient_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionClient->supprimerClient(Convert::ToInt32(TextBoxIDclient->Text));
	loadDataGridView();
}

private: System::Void buttonUpdateClient_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionClient->modifierClient(Convert::ToInt32(TextBoxIDclient->Text), TextBoxNom->Text, TextBoxPrenom->Text, TextBoxAdresse->Text, TextBoxVille->Text);
	loadDataGridView();
}
};
}
