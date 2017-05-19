#include <iostream>
using namespace std;

int main(){
	string nama_siswa[10];
	string menu,searchName;
	bool hasil;
	
	for (int x = 1; x < 10; x++){
		cout << "Masukan Nama Siswa ke "<< x << " : ";
		cin >> nama_siswa[x];
	}
	cout << "Nama sudah dimasukan, Ketik 'S' untuk mencari.." << endl;
	cin >> menu;
	if (menu == "S"){
		cout << "Masukan Nama Yanga akan dicari : ";
		cin >> searchName;
		for (int i = 1; i < 10; i++){
			if (nama_siswa[i] == searchName){
				hasil = true;
				break;
			} else {
				hasil = false;
			}
		}
		if (hasil == true){
			cout << "Data Ditemukan";
		} else {
			cout << "Data Siswa Tidak Ditemukan";
		}
	}
	return 0;
	
}