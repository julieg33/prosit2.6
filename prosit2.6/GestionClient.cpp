#include "GestionClient.h"
namespace Services {
	GestionClient::GestionClient()
	{
		this->cad = gcnew Cad();
		this->client = gcnew MapClient();
	}

	DataSet^ GestionClient::listeClient(String^ datablename)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECT(), datablename);
		return this->ds;
	}


	void GestionClient::ajouterClient(String^ nom, String^ prenom, String^ adresse, String^ ville)
	{
		int id_client;
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		this->client->setAdresse(adresse);
		this->client->setVille(ville);
		id_client = this->cad->actionRowsID(this->client->INSERT());
	}
	void GestionClient::supprimerClient(int ID)
	{
		int id_client;
		this->client->setID(ID);
		id_client = this->cad->actionRowsID(this->client->DELETE());

	}

	void GestionClient::modifierClient(int ID, String^ nvNom, String^ nvPrenom, String^ nvAdresse, String^ nvVille)
	{
		int id_client;
		this->client->setID(ID);
		id_client = this->cad->actionRowsID(this->client->UPDATE(nvNom, nvPrenom, nvAdresse, nvVille));
	}
}