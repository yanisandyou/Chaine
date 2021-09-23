
// test2.cpp

#include <iostream>
#include "U:\2eme\CChaine\CChaine\CChaine.h"
using namespace std;

int main()
{
	//1: on recopie "tout ce qui fonctionne"
	//2: allocation mémoire
	//3: recopie la chaine de test

	/*TEST 1*/
	 
	/*CChaine mot = "Programme de test";
	mot.show();
	mot.upper();
	mot.show();
	cout << "longueur chaine:" << mot.getLen() << endl;*/


	//TEST 2
	CChaine chaine1 = "Chaine1\n";
	CChaine chaine2 = chaine1;
	chaine1.show(); 
	chaine2.show();
	chaine2.upper();
	chaine2.show(); 
	chaine1.show();
}
