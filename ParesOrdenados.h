#pragma once
#include "Divisores.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

class ParesOrdenados {
private:
	CDivisores* div = new CDivisores();
	vector<int> a;
	vector<int> b;
public:
	ParesOrdenados() {
		CDivisores* div = new CDivisores();
		a.clear();
		b.clear();
	};
	~ParesOrdenados() {};
	void SetDivisores(CDivisores* d) {
		div = d;
		int j_div = 0;
		int i_div = 0;

		for (int i = 0; i < div->getSize(); i++) {
			for (int j = 0; j < div->getSize(); j++) {
				i_div = div->getn(i);
				j_div = div->getn(j);
				if (j_div % i_div == 0) {
					a.push_back(i_div);
					b.push_back(j_div);
				}
			}
		}
	};
	int getA(int i) { return a.at(i); }
	int getB(int i) { return b.at(i); }
	int getSizeA() { return a.size(); }
	int getSizeB() { return b.size(); }
};