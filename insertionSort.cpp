// Nama: Rizky Firman SYah
// NIM: 201011401132
// Kelas: TPLK001

//Insert sort

#include <iostream>
using namespace std;

// Fungsi print array
void printArray(int angka[], int size) {
  for (int i = 0; i < size; i++) {
    cout << angka[i] << " ";
  }
  cout << endl;
}

void insertionSort(int angka[], int size) {
  for (int step = 1; step < size; step++) {
    int kunci = angka[step];
    int j = step - 1;


    //membandingkan kunci dengan setiap elemen dikiri sampai bertemu elemen yang lebih kecil
    while (kunci < angka[j] && j >= 0) {
      angka[j + 1] = angka[j];
      --j;
    }
    angka[j + 1] = kunci;
  }
}


int main() {
  int angka[] = {9, 5, 1, 4, 3};
  int size = sizeof(angka) / sizeof(angka[0]);
  insertionSort(angka, size);
  cout << "Angka terurut dalam urutan ascending:\n";
  printArray(angka, size);
}