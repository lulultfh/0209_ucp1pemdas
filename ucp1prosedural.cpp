//6.
#include <iostream>
using namespace std;

string namaPendaftar[20];
float matematika[20], bhsInggris[20];
bool diterima[20];

bool Diterima(float matematika, float bhsInggris) { 
    float rerata = (matematika + bhsInggris)/2;
    return (rerata >= 70 || matematika > 80);
}

void input() {
    for (int i=0; i<20; i++) {
        cout << "Masukkan nama kandidat pendaftar ke- " << i+1 << ":";
        cin >> namaPendaftar[i];
        cout << "Masukkan hasil tes nilai matematika kandidat pendaftar ke- " << i+1 << ":";
        cin >> matematika[i];
        cout << "Masukkan hasil tes nilai bahasa inggris kandidat pendaftar ke- " << i+1 << ":";
        cin >> bhsInggris[i];

        diterima[i] = Diterima(matematika[i], bhsInggris[i]);
    }
}

void display() {
    cout << "\n\nNama\tStatus" << endl;
    for (int i = 0; i < 20; i++) {
        cout << namaPendaftar[i] << "\t";
        if (diterima[i]) {
            cout << "Diterima" << endl;
        } else {
            cout << "Ditolak" << endl;
        }
    }
}

int main() {
    string pilihan;

    do
    {
        input();
        display();

        cout << "Apakah anda ingin mengulang program kembali? (Yes/No)" << endl;
        cin >> pilihan;
    } while (pilihan == "Yes");

    return 0;
}

//1. contoh deklarasi variabel:
//string nama; 
//float nilaiUCP; 
//int jumlah_siswa; [as a global variable]

//2. contoh implementasi conditional statement:
//  if (bilangan >= 5){
//      bilangan = 2 * bilangan;
//   }
//   else
//   {
//      bilangan = 4 * bilangan;
//   }

//3. contoh implementasi struct
//struct Mahasiswa {
//   string NIM;
//   string nama;
//   string alamat;
//   int umur;
//};

//4. contoh implementasi prosedur dan fungsi
//a. contoh prosedur:
// void input() {
//	while (true) 
//	{
//		cout << "Masukkan panjang element array : ";
//		cin >> n;
//
//		if (n <= 20)
//			break;
//		else
//			cout << "\nMaksimum panjang array adalah 20" << endl;
//	}
//
//	cout << "\n-------------------" << endl;
//	cout << "\nEnter Array Element" << endl;
//	cout << "\n-------------------" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "<" << (i + 1) << ">";
//		cin >> arr[i];
//	}
//}
//
//b. contoh fungsi
//int totalHarga(){
//    return (nAdidas*hAdidas) + (nPuma*hPuma) + (nNB*hNB) + (nNike*hNike);
//}

//5. contoh implementasi looping
//while (true) 
//	{
//		cout << "Masukkan panjang element array : ";
//		cin >> n;
//
//		if (n <= 20)
//			break;
//		else
//			cout << "\nMaksimum panjang array adalah 20" << endl;
//	}