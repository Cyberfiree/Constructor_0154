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
int main()
{
}