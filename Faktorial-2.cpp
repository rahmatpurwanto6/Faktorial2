#include <iostream>
using namespace std;

long Faktorial (int a);
int main() {
	int b, hasil;
	cout <<"Masukan angka n! =";
	cin >> b;
	hasil = Faktorial (b);
	cout <<"Hasil Faktorial"<<b<<"="<<hasil<<endl;
	return(0);
	}
	long Faktorial (int a) {
	int c = 0, hasil = 1;
		if (a <= 1) {
		return(1);
		}
		else {
		for (c = 1; c <= a; c++) {
		hasil = hasil*c;
		}
		return(hasil);
		}
	}