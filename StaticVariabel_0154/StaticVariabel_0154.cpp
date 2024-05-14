#include <iostream>
using namespace std;

class Mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();


	// Konstruktor yang menerima nama dan menginisialisasi objek
	Mahasiswa(string pnama) :nama(pnama) {
		setID();
	}
};

int Mahasiswa::nim = 154;

// Metode untuk menetapkan ID
void Mahasiswa::setID() {
	id = ++nim;
}

// Metode untuk mencetak detail
void Mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}
int main()
{
}