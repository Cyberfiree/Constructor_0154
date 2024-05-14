#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	// Konstruktor default
	Mahasiswa() {
		nim = 0;
		nama = "";
	}

	// Konstruktor dengan parameter NIM
	Mahasiswa(int iNim) {
		nim = iNim;
	}

	// Deklarasi konstruktor dengan parameter string
	Mahasiswa(string);

	// Deklarasi konstruktor dengan parameter nama dan nim
	Mahasiswa(int iNim, string iNama);
	void cetak();      // Metode untuk mencetak detail mahasiswa
};

int main()
{
}