#include <iostream>
#include <string>
using namespace std;

class mahsiswa{
private:
    int nim;
    string nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};

mahasiswa :: mahasiswa(){
	nim = 0;
	nama = "";
}

mahasiswa :: mahasiswa(int iNim){
	nim = iNim;
}

mahasiwa::mahasiswa(string iNama) {
	nama = iNim;
	nama = iNama;
}
void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << "Nama =" <<nama<<endl;
}

