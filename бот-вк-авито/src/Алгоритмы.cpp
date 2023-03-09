#include<string>
#include<vector>

#pragma once

using namespace std;

namespace Structures {
	vector<string>zapis;
	class SortirovkaThree {
	public:
		struct Three {
			string FIO;//ФИО пользователя
			struct Three* left;//сортировка по левому краю
			struct Three* right;//сортировка по правому краю
		};
		void treeprint(Three* tree)
		{
			if (tree != NULL) {      //Пока не встретится пустой узел

				treeprint(tree->left);  //Рекурсивная функция вывода левого поддерева
				zapis.push_back(tree->FIO);
				treeprint(tree->right); //Рекурсивная функция вывода правого поддерева

			}
		}
		struct Three* addNode(const string& x, Three* tree) {//создание новых узлов
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
				delete tree;
			}
		}
	};
	class BinarySearch {
	public:
		inline string Search(const string& IscZnach, vector<string> PoiscMass) {
			size_t rightGran = PoiscMass.size();
			size_t leftGran = 0;
			size_t Midlle = PoiscMass.size() / 2;
			const unsigned int SIZEFOR = 200;
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