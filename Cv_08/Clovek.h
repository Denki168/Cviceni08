#ifndef CLOVEK_H
#define CLOVEK_H

using namespace std;

class Clovek
{
    public:
    
	Clovek() = default;
	
	Clovek(string _prijmeni, string _jmeno, int _vek, double _vyska,string _vzdelani)
	{
		jmeno = _jmeno;
		prijmeni = _prijmeni;
		vek = _vek;
		vyska = _vyska;
		vzdelani = _vzdelani;
		
	}
	
	friend ostream & operator << (ostream &out, const Clovek & clovek) 
	{
		out << clovek.prijmeni << " "<< clovek.jmeno << " "<< clovek.vek << " "<< clovek.vyska <<" "<< clovek.vzdelani << "\n";
		
		return out;
	}
	
	friend istream & operator >> (istream &in, Clovek & clovek)
	{
		in >> clovek.prijmeni >> clovek.jmeno >> clovek.vek >> clovek.vyska >> clovek.vzdelani;
		
		return in;
	
	}
	
	bool operator < (const Clovek &person1) 
	{
		return prijmeni < person1.prijmeni;
	}
	
	
        
    protected:

        string jmeno;
        string prijmeni;
        int vek;
        double vyska;
        string vzdelani;
                
};

#endif // CLOVEK_H
