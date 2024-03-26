#include <iostream>
#include <string>
using namespace std;
//2311102001

struct Buku {
    string judul;
    string penulis;
    int tahunTerbit;
};

void displayInfo(const Buku& buku) {
    cout << "Judul: " << buku.judul << endl;
    cout << "Penulis: " << buku.penulis << endl;
    cout << "Tahun Terbit: " << buku.tahunTerbit << endl;
}

int main() {
    Buku buku1 = {"Harry Potter", "J.K. Rowling", 1997};

    cout << "Informasi Buku\n";
    cout << "**************\n";

    displayInfo(buku1);

    return 0;
}
