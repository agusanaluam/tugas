#include <iostream>
using namespace std;

int tambahkan(int a, int b);

int main(){
	cout << "Hasil : " << tambahkan(5,6) << endl;
	return 0;
}

int tambahkan(int a, int b){
	return a+b;
}