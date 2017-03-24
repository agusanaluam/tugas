#include <iostream>
using namespace std;



int main(){
	int a,b,temp;
	cout << "Masukan nilai A : ";
	cin >> a;
	
	cout << "Masukan nilai B : ";
	cin >> b;

	temp = b;
	b = a;
	a = temp;

	cout << "===============================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;

	return 0;
}

