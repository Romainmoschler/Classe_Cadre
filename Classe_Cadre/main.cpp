#include <stdio.h>
#include <iostream>
#include "C_Cadre.h"
using namespace std;

int main()
{
	C_Cadre cadre1;

	//check the programe do great
	cadre1.info();
	cadre1.perimetre();
	cadre1.IsCaree();

	cout << endl;

	cadre1.setLong(5);
	cadre1.info();
	cadre1.perimetre();
	cadre1.IsCaree();

	return 0;
}