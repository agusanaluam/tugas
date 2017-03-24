#include <iostream>
using namespace std;

void proses_baca();
void proses_tukar();
void proses_tampil();

int a,b,temp;

int main(){
	proses_baca();
	proses_tukar();
	proses_tampil();
	return 0;
}

void proses_baca(){
	cout << "Masukan nilai A : ";
	cin >> a;
	
	cout << "Masukan nilai B : ";
	cin >> b;
}

void proses_tukar(){
	temp = b;
	b = a;
	a = temp;
}

void proses_tampil(){
	cout << "===============================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;
}