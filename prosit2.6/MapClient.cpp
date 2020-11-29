#include "MapClient.h"

MapClient::MapClient()
{
	this->ID = -1;
	this->Nom = "";
	this->Prenom = "";
}

String^ MapClient::SELECT(void)
{
	return "SELECT * FROM dbo.Client";
}

String^ MapClient::INSERT(void)
{
	return "INSERT INTO dbo.Client (Nom, Prenom) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
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

