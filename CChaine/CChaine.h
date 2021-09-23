#include <exception>
#include <iostream>

using namespace std;

#ifndef __CChaine_h__
#define __CChaine_h__

class CChaine;

class CChaine
{
	private: char* m_strCChaine;
		   int m_uiSize;

	public: CChaine(const char*);
		  CChaine(const CChaine &);
		  CChaine();
		  ~CChaine();
		  int getLen();
		  void show();
		  void upper();
		  //void operator=(const CChaine&);
		  const CChaine& operator=(const CChaine&);
};

#endif
