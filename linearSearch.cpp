// Nama: Rizky Firman SYah
// NIM: 201011401132
// Kelas: TPLK001

//Linear search

#include <iostream>
using namespace std;


//fungsi mencari nilai x dengan pembanding
int cari(int angka[], int pembanding, int x) {
    int i;
    //pengulangan for loop
    for (i = 0; i < pembanding; i++) {

        //jika angka index ke-i sama dengan x maka kembalikan nilai i tersebut.
        (angka[i] == x) ?  i :  -1;
    }
}


int main () {
    //data kita
    int angka[] = {12, 45, 6, 76, 332, 90};
    int x = 6; //yang dicari
    //pembanding
    int pembanding = sizeof(angka) / sizeof(angka[0]);

    //memanggil fungsi cari
    int hasil = cari(angka, pembanding, x);



    //jika tidak ditemukan
    //else, jika ditemukan
    (hasil == -1) ? cout << "Element " << x << " tidak ada didalam array."
    :  cout << "Element " << x << " ada didalam array.";


    return 0;
}
