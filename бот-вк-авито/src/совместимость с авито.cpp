#include<tuple>
#include"ׁמגלוסעטלמסעü ראבכמם.cpp"
#include<vector>

#pragma once

using namespace std;

namespace WorkingSAvito {
	class Avito : public ShablonSocSet::PeredachaPols {
	public:
		string token;
		string User;
		string Password;

		string Idshnik;
		string FIO;
		inline void Preob() {
			potoc::Vhod* vhod = nullptr;
			this->token = vhod->AvitoToken;
			this->User = vhod->userAvito;
			this->Password = vhod->passwordAvito;
		}
		inline void vvodZnach() {}
		inline void SearchClient() {}
		string ChtenieAPIAvitoIDshnick(const string& a) {
			Avito* avito = nullptr;
			return avito->Idshnik = a;
		}
		string ChtenieAPIAvitoFIO(const string& a) {
			Avito* avito = nullptr;
			return avito->FIO = a;
		}
		string ChtenieAPIAvitoFIO() {
			ChtenieAPIAvitoFIO(FIO);
			return FIO;
		}
		string ChtenieAPIAvitoIDshnick() {
			ChtenieAPIAvitoIDshnick(Idshnik);
			return Idshnik;
		}
		vector<tuple<unsigned int, string, string, string>>Mass() {
			vector<tuple<unsigned int, string, string, string>>mass;
			string Binary;
			unsigned int Shetchick = 0;
			for (int i = 0;; i++) {
				mass.push_back(make_tuple(Shetchick, ChtenieAPIAvitoIDshnick(), ChtenieAPIAvitoFIO(), Binary));
			}
		}
	};
}
