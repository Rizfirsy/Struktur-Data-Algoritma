# C++ Structure & Function
Variable structure dapat dipassing ke sebuah function dan dikembalikan dengan cara yang sama sebagai argumen biasa.

### Passing Structure ke Function dalam C++
Perhatikan contoh berikut:
```
	#include <iostream>
	using namespace std;
	
	struct Warga {
		char nama[50];
		int age;
		string profesi;
	};
	
	void displayData(Warga); //membuat function
	
	int main() {
		Warga Dinda;
		
		cout << "Masukkan nama lengkap: ";
		cin.get(Dinda.name, 50);
		cout << "Masukkan usia: ";
		cin >> Dinda.usia;
		cout << "Masukkan profesi" << Dinda.nama << ": ";
		cin.get(Dinda.profesi);
		
		
		//pemanggilan function dengan struktur variable sebagai argumen
		displayData(Dinda);
		
		return 0;
		
	};
	
	void displayData (Warga Dinda {
	cout << "Menampilan informasi warga" << endl;
	cout << "Nama: " << Dinda.nama << endl;
	cout << "Usia: " << Dinda.usia << endl;
	cout << "Profesi: " << Dinda.profesi << endl;
	
```
