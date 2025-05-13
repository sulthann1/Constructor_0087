#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private :
    int nim;
    string nama;
    public :
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa (int iNim, string iNama);
    void cetak();
};

mahasiswa ::mahasiswa (int iNim){
    nim = iNim;
}

mahasiswa :: mahasiswa(string iNama){
    nama = iNama;
}

mahasiswa :: mahasiswa(int iNim, string iNama){
    nim = iNim;
    nama = iNama;
}

void mahasiswa :: cetak(){
    cout << "NIM : " <<nim <<endl;
    cout << "Nama :" <<nama <<endl;
}

int main(){
    mahasiswa mhs1(102030);
    mahasiswa mhs2("Andi");
    mahasiswa mhs3(010203, "Santi");

    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();
}   