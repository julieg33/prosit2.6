#pragma once
#include "Cad.h"
#include "MapClient.h"

namespace Services {
	ref class GestionClient
	{
	public:
		GestionClient();
		DataSet^ listeClient(String^);
		void ajouterClient(String^, String^);

	private:
		Cad^ cad;
		MapClient^ client;
		DataSet^ ds;
	};
}

