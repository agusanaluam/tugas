#include <iostream>
using namespace std;

// deklarasi fungsi
bool iswithinRange(float nilai, int max, int min);
void prosesCetak();

//deklarasi variable
float nilai_ip, total_ip;
bool valid;
int jml_mahasiswa, jml_lulus, jml_tidaklulus;

int main () {
	do {
		cout << "Masukan Nilai IP : ";
		cin >> nilai_ip;
		valid = iswithinRange(nilai_ip,4,0);
		if (valid){
			if (nilai_ip >= 2.75){
				jml_lulus++;
			} else {
				jml_tidaklulus++;
			}
			total_ip = total_ip + nilai_ip;
			jml_mahasiswa++;
		} else {
			cout << "Tidak Ada Data" << endl;		
		}
	} while (nilai_ip != -999 );
	prosesCetak();
}

bool iswithinRange(float nilai, int max, int min){
	if (nilai >= max || nilai <= 0 ){
		return false;
	}
	return true;
}

void prosesCetak(){
	cout << "Banyaknya Mahasiswa : " << jml_mahasiswa << endl;
	cout << "Banyaknya Mahasiswa Lulus : " << jml_lulus << endl;
	cout << "Banyaknya Mahasiswa Tidak Lulus : " << jml_tidaklulus << endl;
	cout << "Rata - rata nilai IP : " << (total_ip / jml_mahasiswa) << endl;
}