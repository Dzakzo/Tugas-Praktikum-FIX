#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string user = "Dzaki"; 
	int pass = 222002;
	float rata_rata;
	int a,b,c,pilih;

	cout << "====================" << endl;
	cout << setw(15) << "Login Akun" << endl;
	cout << "====================" << endl;
	cout << "Username\t: "; cin >> user;
	cout << "Password\t: "; cin >> pass;	
	cin.ignore();

	if(user == "Dzaki" && pass == 222002) {
		cout << "====================" << endl;
		cout << "LOGIN BERHASIL" << endl;
		cout << "====================" << endl;
		cout << "Input nilai Mata Kuliah :\n";
		cout << "1. Algoritma dan Pemrograman" << endl;
		cout << "2. Kalkulus" << endl;
		cout << "Pilih: "; cin >> pilih;
		switch(pilih) {
			case 1: 
				cout << "Masukkan Nilai harian,UTS, dan UAS!" << endl;
				cout << "Nilai Harian\t: "; cin >> a;
				cout << "Nilai UTS\t: "; cin >> b;
				cout << "Nilai UAS\t: "; cin >> c;
					break;
			case 2:
				cout << "Masukkan Nilai harian,UTS, dan UAS!" << endl;
				cout << "Nilai Harian\t: "; cin >> a;
				cout << "Nilai UTS\t: "; cin >> b;
				cout << "Nilai UAS\t: "; cin >> c;
					break;
			}

        rata_rata=(a+b+c)/3;

        cout << "Nilai rata - rata\t= " << rata_rata << endl;
        	if (rata_rata >= 80) {
        		cout << "Anda Lulus" << endl;
        	} else {
        		cout << "Anda Tidak Lulus" << endl;
        	}


	} else if(user != "Dzaki" && pass == 222002) {
		cout <<"Username yang anda masukkan salah" << endl;
	} else if(user =="Dzaki" && pass != 222002) {
		cout <<"Password yang anda masukkan salah" << endl;
	} else {
		cout <<"Username dan Password yang anda masukkan salah" << endl;
		
	}



	return 0;

	
}
