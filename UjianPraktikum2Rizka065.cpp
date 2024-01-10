#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	short deret[] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
	int panjangDeret = sizeof(deret) / sizeof(deret[0]);

	std::cout << "Deret sebelum dishorting : ";
    for (int i = 0; i < panjangDeret; ++i) {
        std::cout << deret[i] << " ";
    }

    std::sort(deret, deret + panjangDeret);

    std::cout << "\nDeret setelah di sorting: ";
    for (int i = 0; i < panjangDeret; ++i) {
        std::cout << deret[i] << " ";
    }


    float median;
    if (panjangDeret % 2 == 0) {
        median = (deret[panjangDeret / 2 - 1] + deret[panjangDeret / 2]) / 2.0;
    }
    else {
        median = deret[panjangDeret / 2];
    }

    std::cout << "\nNilai median: " << median << std::endl;

    return 0;
}