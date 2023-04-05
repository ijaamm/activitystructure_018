#include <iostream>
using namespace std;

struct DetailAlamat {
	char desa[20];
	char kota[20];
};

struct mahasiswa {
	char NIM[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

int main()
{
	mahasiswa mhs[2];
	for (int i = 0; i < 2; i++) {
		cout << "masukan NIM : ";
		cin.getline(mhs[i].NIM, 12);
		cout << "masukan nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "alamat" << endl;
		cout << "\tmasukan alamat desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tmasukan alamat kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukan umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 2; i++) {
		cout << "\nNIM : " << mhs[i].NIM;
		cout << "\nnama : " << mhs[i].nama;
		cout << "\nalamat desa : " << mhs[i].alamat.desa;
		cout << "\nalamat kota : " << mhs[i].alamat.kota;
		cout << "\numur : " << mhs[i].umur;
	}
}