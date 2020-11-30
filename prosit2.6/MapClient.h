#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class MapClient
{
public:
	MapClient();
	String^ SELECT(void);
	String^ INSERT(void);
	String^ DELETE(void);
	String^ UPDATE(String^, String^, String^, String^);
	void setID(int);
	void setNom(String^);
	void setPrenom(String^);
	void setAdresse(String^);
	void setVille(String^);
	int getId(void);
	String^ getNom(void);
	String^ getPrenom(void);
	String^ getAdresse(void);
	String^ getVille(void);

private:
	int ID;
	String^ Nom;
	String^ Prenom;
	String^ Adresse;
	String^ Ville;
};

