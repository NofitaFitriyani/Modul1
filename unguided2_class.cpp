#include <iostream>
#include <string>
using namespace std;
//2311102001
class Buku {
private:
    string judul;
    string penulis;
    int tahunTerbit;

public:
    Buku(string j, string p, int t) : judul(j), penulis(p), tahunTerbit(t) {}

    void displayInfo() {
        cout << "Judul: " << judul << endl;
        cout << "Penulis: " << penulis << endl;
        cout << "Tahun Terbit: " << tahunTerbit << endl;
    }
};

int main() {
    Buku buku1("Harry Potter", "J.K. Rowling", 1997);

    cout << "Informasi Buku\n";
    cout << "**************\n";

    buku1.displayInfo();
    return 0;
}
