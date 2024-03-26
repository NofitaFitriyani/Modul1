#include <iostream>
#include <map>
//2311102001
using namespace std;

int main() {
    map<string, int> skincareBrands;

    skincareBrands["Wardah"] = 10;
    skincareBrands["Emina"] = 5;
    skincareBrands["Scarlett"] = 8;

    cout << "Isi map (Skincare Brands):\n";
    for (auto it = skincareBrands.begin(); it != skincareBrands.end(); ++it) {
        cout << it->first << " => " << it->second << "\n";
    }

    return 0;
}

