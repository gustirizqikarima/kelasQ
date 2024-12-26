#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

void dMenu(){
system("cls");
cout<<"Aplikasi Mahasiswa"<<"\n";       
cout<<"1. Masukkan data mahasiswa"<<"\n";            
cout<<"2. Tampilkan data mahasiswa"<<"\n";            
cout<<"3. Perbaiki data mahasiswa"<<"\n";           
cout<<"4. Hapus data mahasiswa"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

mahasiswa sikc[30];
int pos=-1;

void masukanData(){
pos++;
system("cls");
fflush(stdin);
cout << "Masukkan NIM: ";
getline (cin, sikc[pos].nim);
cout << "Masukkan Nama: ";
getline (cin, sikc[pos].nama);
cout << "Masukkan Alamat: ";
getline (cin, sikc[pos].alamat);
cout << "Masukkan IPK: ";
cin >> sikc[pos].ipk;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

