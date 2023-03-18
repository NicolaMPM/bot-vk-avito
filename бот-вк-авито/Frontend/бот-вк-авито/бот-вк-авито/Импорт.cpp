#include<vector>
#include<tuple>
#include"C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h"
#include<string>

#pragma once

using namespace std;

namespace Import {
	class ImportDataBaseFromMySQL {
	public:
		vector<tuple<int, string, string>> importDataBaseAvito(const char* UserServerLog,const char* UserServerPass) {//������ � ����� ����� �� ���� ������ �����
			MYSQL* conn;
			// �������� ���������� ����������
			conn = mysql_init(NULL);
			vector<tuple<int, string, string>> mass;
			MYSQL* link = mysql_init(0);
			MYSQL_RES* result = mysql_store_result(link);
			MYSQL_ROW row;
			mysql_real_connect(link, "���", UserServerLog, UserServerPass, "databaseclientsAvito", 2, 0, 0);
			mysql_query(link, "SET NAMES 'cp1251'");//����� ��������� ����������
			row = mysql_fetch_row(result);
			int i = 0;
			while (row[i] != nullptr) {
				mass.push_back(make_tuple(i, row[i]++, row[i] + 2));
				i++;
			}
			mysql_free_result(result);
			mysql_close(link);
			return mass;
		}//��� ������� ������������ � ������� ������ �� ���� ������(����� ����� ����� ����� ���������)
		vector<tuple<int, string, string>> importDataBaseVK(const char* UserServerLog, const char* UserServerPass) {//������ � ����� ����� �� ���� ������ ��
			MYSQL* conn;
			// �������� ���������� ����������
			conn = mysql_init(NULL);
			MYSQL* link = mysql_init(0);
			vector<tuple<int, string, string>>mass;
			MYSQL_RES* result = mysql_store_result(link);
			MYSQL_ROW row;
			mysql_real_connect(link, "���", UserServerLog, UserServerPass, "databaseclientsvk", 1, 0, 0);
			mysql_query(link, "SET NAMES 'cp1251'");//����� ��������� ����������
			row = mysql_fetch_row(result);
			int i = 0;
			string ak;
			while (row[i] != nullptr) {
				mass.push_back(make_tuple(i, row[i]++, row[i] + 2));
				i++;
			}
			mysql_free_result(result);
			mysql_close(link);
			return mass;
		}//��� ������� ������������ � ������� ������ �� ���� ������ (����� ����� ����� ����� ���������)
	};
}