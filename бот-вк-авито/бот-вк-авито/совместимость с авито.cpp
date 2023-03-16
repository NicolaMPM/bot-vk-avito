#include<tuple>
#include"ׁמגלוסעטלמסעü ראבכמם.cpp"
#include<vector>

#pragma once

using namespace std;

namespace WorkingSAvito {
	class Avito : public ShablonSocSet::PeredachaPols {
	private:
		string* Utoken = (string*)0x0039F960;
		string* UUser = (string*)0x0039F961;
		string* UPassword = (string*)0x0039F962;
		string* UIdshnik = (string*)0x0039F963;
		string* UFIO = (string*)0x0039F964;
		string* CAPIAID = (string*)0x0039F965;
		string* CAPIFIO = (string*)0x0039F966;
		string* CAAPIID = (string*)0x0039F969;
		string* CAPIID = (string*)0x0039F971;
		vector<tuple<unsigned, string, string, string>>* mass = (vector<tuple<unsigned, string, string, string>>*)0x0039F972;
	public:
		template<typename T>
		Avito() {
			T* preob = (T*)0x0039F970;
			preob = &this->Preob;
			this->Preob();
			delete preob;
		}
		~Avito() {
			delete this->Utoken;
			delete this->UUser;
			delete this->UPassword;
			delete this->UIdshnik;
			delete this->UFIO;
			delete this->CAPIAID;
			delete this->CAPIFIO;
			delete this->CAAPIID;
			delete this->CAPIID;
			delete this->mass;
		}
		string token;
		string User;
		string Password;

		string Idshnik;
		string FIO;
		template<typename T>
		inline void Preob() {
			potoc::Vhod* vhod = nullptr;
			this->token = vhod->AvitoToken;
			this->User = vhod->userAvito;
			this->Password = vhod->passwordAvito;
			this->Utoken = &this->token;
			this->UUser = &this->User;
			this->Utoken = &this->token;
			this->CAPIAID = &this->ChtenieAPIAvitoIDshnickSH;
			this->CAPIFIO = &this->ChtenieAPIAvitoFIOSH;
			vector<T*> mass = VidPAm();
			mass[0] = &this->vvodZnach;
			mass[1] = &this->SearchClient;
			this->CAAPIID = &this->ChtenieAPIAvitoFIO;
			this->CAPIID = &this->ChtenieAPIAvitoIDshnick;
			this->mass = &this->Mass;
			delete mass;
		}
		template<typename T>
		vector<T*> VidPAm() {
			vector<T*> pam;
			pam.push_back(T * vvod = (T*)0x0039F967);
			pam.push_back(T* SCL = (T*)0x0039F968);
		}
		inline void vvodZnach() {}
		inline void SearchClient() {}
		string ChtenieAPIAvitoIDshnickSH(const string& a) {
			return this->Idshnik = a;
		}
		string ChtenieAPIAvitoFIOSH(const string& a) {
			return this->FIO = a;
		}
		string ChtenieAPIAvitoFIO() {
			ChtenieAPIAvitoFIOSH(FIO);
			return FIO;
		}
		string ChtenieAPIAvitoIDshnick() {
			ChtenieAPIAvitoIDshnickSH(Idshnik);
			return Idshnik;
		}
		vector<tuple<unsigned int, string, string, string>>Mass() {
			vector<tuple<unsigned int, string, string, string>>mass;
			string Binary;
			unsigned int Shetchick = 0;
			for (int i = 0;; i++) {
				mass.push_back(make_tuple(Shetchick, ChtenieAPIAvitoIDshnick(), ChtenieAPIAvitoFIO(), Binary));
				Shetchick++;
			}
			return mass;
		}
	};
}
