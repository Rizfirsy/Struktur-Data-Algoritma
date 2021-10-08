
# Constant Complexity(Kerumitan yang konstan)
Run time dari tugas-tugas konstan tidak akan berubah, tidak peduli nilai apa yang diinputkan.

``` 
    const printElement = (array, index) => console.log(`array: ${index} ${array[index]}`)
```

TIdak peduli nilai elemen yang mana kita minta untuk di print, hanya satu step yang diperlukan.
Jadi bisa dikatakan function `printElement` berjalan pada O(1) waktu; Run-time dia tidak bertambah. **Order of magnitude** dia selalu 1.

Selanjutnya, baca -> [Linear Complexity: O(n)]()