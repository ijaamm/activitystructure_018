#include <iostream>
using namespace std;
struct  mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;

};

int main()
{
	mahasiswa mhs;

	cout << "masukan NIM = ";
	cin >> mhs.NIM;
	cout << "masukan nama = ";
	cin >> mhs.nama;
	cout << "masukan alamat = ";
	cin >> mhs.alamat;
	cout << "masukan umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nnama = " << mhs.nama;
	cout << "\nalamat = " << mhs.alamat;
	cout << "\numur = " << mhs.umur;
}