#include <iostream>
using namespace std;

void proses_baca();
void proses_tampil();
int proses_tambah();
int proses_kurang();

int a,b;

int main(){
	proses_baca();
	proses_tampil();
	return 0;
}

void proses_baca(){
	cout << "Masukan nilai A : ";
	cin >> a;
	
	cout << "Masukan nilai B : ";
	cin >> b;
}

int proses_tambah(){
	return 0;
}

int proses_kurang(){
	int hasil;
	hasil = a-b;
	return hasil;
}

void proses_tampil(){
	cout << "===============================" << endl;
	cout << "Hasil Tambah : " << proses_tambah() << endl;
	cout << "Hasil Kurang : " << proses_kurang();
}