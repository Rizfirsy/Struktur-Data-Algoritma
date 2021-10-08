
# Quadratic Complexity: O(N²)

Tugas-tugas quadratic membutuhkan ` jumlah step == inputValue² `. 
Kita ambil contoh `function printArray` yg akan mengambil array sebagai `inputValue` dimana N adalah jumlah nilai didalam array. Jika kita menggunakan nested loop yang mana keduanya menggunakan N sebagai pembatasnya, dan saya meminta `function printArray` untuk mencetak isi array, function tsb akan melakukan N putaran(perulangan), setiap putaran mencetak N baris dengan total step cetak N².

Asumsikan panjang index N sebuah array = 10. Jika `function printArray` didalam nested loop, dia akan melakukan 10 putaran(perulangan), setiap putaran mencetak 10 baris dengan total step 100 langkah pencetakan. Inilah run time `O(N²)`. Dan total run time ini meningkat pada Order of Magnitude sebanding dengan N².