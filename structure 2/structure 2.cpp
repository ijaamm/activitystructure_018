#include <iostream>
using namespace std;

struct  DetailAlamat
{
	string desa;
	string kota;
};

struct mahasiswa
{
	string NIM;
	string nama;
	DetailAlamat alamat;
	int umur;

};

int main()
{
	mahasiswa mhs;
	cout << "masukan NIM : ";
	cin >> mhs.NIM;
	cout << "masukan nama : ";
	cin >> mhs.nama;
	cout << "alamat" << endl;
	cout << "\tmasukan alamat desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tmasukan alamat kota : ";
	cin >> mhs.alamat.kota;
	cout << "masukan umur : ";
	cin >> mhs.umur;

	cout << "\nNIM : " << mhs.NIM;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat desa : " << mhs.alamat.desa;
	cout << "\nalamat kota : " << mhs.alamat.kota;
	cout << "\numur : " << mhs.umur;
}