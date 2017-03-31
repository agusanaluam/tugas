#include <iostream>
using namespace std;

int perbandingan(int a, int b);

int main(){
int nilai1, nilai2;
	cout << "Masukan Nilai A : ";
	cin >> nilai1;
	cout << "Masukan Nilai B : ";
	cin >> nilai2;
	cout << "Nilai Maksimum adalah : " << perbandingan (nilai1, nilai2);	
}

int perbandingan(int a, int b){
	return max(a,b);
}