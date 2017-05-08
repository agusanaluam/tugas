#include <iostream>
using namespace std;

int main (){
	int M[3][3], M1[3][3], M2[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout <<"masukkan data Matriks 1 baris ke [ " <<i<< " ] kolom ke [ " <<j<< " ] : ";
			cin >> M1[i][j];
			cout << "masukkan data Matriks 2 baris ke [ " <<i<< " ] kolom ke [ " <<j<< " ] : ";
			cin >> M2[i][j];
      M[i][j] = M1[i][j] + M2[i][j];
    }
  }
	for (int i = 0; i<3; i++){
		cout << "============"<< endl;
		for ( int j = 0; j < 3; j++){
			cout << M[i][j] << " | " ;
		}
		cout << endl;
	}
	cout << "============"<< endl;
	return 0;
}
