#include <iostream>; // library
using namespace std;

class Mahasiswa{ // Class Mahasiswa
    public :

    //penambahan int
    int nim;
    string nama;
    float nilai;
    
    void printData(){ //void output
            cout << "NIM    : " << nim << endl;
            cout << "Nama    : " << nama << endl;
            cout << "Nilai   : " << nilai << endl;
    }
};// batas class

//program utama
int main (){
    Mahasiswa mhs;
    mhs.nim     = 2025;
    mhs.nama    = "Widji";
    mhs.nilai   = 85.5;

    mhs.printData();
}