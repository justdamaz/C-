/*program penghitung nilai akhir*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string Nama, NPM, Mata_kuliah;
    char kriteria;
    float nilai_absensi, nilai_tugas, nilai_uts, nilai_uas, na;

    cout << "\t\t=----------------------------=" << endl;
//   \t = Tab
    cout << "\t\tPROGRAM PENGHITUNG NILAI AKHIR" << endl;
    cout << "\t\t=----------------------------=" << endl;
    cout << "Nama\t\t= "; getline(cin,Nama);
// getline = input
    cout << "\nNPM\t\t= "; getline(cin,NPM);
// NPM bisa di ganti dengan nomor mahasiswa atau apa sebutannya di tempat kamu
    cout << "\nMata kuliah\t= "; getline(cin,Mata_kuliah);
    cout << "\nNilai Absensi\t= "; cin >> nilai_absensi;
    cout << "\nNilai Tugas\t= "; cin >> nilai_tugas;
    cout << "\nNilai UTS\t= "; cin >> nilai_uts;
    cout << "\nNilai UAS\t= "; cin >> nilai_uas;

    nilai_absensi = nilai_absensi * 0.1;
// 0.1 = 10persen/10%
    nilai_tugas = nilai_tugas * 0.3;
// 0.3 = 30 persen/30%
    nilai_uts = nilai_uts * 0.3;
    nilai_uas = nilai_uas * 0.4;
    na = nilai_absensi + nilai_tugas + nilai_uts + nilai_uas;
// jadi nilai kamu di kali berapa persen yang kamu butuhin lalu dijumlahkan semua

//  Dan ini aja menjadi tampilan nilai akhirnya
    cout << endl;
    cout << "\t\t=----------------=" <<endl;
    cout << "\t\tSiswa yang bernama" << endl;
    cout << "\t" << Nama << " _ " << NPM << endl;
    cout << "\t\t=----------------=" <<endl;
    cout << "\n Matakuliah              = " << Mata_kuliah << endl;
    cout << "\n Nilai Absensi x 10%     = " << nilai_absensi <<endl;
    cout << "\n Nilai Tugas x 20%       = " << nilai_tugas << endl;
    cout << "\n Nilai UTS x 30%         = " << nilai_uts << endl;
    cout << "\n Nilai UAS x 40%         = " << nilai_uas << endl;
    cout << "\n memperoleh nilai akhir  = " << na << endl;
    cout << "\n Dengan kriteria         = " << kriteria;


    if(na >= 90){
//  ini hasil akhir, jadi jika kamu dapet nilainya besar dari persenan yang tadi
//  maka otomatis akan muncul grade hurufnya (kriteria)
        cout << "A";
    }else if(na >= 80){
        cout << "B";
    }else if(na >= 70){
         cout << "C";
    }else if(na >= 60){
        cout << "D";
    }else{
        cout << "E";
    }
return 0;
}
