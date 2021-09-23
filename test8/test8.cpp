// test8.cpp 

#include <iostream>
#include "U:\2eme\CChaine\CChaine\CChaine.h"
using namespace std;

void main()
{
	CChaine mot = "Programme de test";
	CChaine mot2 = "la suite du message …";
	CChaine mot3 = "la suite de la suite du message …";
	CChaine mot4;
	mot4 = mot = mot2 = mot3;

	mot4.show(); mot.show(); mot2.show();
	cout << "longueurchaine:" << mot4.getLen() << endl;
}


