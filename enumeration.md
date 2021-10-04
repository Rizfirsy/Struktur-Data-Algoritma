# C++ Enumeration(Pencacahan)

Enumeration adalah tipe data user-defined yang terdiri dari intergral constant. Untuk menulis enumeration, gunakan keyword **enum**.
`enum musim {semi, panas, gugur, salju};`
Diatas, nama enumeration adalah `musim`.
Dan `semi`, `panas`, `gugur`, dan `salju` adalah jenis-jenis `musim`.
Secara default, `spring` adalah 0, `summer` adalah 1 dan seterusnya. Kita bisa mengubah default value dari element enum diatas ketika mendeklarasikan.

```
    enum musim {
        semi = 0,
        panas = 4,
        gugur = 8,
        salju = 12
    };
```

# Membuat tipe data Enum
Ketika kita membuat tipe data enum, hanya berbentuk blueprint(template) untuk variable.
Berikut adalah cara kita bisa membuat variabel dengan tipe data enum.

```
    enum boolean {false, true};

    //didalam function
    enum boolean check;
```

Diatas, terciptalah sebuah variable `check` dari tipe data `enum boolean`.

Berikut adalah cara lain untuk membuat variable `check` yang sama dengan sintax berbeda.

```
    enum boolean {
        false, true
    } check;
```

Contoh: Enumeration Type
```
    #include <iostream>
    using namespace std;

    enum week {Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Minggu};

    int main () {
        week today;
        today = Selasa;
        cout << "Hari ke-" << today + 1;
        return 0;
    }
```
Output:
`Hari ke-2`

Contoh: Mengubah nilai default dari enum
```
    #include <iostream>
    using namespace std;

    enum week {
        Senin = 2,
        Selasa = 3,
        Rabu = 4,
        Kamis = 5,
        Jumat = 6,
        Sabtu = 7,
        Minggu = 1
        };

    int main () {
        week today;
        today = Selasa;
        cout << "Hari ke-" << today;
        return 0;
    }

```
Output:
`Hari ke-3`

#
# MEngapa enum digunakan dalam pemrograman C++?
Sebuah variable enum hanya mengambil satu value dari banyaknya value yang mungkin bisa dia ambil. Contoh:
```
    #include <iostream>
    using namespace std;

    enum poker {
        wajik = 0,
        waru = 3,
        kriting = 10;
        hati = 4
    } kartu;


    int main() {
        kartu = waru;
        cout << "Ukuran dari variable enum ini adalah " << sizeof(card) <<  " byte";
        return 0;
    }


Output:
    `Size of enum variable 12 bytes.`

Ini karena ukuran integer adalah 4 bytes, dikalikan value dari `waru` yaitu 3, hasilnya 12.



#### Fun fact:
* Sebenarnya kita bisa membuat hal yang sama menggunakan c++ `structure`. Tapi menggunakan `enum` lebih efisien dan flexible.
* Integer constant adalah dipangkat 2.


> Kita bisa menyelesaikan apapun di c++ tanpa enum. Tapi enum akan membantu dan sangat mudah ditangani di beberapa situasi. Itulah perbedaan antara good programmers dengan great programmers.