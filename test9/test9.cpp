// test9.cpp 


#include <iostream>
#include "U:\2eme\CChaine\CChaine\CChaine.h"
using namespace std;

void main()
{
	CChaine ligne1 = "Message 1";
	const CChaine ligne2 = ligne1;
	ligne1 = ligne1; ligne1.show(); ligne2.show();
	cout << "longueurchaine:" << ligne2.getLen() << endl;
}
