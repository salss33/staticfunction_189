#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
public:
	static int nim;
	int id;
	string nama;

	void setID();
	voidprintALL();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
}