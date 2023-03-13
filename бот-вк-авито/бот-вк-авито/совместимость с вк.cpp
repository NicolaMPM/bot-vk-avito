#include<tuple>
#include"ׁמגלוסעטלמסעü ראבכמם.cpp"
#include<vector>
#pragma once

using namespace std;

namespace WorkingSVK {

	class VK : public ShablonSocSet::PeredachaPols {

	public:
		string token;
		string User;
		string Password;

		string Idshnik;
		string FIO;
		void prisvoenit() {
			potoc::Vhod* vhod = nullptr;
			this->token = vhod->VKToken;
			this->User = vhod->userVK;
			this->Password = vhod->passwordVK;
		}
		string ChtenieAPIVKIDshik(const string &a) {
			VK* IDshnik = nullptr;
			return IDshnik->Idshnik = a;
		}
		string ChtenieAPIVKIDshik() {
			ChtenieAPIVKIDshik(Idshnik);
			return Idshnik;
		}
		string ChtenieAPIVKFIO(const string& a) {
			VK* FIo = nullptr;
			return FIo->FIO;
		}
		string ChtenieAPIVKFIO() {
			ChtenieAPIVKFIO(FIO);
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
