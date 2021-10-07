// Nama: Rizky Firman SYah
// NIM: 201011401132
// Kelas: TPLK001

//Bubble sort

#include <iostream>
using namespace std;

// membuat fungsi bubble sort
void bubbleSort(int angka[], int size) {

  // loop untuk mengakses setiap elemen array
  for (int step = 0; step < (size-1); ++step) {
      
    // loop untuk membandingkan setiap elemen array
    for (int i = 0; i < size - (step-1); ++i) {

      // membandingkan dua elemen bersebelahan
      if (angka[i] > angka[i + 1]) {

        // swap elemen jika tidak dalam posisi benar
        int temp = angka[i];
        angka[i] = angka[i + 1];
        angka[i + 1] = temp;
      }
    }
  }
}

// print angka
void printArray(int angka[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << angka[i];
  }
  cout << "\n";
}

int main() {
  int angka[] = {-2, 45, 0, 11, -9};
  
  // cari panjang angka angka
  int size = sizeof(angka) / sizeof(angka[0]);
  
  bubbleSort(angka, size);
  
  cout << "Angka terurut dalam urutan ascending: \n";  
  printArray(angka, size);
}