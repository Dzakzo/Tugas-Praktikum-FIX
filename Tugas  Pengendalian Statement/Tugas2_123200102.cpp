#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int ayah,ibu,anak1,anak2,anak,remaja,dewasa,total;
	int tagihan1,tagihan2,tagihan3,tagihan4;

	cout << "Umur Ayah\t: ";
	cin >> ayah;
	cout << "Umur Ibu\t: ";
	cin >> ibu;
	cout << "Umur Anak 1\t: ";
	cin >> anak1;
	cout << "Umur Anak 2\t: ";
	cin >> anak2;

	anak = 15000;
	remaja = 20000;
	dewasa = 30000;

	if (ayah >= 20) {
		ayah = dewasa;
		tagihan1 = dewasa;
	}	else {
			ayah = remaja;
			tagihan1 = remaja;
	}

	if (ibu >= 20) {
		ibu = dewasa;
		tagihan2 = dewasa;
	}	else {
			ibu = remaja;
			tagihan2 = remaja;
	}

	if (anak1 <= 12) {
		anak1 = anak;
		tagihan3 = anak;
	}	else if (anak1 > 12 && anak1 < 20) {
			anak1 = remaja;
			tagihan3 = remaja;
	}	else if (anak1 >= 20) {
			anak1 = dewasa;
			tagihan3 = dewasa;
	}

	if (anak2 <= 12) {
		anak2 = anak;
		tagihan4 = anak;
	}	else if (anak2 > 12 && anak2 < 20) {
			anak2 = remaja;
			tagihan4 = remaja;
	}	else if (anak1 >= 20) {
			anak2 = dewasa;
			tagihan4 = dewasa;
	}
	

	
	total = 30*(tagihan1 + tagihan2 + tagihan3 + tagihan4);

	cout << "jumlah tagihan per bulan = Rp " << total << endl;
	return 0;
}
