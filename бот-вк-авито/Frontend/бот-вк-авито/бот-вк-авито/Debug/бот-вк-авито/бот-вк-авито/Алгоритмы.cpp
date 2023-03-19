#include<string>
#include<vector>

#pragma once

using namespace std;

namespace Structures {
	vector<string>zapis;
	class SortirovkaThree {
	private:
	public:
		struct Three{
			string FIO;//ФИО пользователя
			struct Three* left;//сортировка по левому краю
			struct Three* right;//сортировка по правому краю
		private:
			string* fio = (string*)0x0039F99F;
			Three* Left = (Three*)0x0039F9A0;
			Three* Right = (Three*)0x0039F9A1;
			Three operator()(Three argv) {
				return argv;
			}
		public:
			Three() {
				this->fio = &this->FIO;
				this->Left = this->left;
				this->Right = this->right;
			}
			~Three() {

			}
		};
		void treeprint(Three* tree)
		{
			if (tree != NULL) {      //Пока не встретится пустой узел

				treeprint(tree->left);  //Рекурсивная функция вывода левого поддерева
				zapis.push_back(tree->FIO);
				treeprint(tree->right); //Рекурсивная функция вывода правого поддерева

			}
		}
		Three* addNode(const string& x, Three* tree) {//создание новых узлов
			size_t ZnachSTR;
			if (tree->FIO.size() > x.size()) { ZnachSTR = tree->FIO.size(); }
			else { ZnachSTR = x.size(); }
			if (tree == nullptr) {
				tree = new Three;
				tree->FIO = x;
				tree->left = NULL;
				tree->right = NULL;
			}
			else {
				for (int i = 0; i < ZnachSTR; i++) {
					if (sizeof(tree->FIO[i]) == sizeof(x[i])) { continue; }
					else if (sizeof(tree->FIO[i]) < sizeof(x[i])) { tree->left = addNode(x, tree); }
					else { tree->right = addNode(x, tree); }
				}
			}
			return(tree);
		}
		void freeRAM(Three *tree) {//Освобождение памяти
			if (tree != nullptr) {
				freeRAM(tree->left);
				freeRAM(tree->right);
				delete &tree;
			}
		}
	private:
		Three* UaddNode = (Three*)0x0039F99C;
	public:
		template<typename T>
		SortirovkaThree(void) {
			T* treePrint = (T*)0x0039F99D;
			T* FreeRAM = (T*)0x0039F99E;
			treePrint = &this->treeprint;
			this->UaddNode = &this->addNode;
			FreeRAM = &this->freeRAM;
			delete treePrint;
			delete FreeRam;
		}
		~SortirovkaThree() {
			delete &this->UaddNode;
		}

	};
	class BinarySearch {
	public:
		template<typename T>
		BinarySearch() {
			T* search = (T*)0x0039F9A2;
			search = &this->Search;
			delete search;
		}
		inline string Search(const string& IscZnach,const vector<string>& PoiscMass) {
			size_t* RG = (size_t*)0x0039F9A3;
			size_t* LG = (size_t*)0x0039F9A4;
			size_t* M = (size_t*)0x0039F9A5;
			const unsigned int* SIZE = (const unsigned int*)0x0039F9A6;
			size_t rightGran = PoiscMass.size();
			size_t leftGran = 0;
			size_t Midlle = PoiscMass.size() / 2;
			RG = &rightGran;
			LG = &leftGran;
			M = &Midlle;
			const unsigned int SIZEFOR = 200;
			SIZE = &SIZEFOR;
			for (int i = 0; i < SIZEFOR; i++) {
				if (IscZnach == PoiscMass[i]) { return PoiscMass[i]; }
				for (int j = 0; j < SIZEFOR; j++) {
					if (sizeof(IscZnach[i]) == sizeof(PoiscMass[i][j])) { continue; }
					else if (sizeof(IscZnach[i]) > sizeof(PoiscMass[i][j])) {
						leftGran = Midlle;
						Midlle = (leftGran + rightGran) / 2;
					}
					else {
						rightGran = Midlle;
						Midlle = (rightGran - leftGran) / 2;
					}
				}
				if (IscZnach == PoiscMass[Midlle]) return PoiscMass[Midlle];
			}
			return PoiscMass[Midlle];
		}
	};
}