#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID(); // Metode untuk menetapkan ID
	void printAll(); // Metode untuk mencetak detail

	static void setNim(int pNim) { nim = pNim; /*Definisi Function*/ } // Fungsi anggota statis untuk mengatur nim
	static int getNim() { return nim; /*Definisi Function*/ }  // Fungsi anggota statis untuk mendapatkan nilai nim

	// Konstruktor yang menerima nama dan menginisialisasi objek
	Mahasiswa(string pnama) :nama(pnama) { setID(); }
};
int main() {
}

//static number function
//get nim mendapatkan nilai terakhir