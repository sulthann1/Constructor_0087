#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public :
    mahasiswa(int mhs, string nama);
};

mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor dengan parameter" <<endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main(){
    mahasiswa mhs(12345, "pascal");
    return 0;
}
