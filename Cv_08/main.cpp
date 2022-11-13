#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

#include "Clovek.h"

 int main ()
{

	int nove_jmeno = 1;
	std::ofstream vystupni_soubor("Vypis.txt");
	
	//std::vector<Clovek> osoby; 

	while( nove_jmeno == 1)
	{
	
    		std::cout << "Jmeno: ";
    	std::string jmeno;
    	std::cin >> jmeno;

    	std::cout << "Prijmeni: ";
    	std::string prijmeni;
    	std::cin >> prijmeni;

    	std:: cout << "Jmeno a prijmeni: " << jmeno << " "<< prijmeni << "\n";

    	std::cout << "Vek: ";
    	int         vek;
    	std::cin >> vek;

    		if (vek < 18)
    		{	
    	    		std::cout << "Nesplnen minimalni vekovy limit ( 18 let )\n";
    		}
    		else if (vek > 60)
    		{
    	    		std::cout << "Nesplnen maximalni vekovy limit ( 60 let )\n";
    		}
    		else
    		{
    	    		std::cout << "Vek je " << vek << " let\n";
    		}

    	std::cout << "Vyska: \n";
    	double      vyska;
    	std::cin >>  vyska;

 	   	if ( vyska < 100 )
    		{
    		    std::cout << "Moc nizky\n";
    		}
    		else if ( vyska> 220 )
    		{
    		    std::cout << "Moc vysoky\n";
    		}
    		else
    		{
    		    std::cout << "Vyska je " << vyska << "\n";
    		}

    	std::cout << "Zakladni skola  [1]\n";
    	std::cout << "Stredni skola   [2]\n";
    	std::cout << "Vysoka skola    [3]\n";

    	std::cout << "Vzdelani: ";
    	int     vzdelani;
    	std::string skola;
    	std::cin >> vzdelani;

    		if ( vzdelani == 1 )
    		{
    			skola = "Zakladna_skola";
    		    std::cout << "Vzdelani je" << skola << "\n";
    		    
    		}
    		else if ( vzdelani == 2 )
    		{
    			skola = "Stredna_skola";
    		    std::cout << "Vzdelani je" << skola << "\n";
    		}
    		else if ( vzdelani == 3 )
    		{
    			skola = "Vysoka_skola";
    		    std::cout << "Vzdelani je" << skola << "\n";
    		}
    		else
    		{
    		    std::cout << "Nezname vzdelani\n";
    		}
    		
    		
	std::cout << "Zadat nove jmeno 	[1]\n";
    	
    	std::cin >> nove_jmeno;
    	
    	Clovek osoba(prijmeni, jmeno, vek, vyska, skola);
    	//osoby.push_back(osoba);
    	//std::ofstream vystupni_soubor("Vypis.txt");
    	vystupni_soubor << osoba ;
    	
    	
	}
	
	
	return 0;
}

