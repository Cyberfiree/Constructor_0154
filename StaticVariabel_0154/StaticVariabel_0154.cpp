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
	// Membuat objek Mahasiswa
	Mahasiswa mhs1("Lia Kurnia");
	Mahasiswa mhs2("Asroni");

	// Mengubah nilai nim statis secara langsung
	mhs2.nim = 20;

	// Membuat lebih banyak objek Mahasiswa
	Mahasiswa mhs3("Andi Kurniawan");
	Mahasiswa mhs4("Joko Purbo");

	// Mencetak detail dari setiap objek
	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	system("pause");

	return 0;
}