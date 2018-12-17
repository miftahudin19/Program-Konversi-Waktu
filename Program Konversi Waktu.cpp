#include <iostream>
using namespace std ;

int main ()
	{
		float waktu;
		char unit;
		
			cout <<"---Konversi Hari, Jam, Menit & Detik---"<<endl;
			cout <<"/n H. Hari /n J. Jam /n M. Menit /n D. Detik";
			cout <<"/nMasukan waktu yang ingin di konversikan kedalam bentuk * .detik,menit,jam,hari : ";
			cin >> waktu;
			cout <<"/nWaktu dalam berbagai bentuk : ";
			cin >> unit;
		
		if (unit == 'h' || unit == 'H')
		{
			cout <<"Hari = "<<waktu<<endl;
			cout <<"Jam = "<<waktu / 60<<endl;
			cout <<"Menit = "<<waktu / 3600<<endl;
			cout <<"Detik = "<<waktu / 86400<<endl;
		}
		
		else if (unit == 'j' || unit == 'J')
		{
			cout <<"Hari = "<<waktu / 24<<endl;
			cout <<"Jam = "<<waktu<<endl;
			cout <<"Menit = "<<waktu * 60<<endl;
			cout <<"Detik = "<<waktu * 3600<<endl;
		}
		
		else if (unit == 'm' || unit == 'M')
		{
			cout <<"Hari = "<<waktu / 1440<<endl;
			cout <<"Jam = "<<waktu / 60<<endl;
			cout <<"Menit = "<<waktu<<endl;
			cout <<"Detik = "<<waktu * 60<<endl;
		}
		
		else if (unit == 'd' || unit == 'D')
		{
			cout <<"Hari = "<<waktu / 86400<<endl;
			cout <<"Jam = "<<waktu / 3600<<endl;
			cout <<"Menit = "<<waktu / 60<<endl;
			cout <<"Detik = "<<waktu<<endl;
		}
	}
