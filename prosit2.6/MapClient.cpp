#include "MapClient.h"

MapClient::MapClient()
{
	this->ID = -1;
	this->Nom = "";
	this->Prenom = "";
	this->Adresse = "";
	this->Ville = "";
}

String^ MapClient::SELECT(void)
{
	return "SELECT Adresse.ID_client, Client.Nom, Client.Prenom, Adresse.Adresse, Adresse.Ville FROM dbo.Adresse LEFT JOIN dbo.Client ON Adresse.ID_client=Client.ID;";
}

String^ MapClient::INSERT(void)
{
	return "INSERT INTO dbo.client (nom, prenom) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');" +
		"INSERT INTO dbo.Adresse (Adresse, Ville, ID_client) VALUES('" + this->getAdresse() + "', '" + this->getVille() + "', (SELECT ID FROM dbo.client WHERE nom='" + this->getNom() + "'));";
}

String^ MapClient::DELETE(void)
{
	return "DELETE FROM dbo.Adresse WHERE (ID_client) = ('" + this->getId() + "') ;" 
		"DELETE FROM dbo.client WHERE (ID) = ('" + this->getId() + "') ;";
}

String^ MapClient::UPDATE(String ^nouveauNom, String^ nouveauPrenom, String^nouvelleAdresse, String^nouvelleVille)
{
	return "IF '" + nouveauNom + "'!='' UPDATE client SET client.nom ='" + nouveauNom + "' WHERE client.ID = '" + this->getId() + "' ;" +
		" IF '" + nouveauPrenom + "' !='' UPDATE client SET client.prenom ='" + nouveauPrenom + "' WHERE client.ID = '" + this->getId() + "';" +
		" IF '" + nouvelleAdresse + "' !='' UPDATE Adresse SET Adresse.Adresse='" + nouvelleAdresse + "' WHERE Adresse.ID_client = '" + this->getId() + "';" +
		" IF '" + nouvelleVille + "' !='' UPDATE Adresse SET Adresse.Ville='" + nouvelleVille + "' WHERE Adresse.ID_client = '" + this->getId() + "';";
		//"UPDATE client SET client.nom ='" + nouveauNom + "', client.prenom = '" + nouveauPrenom + "' WHERE client.ID = '" + this->getId() + "';" +
		//"UPDATE Adresse SET Adresse.Adresse='" + nouvelleAdresse + "', Adresse.Ville= '" + nouvelleVille + "' WHERE Adresse.ID_client = '" + this->getId() + "';";
}


void MapClient::setID(int id_client)
{
	if (id_client > 0)
	{
		this->ID = id_client;
	}
}

void MapClient::setNom(String^ nom)
{
	if (nom != "")
	{
		this->Nom = nom;
	}
}

void MapClient::setPrenom(String^ prenom)
{
	if (prenom != "")
	{
		this->Prenom = prenom;
	}
}

void MapClient::setAdresse(String^ adresse)
{
	if (adresse != "")
	{
		this->Adresse = adresse;
	}
}

void MapClient::setVille(String^ ville)
{
	if (ville != "")
	{
		this->Ville = ville;
	}
}

int MapClient::getId(void)
{
	return this->ID;
}

String^ MapClient::getNom(void)
{
	return this->Nom;
}

String^ MapClient::getPrenom(void)
{
	return this->Prenom;
}

String^ MapClient::getAdresse(void)
{
	return this->Adresse;
}

String^ MapClient::getVille(void)
{
	return this->Ville;
}