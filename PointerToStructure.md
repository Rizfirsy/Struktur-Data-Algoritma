# C++ Pointer to Structure

Sebuah variable pointer bisa dibuat tidak hanya untuk tipe data asli seperti (int, string, float, bool, dll) tapi mereka juga bisa dibuat untuk tipe data struct which is dibuat oleh user.

Begini cara membuat pointer untuk structure:
```
    #include <iostream>
    using namespace std;

    struct temp {
        int i;
        float f;
    };

    int main() {
        temp *ptr;
        return 0;
    }

```
Program diatas membuat sebuah variable pinter `ptr` dari tipe data `temp`.

> ## Notes:
* Ketika kita menggunakan pointers, maka lebih disarankan untuk mengakses struct menggunakan operator ->, karena ` . ` memiliki [precedence](https://translate.google.com/?sl=auto&tl=id&text=precedence&op=translate) lebih tinggi daripada `*`.

* Jika `*` dan `.` digunakan bersama dalam satu kode seperti ini ` (*ptr).structMember maka akan lebih mudah error.

```
    ptr -> structVariable sama dengan (*ptr).structMember
```
