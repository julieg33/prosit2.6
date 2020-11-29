#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class Cad
{
public : 
	Cad();
	int actionRowsID(String^);
	void actionRows(String^);
	DataSet^ getRows(String^, String^);
private:
	String^ connection_string;
	String^ request_sql;
	SqlConnection^ sql_connection; 
	SqlDataAdapter^ sql_data_adapter;
	SqlCommand^ sql_command;
	DataSet^ data_set;
	void setSql(String^);
};

