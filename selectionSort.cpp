// Nama: Rizky Firman SYah
// NIM: 201011401132
// Kelas: TPLK001

//selection sort

#include <iostream>
using namespace std;

// fungsi yang akan swap dua elemen 
void swap(int *a, int *b) {
  int posisiSementara = *a;
  *a = *b;
  *b = posisiSementara;
}

// fungsi untuk print
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int terkecil = step;
    for (int i = step + 1; i < size; i++) {

      // mencari elemen
      if (array[i] < array[terkecil])
        terkecil = i;
    }

    // memindahkan nilai terkecil ke posisi yang sesuai
    swap(&array[terkecil], &array[step]);
  }
}
int main() {
  int angka[] = {20, 12, 10, 15, 2};
  int size = sizeof(angka) / sizeof(angka[0]);
  selectionSort(angka, size);
  cout << "Angka terurut dalam urutan ascending: \n";
  printArray(angka, size);
}