#include"C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h"
#include <msclr\marshal_cppstd.h>
#include<msclr/marshal.h>
#include"MyForm.h"
#include<iostream>

#pragma once

using namespace std;

namespace potoc {
	class Vhod {
		public:
			const char* UserServerLog = Interface::localhostLogin.c_str();
			const char* UserServerPass = Interface::localhostPass.c_str();
			const char *passwordVK = Interface::ClientPassVK.c_str();
			const char *passwordAvito = Interface::ClientPassAvito.c_str();
			const char* VKToken = Interface::VKToken.c_str();
			const char* AvitoToken = Interface::AvitoToken.c_str();
			const char* userVK = Interface::ClientLoginVK.c_str();
			const char *userAvito = Interface::ClientLoginAvito.c_str();
			inline int vvod() {
				setlocale(LC_ALL, "Russian");
				MYSQL* conn;
				// �������� ���������� ����������
				conn = mysql_init(NULL);
				if (conn == NULL)
				{
					// ���� ���������� �� ������� � ������� ��������� �� ������
					mysql_close(conn);
					return 1;
				}
				// ������������ � �������
				if (!mysql_real_connect(conn, "���", UserServerLog, UserServerLog, UserServerPass, NULL, NULL, 0))
				{
					// ���� ��� ����������� ���������� ���������� � ��������
					// ���� ������ ������� ��������� �� ������
					mysql_close(conn);
					return 1;
				}
				else
				{
					return 0;//������� ��� ������� ���������� MySQL
				}
				// ��������� ���������� � �������� ���� ������
				mysql_close(conn);
				return 0;
			}
	};
}
