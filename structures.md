# C++ Structures
**Mari belajar struktur dalam c++**

Structure adalah kumpulan variable dengan tipe data berbeda dibawah dalam satu nama. Sama dengan [Class](), keduanya memegang kumpulan data dengan tipe data berbeda.

Contoh: Kumpulan biodata orang, mulai dari tempat tinggal, usia, profesi, keluarga, dll.

# Bagaimana cara membuat structure di C++
Gunakan keyword `struct` diikuti dengan nama structure(identifier).
Kemudian didalam curly braces, kita bisa menulis banyak member alias variable. Contoh:
```
    struct Person {
        char nama[50];
        int usia;
        float pendapatan;
    };

```

Ketika sebuah sructure dibuat, tidak ada memori yang [dialokasikan](https://kbbi.web.id/alokasi).

Menulis structure hanya template untuk membuat variable. Kita bisa membayangkan ini sebagai tipe data.

# Bagaimana cara membuat variable dari sebuah structure?
Ketika kita sudah membuat template struct diatas, maka sekarang kita hanya perlu menulis:
```
    Person Rizky;
```

Nah sekarang karena kita sudah membuat variable maka variable ini akan dialokasikan kedalam memori.

# Bagaimana cara mengakses member struct ?
Member dari structure bisa diakses menggunakan operator .(titik).
```
    Rizky.usia = 21;
```

Contoh:
```

    #include <iostream>
    using namespace std;

    struct Person
    {
        char nama[50];
        int usia;
        float pendapatan;
    };

    int main()
    {
        Person rizky;
        
        cout << "Masukkan nama lengkap: ";
        cin.get(p1.nama, 50);
        cout << "Masukkan usia: ";
        cin >> p1.usia;
        cout << "Masukkan pendapatan/gaji: ";
        cin >> p1.pendapatan;

        cout << "\nMenampilkan informasi." << endl;
        cout << "Nama: " << p1.nama << endl;
        cout <<"Usia: " << p1.usia << endl;
        cout << "Pendapatan/gaji: " << p1.pendapatan;

        return 0;
    }

```

Output

```
    Masukkan nama lengkap: Rizky Firman Syah
    Masukkan pendapatan/gaji: 1024.4

    Menampilkan informasi.
    Nama: Magdalena Dankova
    Usia: 27
    Pendapatan/gaji: 1024.4
```