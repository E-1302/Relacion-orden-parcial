#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

class CDivisores
{
private:
	vector<int> n;

public:
	CDivisores();
	~CDivisores();

	double getn(short i);

	void setn(int n);

	int getSize() { return n.size(); }
};

