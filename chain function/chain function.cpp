#include <iostream>
using namespace std;
class buku
{
    string judul; // Variabel anggota privat untuk menyimpan judul buku
public:
    // Metode untuk menetapkan judul buku dan mengembalikan objek Buku
    buku setJudul(string judul)
    {
        this->judul = judul; // Menggunakan 'this' untuk mengakses anggota kelas
        return *this; // Mengembalikan referensi ke objek
    }

    // Metode untuk mendapatkan judul buku
    string getJudul()
    {
        return this->judul; // Mengembalikan variabel anggota 'judul'
    }
}bukunya;

int main()
{
}