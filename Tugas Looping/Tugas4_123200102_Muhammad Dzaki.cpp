#include <iostream>
using namespace std;

int main()
{

 
	int a,b,an,a1,pilih;
	char z;

 do {
	cout << "Silahkan Pilih Menu Dibawah: " << endl;
	cout << "1. Perkalian\n" << "2. Pangkat" << endl;
	cout << "Input Pilihan : "; cin >> pilih;

	switch(pilih) {
	case 1:
		cout << "Masukkan Nilai M: "; cin >> a;
		cout << "Masukkan Nilai N: "; cin >> b;
		cout << a;
		a1 = a;
		for(int i = 1; i < b; i++) {
			cout << " + " << a ; 
		} for(int i = 1; i < b; i++) {
			an = a1 + a;
			a1 = an;
		}
		cout << " = " << an << endl;
	 break;

	case 2:
		cout << "Masukkan Nilai M: "; cin >> a;
		cout << "Masukkan Nilai N: "; cin >> b;
		cout << a;
		a1 = 1;
		for(int i = 1; i < b; i++) {
			cout << " * " << a;
		} for(int i = 1; i <= b; i++) {
			a1 = a1 * a;
		} cout << " = " << a1 << endl;
	 break;

	default:
		cout << "Pilihan Tidak Tersedia!" << endl;
	 break;
	}

	cout << "Apakah anda ingin mencoba lagi ? (y/n)" << endl;
	cin >> z;

 } while (z == 'y');

	return 0;
}
