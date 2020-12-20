#include <iostream>
#include <iomanip>
using namespace std;

float luas(int jari1) {
	float hasil1;
	hasil1 = 3.14*jari1*jari1;
	return hasil1;
}

float keliling(int jari2) {
	float hasil2;
	hasil2 = 2*3.14*jari2;
	return hasil2;
}

float volume(int jari3, int tinggi) {
	float hasil3;
	hasil3 = 3.14*jari3*jari3*tinggi;
	return hasil3;
}

void tampilkan(float jari1) {
	cout << "Luas Lingkaran adalah " << jari1 << endl;
}

int main()
{	
	int pilih,jari1,jari2,jari3,tinggi;
	float hasil1,hasil2,hasil3;
	char ulang;
	cout << setprecision(5) << endl;

do{	cout << "HITUNG LINGKARAN ==========" << endl;
	cout << "1. Luas Lingkaran" << endl;
	cout << "2. Keliling Lingkaran" << endl;
	cout << "3. Volume tabung" << endl;
	cout << "Pilih : "; cin >> pilih;

	switch(pilih) {
		case 1:
			cout << "Jari - jari = "; cin >> jari1;
			hasil1 = luas(jari1);
			tampilkan(hasil1);
				break;
		case 2:
			cout << "Jari - jari = "; cin >> jari2;
			hasil2 = keliling(jari2);
			cout << "Keliling lingkaran adalah " << hasil2 << endl;
				break;
		case 3:
			cout << "Jari - jari\t= "; cin >> jari3;
			cout << "Tinggi\t= "; cin >> tinggi;
			hasil3 = volume(jari3,tinggi);
			cout << "Volume tabung adalah " << hasil3 << endl;
				break;
	}
	cout << "Ulangi Program? (y/n) "; cin >> ulang;
}while(ulang == 'y');

	cin.get();
	return 0;
}
