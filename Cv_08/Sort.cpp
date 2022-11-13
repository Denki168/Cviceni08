#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


#include "Clovek.h"

using namespace std;

int main()
{
	ifstream Nacteni_souboru("Vypis.txt");
	
	Clovek osoba;
	vector<Clovek> osoby;
	
	while(Nacteni_souboru >> osoba)
	{
		cout << osoba ;
		osoby.push_back(osoba);
		
	}
	
	sort(osoby.begin(), osoby.end());
	
	
	std::ofstream vystupni_soubor("Zerazeny_soubor.txt");
	
	for(int i=0; i<osoby.size(); i++)
	{
		vystupni_soubor << osoby[i];
	}
	
    	
    	
	

	return 0;

}
