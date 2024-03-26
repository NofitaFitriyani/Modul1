#include <iostream>
using namespace std;

void judulProgram_2311102001() {
    cout << "PROGRAM PENENTU HARI" << endl;
    cout << "--------------------" << endl;
}

int main ()
{
    judulProgram_2311102001();
    int hari; 

    cout << "Masukan angka 1-7 :";
    cin>>hari;

    switch (hari)
    {
        case 1 :
        cout << "Hari ke-1 yaitu Senin";
        break;
        case 2:
        cout << "Hari ke-2 yaitu Selasa";
        break;
        case 3:
        cout << "Hari ke-3 yaitu Rabu";
        break;
        case 4 :
        cout << "Hari ke-4 yaitu Kamis";
        break;
        case 5 :
        cout << "Hari ke-5 yaitu Jumat";
        break;
        case 6 :
        cout << "Hari ke-6 yaitu Sabtu";
        break;
        case 7 :
        cout << "Hari ke-7 yaitu Minggu" ;
        break;
        default:
        cout << "Error! operator is not correct";
    }
    return 0;
}