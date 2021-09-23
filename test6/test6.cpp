// test6.cpp 

#include <iostream>
#include "U:\2eme\CChaine\CChaine\CChaine.h"
using namespace std;

void main()
{
	CChaine chaine1 = "Exemple de programme... !";
	CChaine chaine3;
	chaine3 = chaine1; 
	chaine3.upper();
	cout << "Chaine1 = "; chaine1.show(); cout << endl;
	cout << "Chaine3 = "; chaine3.show(); cout << endl;
}