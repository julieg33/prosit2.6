#include "Cad.h"

Cad::Cad()
{
	this->request_sql = "";
	this->connection_string = "Data Source=.;Initial Catalog=test;Integrated Security=True";
	this->sql_connection = gcnew SqlConnection(this->connection_string);
	this->sql_command = gcnew SqlCommand(this->request_sql, this->sql_connection);
	this->sql_command->CommandType = CommandType::Text;
}

int Cad::actionRowsID(String^ requestSQL)
{
	int id;
	this->setSql(requestSQL);
	this->sql_command->CommandText = this->request_sql;
	this->sql_connection->Open();
	id = Convert::ToInt32(this->sql_command->ExecuteScalar());
	this->sql_connection->Close();
	return id;
}

void Cad::actionRows(String^ requestSQL)
{
	this->setSql(requestSQL);
	this->sql_command->CommandText = this->request_sql;
	this->sql_connection->Open();
	this->sql_command->ExecuteNonQuery();
	this->sql_connection->Close();
}

DataSet^ Cad::getRows(String^ requestsql, String^ dataTableName)
{
	this->setSql(requestsql);
	this->sql_data_adapter = gcnew SqlDataAdapter(this->sql_command);
	this->sql_command->CommandText = this->request_sql;
	this->data_set = gcnew DataSet();
	this->sql_data_adapter->Fill(this->data_set, dataTableName);
	return this->data_set;
}

void Cad::setSql(String^ requestSql)
{
	this->request_sql = requestSql;
}
