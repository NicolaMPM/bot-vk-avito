#include<tuple>
#include"ׁמגלוסעטלמסעü ראבכמם.cpp"
#include<vector>
#pragma once

using namespace std;

namespace WorkingSVK {

	class VK : public ShablonSocSet::PeredachaPols {
	private:
		string* Utoken = (string*)0x0039F973;
		string* UUser = (string*)0x0039F974;
		string* UPassword = (string*)0x0039F975;
		string* UIdshnik = (string*)0x0039F976;
		string* UFIO = (string*)0x0039F977;
		string* CAPIAID = (string*)0x0039F978;
		string* CAPIFIO = (string*)0x0039F979;
		string* CAAPIID = (string*)0x0039F980;
		string* CAPIID = (string*)0x0039F981;
		vector<tuple<unsigned, string, string, string>>* mass = (vector<tuple<unsigned, string, string, string>>*)0x0039F984;
	public:
		template<typename T>
		VK() {
			T* fun = (T*)0x0039F983;
			fun = &this->prisvoenit;
			this->prisvoenit();
			delete fun;
		}
		~VK() {
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
		inline void prisvoenit() {
			potoc::Vhod* vhod = nullptr;
			this->token = vhod->VKToken;
			this->User = vhod->userVK;
			this->Password = vhod->passwordVK;
			this->Utoken = &this->token;
			this->UUser = &this->User;
			this->UPassword = &this->Password;
			this->UIdshnik = &this->Idshnik;
			this->UFIO = &this->FIO;
			this->CAPIAID = &this->ChtenieAPIVKFIOSH;
			this->CAPIFIO = &this->ChtenieAPIVKFIO;
			this->CAAPIID = &this->ChtenieAPIVKIDshik;
			this->CAPIID = &this->ChtenieAPIVKIDshikSH;
			T *p = (T*)0x0039F982;
			p = &this->vvodZnach;
			this->mass = &this->Mass;
			delete p;
		}
		string ChtenieAPIVKIDshikSH(const string &a) {
			return this->Idshnik = a;
		}
		string ChtenieAPIVKIDshik() {
			ChtenieAPIVKIDshikSH(Idshnik);
			return Idshnik;
		}
		string ChtenieAPIVKFIOSH(const string& a) {
			return this->FIO = a;
		}
		string ChtenieAPIVKFIO() {
			ChtenieAPIVKFIOSH(FIO);
			return FIO;
		}
		inline void vvodZnach() {}
		vector<tuple<unsigned int, string, string, string>>Mass() {
			vector<tuple<unsigned int, string, string, string>>mass;
			string Binary;
			unsigned int Shetchick = 0;
			for (int i = 0;; i++) {
				mass.push_back(make_tuple(Shetchick, ChtenieAPIVKIDshik(), ChtenieAPIVKFIO(), Binary));
			}
			return mass;
		}
	};
}
