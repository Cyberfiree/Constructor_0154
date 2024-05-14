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

// Implementasi konstruktor
angka::angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
}

// Implementasi destruktor
angka::~angka() {
    cout << endl;
    cetakData(); // Mencetak data array
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

// Implementasi metode untuk mencetak data array
void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) { // Loop melalui setiap elemen array
        cout << i << " = " << arr[i] << endl; // Mencetak elemen array
    }
}

// Implementasi metode untuk mengisi data ke dalam array
void angka::isiData() {
    for (int i = 1; i <= panjang; i++) { // Loop melalui setiap elemen array
        cout << i << " = "; cin >> arr[i]; // Meminta pengguna untuk mengisi elemen array
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3); // Membuat objek 'belajarcpp' dengan panjang array 3
    angka* ptrBelajarcpp = new angka(5); // Membuat objek dinamis 'ptrBelajarcpp' dengan panjang array 5
    delete ptrBelajarcpp; // Melepaskan memori objek dinamis 'ptrBelajarcpp'

    return 0;
}