#include "јлгоритмы.cpp"
#include"совместимость с вк.cpp"
#include"совместимость с авито.cpp"
#include<tuple>
#pragma once

using namespace std;

namespace ExportAndImportData {
	class ChtenieColoumn {
	public:
		int numVK;
		int numAvito;
		vector<string> coloumnVK() {//данные из таблицы ¬  клиентов
			potoc::Vhod* vhod = nullptr;
			if (vhod->vvod() == 0) {
				std::vector<std::string> tables;
				MYSQL_RES* result;
				MYSQL_ROW row;
				MYSQL* connection, mysql;
				int state;
				mysql_init(&mysql);
				mysql_query(&mysql, "SET NAMES 'cp1251'");//задаЄм кодировку соединени€
				connection = mysql_real_connect(&mysql, "localhost3306", vhod->UserServerLog, vhod->UserServerPass, "databaseclientsvk", 1, 0, 0);
				if (connection == NULL)
				{
					return tables;
				}
				result = mysql_store_result(connection);
				int i = 0;
				while ((row = mysql_fetch_row(result)) != NULL)
				{
					tables.push_back(row[i]);
					i++;
				}
				state = mysql_query(connection, "SHOW TABLES");
				if (state != 0)
				{
					return tables;
				}
				mysql_free_result(result);
				mysql_close(connection);
				mysql_close(&mysql);
				return tables;
			}
		}
		vector<string>coloumnAvito() {//данные из таблицы јвито клиентов
			setlocale(LC_ALL, ".1251");
			potoc::Vhod* vhod = nullptr;
			if (vhod->vvod() == 0) {
				std::vector<std::string> tables;
				MYSQL_RES* result;
				MYSQL_ROW row;
				MYSQL* connection, mysql;
				int state;
				mysql_query(&mysql, "SET NAMES 'cp1251'");//задаЄм кодировку соединени€
				connection = mysql_real_connect(&mysql, "бот", vhod->UserServerLog, vhod->UserServerPass, "databaseclientsvk", 2, 0, 0);
				if (connection == NULL)
				{
					return tables;
				}
				state = mysql_query(connection, "SHOW TABLES");
				if (state != 0)
				{
					return tables;
				}
				result = mysql_store_result(connection);

				int i = 0;
				while ((row = mysql_fetch_row(result)) != NULL)
				{
					tables.push_back(row[i]);
					i++;
				}
				mysql_free_result(result);
				mysql_close(connection);
				return tables;
			}
		}
	};
	class WorkingSVKK {
	public:
		vector<string>DBVK = ZapolnenieDBVK();
		vector<string>DBAvito = ZapolnenieDBAvito();
		void FinalFunctionExportVK() {
			ExportDataBaseSortVK();
		}//Ёту функцию использовать когда буду экспортировать данные в базу данных(при записи новых пользователей(когда будет подключена API))
		void FinalFunctionExportAvito() {
			ExportDataBaseSortAvito();
		}//Ёту функцию использовать когда буду экспортировать данные в базу данных(при записи новых пользователей(когда будет подключена API))
		void exportDataBaseAvito(const size_t &i) {//Ёкспорт 1-й €чейки и сбор базы данных јвито
			MYSQL* link;
			link = mysql_init(0);
			potoc::Vhod *vhod = nullptr;
			WorkingSAvito::Avito *avito = nullptr;
			mysql_real_connect(link, "localhost3306", vhod->UserServerLog, vhod->UserServerPass, "databaseclientsvk", 0, 0, 0);
			mysql_query(link, "SET NAMES 'cp1251'");//задаЄм кодировку соединени€
			if (vhod->vvod() == 0) {//Ёкспорт одной €чейки базы данных јвито
				string A = "INSERT INTO `ClientsAvito` (id,IDPols, ‘»ќ) VALUES (" + to_string(i) + "," + avito->ChtenieAPIAvitoIDshnick() + "," + avito->ChtenieAPIAvitoFIO() + ");";
				mysql_query(link, A.c_str());
			}
			else if (vhod->vvod() == 1) {
				mysql_close(link);
				return;
			}
		}
		vector<string>ZapolnenieDBAvito() {
			ChtenieColoumn* chtn = nullptr;
			return chtn->coloumnAvito();
		}
		vector<string>ZapolnenieDBVK() {
			ChtenieColoumn* chtn = nullptr;
			return chtn->coloumnVK();
		}
		string searchVK(const string& searchSlovo) {//поиск по базе
			vector<string>a = DBVK;
			Structures::BinarySearch BS;
			DBVK.clear();
			return BS.Search(searchSlovo, a);
		}
		string searchAvito(const string& searchSlovo) {//поиск по базе
			vector<string>a = DBAvito;
			Structures::BinarySearch BS;
			DBAvito.clear();
			return BS.Search(searchSlovo, a);
		}
		void exportDataBaseVK(const size_t &i) {//Ёкспорт 1-й €чейки и сбор базы данных ¬ 
			MYSQL* link;
			link = mysql_init(0);
			potoc::Vhod* vhod = nullptr;
			WorkingSVK::VK* vk = nullptr;
			mysql_real_connect(link, "бот", vhod->UserServerLog, vhod->UserServerPass, "databaseclientsvk", 0, 0, 0);
			mysql_query(link, "SET NAMES 'cp1251'");//задаЄм кодировку соединени€
			if (vhod->vvod() == 0) {//Ёкспорт одной €чейки базы данных ¬ 
				string A = "INSERT INTO `ClientsVK` (id,IDPols, ‘»ќ) VALUES (" + to_string(i) + "," + vk->ChtenieAPIVKIDshik() + "," + vk->ChtenieAPIVKFIO() + ");";
				mysql_query(link, A.c_str());
				mysql_close(link);
			}
			else if (vhod->vvod() == 1) {
				mysql_close(link);
				return;
			}
		}
		void ExportDataBaseSortVK() {//Ёкспортирование отсортированной и удаление старой базы данных ¬ 
			ChtenieColoumn *CVK = nullptr;
			MYSQL* link;
			potoc::Vhod *vhod = nullptr;
			link = mysql_init(0);
			mysql_real_connect(link, "бот", vhod->UserServerLog, vhod->UserServerPass, "databaseclientsvk", 0, 0, 0);
			mysql_query(link, "SET NAMES 'cp1251'");//задаЄм кодировку соединени€
			vector<string> Rezerv = CVK->coloumnVK();
			FreeDataBase("VK", CVK->numVK);
			struct Structures::SortirovkaThree::Three* root = 0;
			Structures::SortirovkaThree rot;
			for (size_t i = 0; i < Rezerv.size(); i++) {//—ортировка вектора
				root = rot.addNode(Rezerv[i], root);
			}
			Rezerv = Structures::zapis;
			DBVK = Rezerv;
			Structures::zapis.clear();
			for (size_t i = 0; i < Rezerv.size(); i++) {
				exportDataBaseVK(i);
			}
			mysql_close(link);

		}
		void ExportDataBaseSortAvito() {//Ёкспортирование отсортированной базы данных јвито
			ChtenieColoumn *CAvito = nullptr;
			MYSQL* link;
			potoc::Vhod* vhod = nullptr;
			link = mysql_init(0);
			mysql_real_connect(link, "бот", vhod->UserServerLog, vhod->UserServerPass, "databaseclientsvk", 0, 0, 0);
			mysql_query(link, "SET NAMES 'cp1251'");//задаЄм кодировку соединени€
			vector<string> Rezerv = CAvito->coloumnAvito();
			FreeDataBase("VK", CAvito->numAvito);
			struct Structures::SortirovkaThree::Three* root = 0;
			Structures::SortirovkaThree *rot = nullptr;
			for (size_t i = 0; i < Rezerv.size(); i++) {//—ортировка вектора
				root = rot->addNode(Rezerv[i], root);
			}
			rot->freeRAM(root);
			Rezerv = Structures::zapis;
			DBAvito = Rezerv;
			Structures::zapis.clear();
			for (size_t i = 0; i < Rezerv.size(); i++) {
				exportDataBaseAvito(i);
			}
			mysql_close(link);
		}
		void FreeDataBase(const string& SocSet, const int& Schetchic) {//удаление €чейки базы данных
			MYSQL* link = mysql_init(0);
			potoc::Vhod* vhod = nullptr;
			mysql_real_connect(link, "бот", vhod->UserServerLog, vhod->UserServerPass, "databaseclientsvk", 0, 0, 0);
			mysql_query(link, "SET NAMES 'cp1251'");//задаЄм кодировку соединени€
			for (int i = 0; i < Schetchic; i++) {
				string deleteYacheyka = "update `Clients" + SocSet + "` set `‘»ќ` = null where `id` = " + to_string(i) + ";";
				mysql_query(link, deleteYacheyka.c_str());
				deleteYacheyka = "update `Clients" + SocSet + "` set `IDPols` = null where `id` = " + to_string(i) + ";";
				mysql_query(link, deleteYacheyka.c_str());
				deleteYacheyka = "update `Clients" + SocSet + "` set `IdClientsAvito` = null where `id` = " + to_string(i) + "; ";
				mysql_query(link, deleteYacheyka.c_str());
			}
			mysql_close(link);
		}
	};
}