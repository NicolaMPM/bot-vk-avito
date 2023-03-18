#include"C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h"
#include <msclr\marshal_cppstd.h>
#include<msclr/marshal.h>
#include"MyForm.h"
#include<iostream>

#pragma once

using namespace std;

namespace potoc {
	class Vhod {
	private:
		const char* UUserServerLog = (const char*)3799429;
		const char* UUserServerPass = (const char*)3799430;
		const char* UpasswordVK = (const char*)3799431;
		const char* UpasswordAvito = (const char*)3799432;
		const char* UVKtoken = (const char*)3799433;
		const char* UAvitoToken = (const char*)3799434;
		const char* UuserVK = (const char*)3799435;
		const char* UuserAvito = (const char*)3799436;
	public:
		template<typename T>
		Vhod() {
			this->UUserServerLog = this->UserServerLog;
			this->UUserServerPass = this->UserServerPass;
			this->UpasswordVK = this->passwordVK;
			this->UpasswordAvito = this->passwordAvito;
			this->UVKtoken = this->VKToken;
			this->UAvitoToken = this->AvitoToken;
			this->UuserVK = this->userVK;
			this->UuserAvito = this->userAvito;
			T* a = (T*)3799437;
			a = &this->vvod;
			delete a;
		}
		~Vhod() {
			delete UUserServerLog;
			delete UUserServerPass;
			delete UpasswordVK;
			delete UpasswordAvito;
			delete UVKtoken;
			delete UAvitoToken;
			delete UuserVK;
			delete UuserAvito;
			delete UserServerLog;
			delete UserServerPass;
			delete passwordVK;
			delete passwordAvito;
			delete VKToken;
			delete AvitoToken;
			delete userVK;
			delete userAvito;
		}
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
				// Получаем дескриптор соединения
				conn = mysql_init(NULL);
				if (conn == NULL)
				{
					// Если дескриптор не получен – выводим сообщение об ошибке
					mysql_close(conn);
					return 1;
				}
				// Подключаемся к серверу
				if (!mysql_real_connect(conn, "бот", UserServerLog, UserServerLog, UserServerPass, NULL, NULL, 0))
				{
					// Если нет возможности установить соединение с сервером
					// базы данных выводим сообщение об ошибке
					mysql_close(conn);
					return 1;
				}
				else
				{
					return 0;//Вариант при котором возвращает MySQL
				}
				// Закрываем соединение с сервером базы данных
				mysql_close(conn);
				return 0;
			}
	};

}
