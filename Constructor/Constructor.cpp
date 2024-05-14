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

// Definisi konstruktor dengan parameter nama
Mahasiswa::Mahasiswa(string iNama) {
	nim = 0;
	nama = iNama;
}

// Definisi konstruktor dengan parameter NIM dan nama
Mahasiswa::Mahasiswa(int iNim, string iNama) {
	nim = iNim;
	nama = iNama;
}

// Definisi metode cetak
void Mahasiswa::cetak() {
	cout << endl << "Nim = " << nim << endl;
	cout << "Nama = " << nama << endl;
}

int main()
{
}