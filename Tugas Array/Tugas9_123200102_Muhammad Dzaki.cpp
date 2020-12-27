#include <iostream>
using namespace std;

int main()
{
	int b,i;
	float rata2,jumlah;

	cout << "Masukkan banyak angka : "; cin >> b;
	int angka[b];
	for(i = 0; i < b; i++) {
			cout << "Angka ke-" << i + 1 << " : ";
			cin >> angka[i];
		}
	cout << "\n\n_______HASIL_______" << endl;

	//Deret Bilangan 
	cout << "Deret\t\t: ";
	for(i = 0; i < b; i++) {
			cout << angka[i] << " ";
		}

	//Maksimum
	int max = angka[0];
	for(i = 1; i < b; i++) {
			if (angka[i] > max) {
					max = angka[i];
			}
	}
	cout << "\nMaksimum\t: " << max << endl;

	//Minimum
	int min = angka[0];
	for(i = 1; i < b; i++) {
		if (angka[i] < min) {
			min = angka[i];
		}
	}
	cout << "Minimum\t\t: " << min << endl;

	//rata-rata
	for(i = 0; i < b; i++) {
			jumlah += angka[i];
		}
	rata2 = jumlah/b;
	cout << "Rata-rata\t: " << rata2 << endl;

	//Selisih max
	int selisih;
	int max1 = -99999;
	cout << "selisih maximum\t: ";
	for(i = 0; i < b -1; i++) {
		selisih = angka[i] - angka [i+1];
		if(selisih < 0) {
			selisih * (-1);
		}
		if(selisih > max1) {
			max1 = selisih;
		}

	} cout << max1 << endl;


	cin.get();
	return 0;
}
