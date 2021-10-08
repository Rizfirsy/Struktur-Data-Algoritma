
# Big-O notation
Big-O notation/Bachmann-Landau notation/notasi asimtotik adalah notasi matematika yang digunakan untuk menyatakan kefektifan sebuah algoritma..

> Big O Notation digunakan untuk mengukur tingkat kompleksitas suatu algoritma.

Dengan begitu maka kita diberi tahu kasus terburuk dari waktu berjalan sebuah algoritma.

Big-O Notation adalah cara untuk mengkonversi keseluruhan langkah-langkah suatu algoritma kedalam bentuk aljabar, yaitu dengan mengabaikan konstanta yang lebih kecil dan koefisien yang tidak berdampak besar terhadap keseluruhan kompleksitas permasalahan yang diselesaikan oleh algoritma tersebut.

> Big-O notation ditulis dalam bentuk O(n) dimana:
> O = Order of Magnitude
> n = mewakili apa yang kita bandingkan dengan tugas complexity.

![Big-O image](/images/big-O.png)

```
    0(g(n)) = {
        f(n): ada konstanta positif c dan n0 sehingga 0 <= f(n) <= cg(n) untuk semua n >=n0
    }
```
Ekspresi kode diatas bisa dijelaskan sebagai function `f(n)` milik himpunan `0(g(n))` jika disana ada konstanta positif `c` sehingga terletak diantara `0` dan `cg(n)`, untuk `n` yang cukup besar.

Untuk setiap nilai `n`, waktu berjalan dari suatu algoritma tidak melewati waktu yang disediakan oleh `0(g(n))`.

Karena big-O memberikan kasus terburuk dari suatu waktu algoritma, sehingga big-O notation biasa digunakan untuk menganalisa suatu algoritma.

> Kita selalu tertarik pada skenario terburuk😊


Selanjutnya, baca -> [Constant Complexity: O(1)](#ConstantComplexity.md)
