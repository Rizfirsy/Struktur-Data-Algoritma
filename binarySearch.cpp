// Nama: Rizky Firman SYah
// NIM: 201011401132
// Kelas: TPLK001

//Binary search
// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int angka[], int x, int arrayKiri, int arrayKanan) {
  
	// perulangan hingga arrayKiri and arrayKanan bertemu
  while (arrayKiri <= arrayKanan) {
    int tengah = arrayKiri + (arrayKanan - arrayKiri) / 2;

    if (angka[tengah] == x){
        return tengah;
    }
      

   (angka[tengah] < x) ?arrayKiri = tengah + 1 :arrayKanan = tengah - 1; ;
      
  }

  return -1;
}

int main() {
  int angka[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int pembanding = sizeof(angka) / sizeof(angka[0]);
  int hasil = binarySearch(angka, x, 0, pembanding - 1);

    //jika tidak ditemukan
    //else, jika ditemukan
    (hasil == -1) ? cout << "Element " << x << " tidak ada didalam array."
    :  cout << "Element " << x << " ada didalam array.";

    return 0;
}