#include <iostream>
using namespace std;

class angka {
private:
    int* arr; // Pointer untuk array dinamis
    int panjang; // Panjang array
public:
    angka(int); // Konstruktor
    ~angka(); // Destruktor
    void cetakData(); // Metode untuk mencetak data array
    void isiData(); // Metode untuk mengisi data ke dalam array
};

int main()
{
}