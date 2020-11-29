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

	void GestionClient::ajouterClient(String^ nom, String^prenom)
	{
		int id;
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		id = this->cad->actionRowsID(this->client->INSERT());
	}
}