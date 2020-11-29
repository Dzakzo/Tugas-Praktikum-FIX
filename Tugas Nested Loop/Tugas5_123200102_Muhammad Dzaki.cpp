#include <iostream>
using namespace std;

int main()
{
 	int pilih,tinggi;

	cout << "=====GAMBAR BANGUN DATAR=====" << endl;
	cout << "1. Kotak Bolong" << endl;
	cout << "2. Segitiga" << endl;
	cout << "Pilihan : "; cin >> pilih;
	cout << endl;

	switch(pilih) {
		case 1:
			int panjang,lebar;
			cout << "Panjang\t: "; cin >> panjang;
			cout << "lebar\t: "; cin >> lebar;
			for (int i = 1; i <= panjang; i++) {
				for (int k = 1; k <= lebar; k++) {
					if(i == 1 || i == panjang || k == 1 || k == lebar) {
						cout << "* ";
					}else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 2:
			cout << "Tinggi : "; cin >> tinggi;
			for (int k = 1; k<= tinggi; k++) {
				int z = 1;
				int g = k;
				for (int h = 1; h <= k; h++) {
					cout << g << " ";
					g = g + (tinggi - z);
					z++;
				}
			cout << "\n";
			}
			break;
	}

	cin.get();
	return 0;
}
