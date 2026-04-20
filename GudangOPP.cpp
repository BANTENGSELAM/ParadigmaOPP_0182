#include <iostream>; // library 
using namespace std;

class Barang{   //class barang
    public :

    //penambahan variable Barang
    string  nama;
    string  kategori;
    int     jumlah;
    string  tanggalProduksi;

    void printData(){ //void output
            cout << "Nama Barang        : " << nama << endl;
            cout << "Kategori           : " << kategori << endl;
            cout << "Jumlah             : " << jumlah << endl;
            cout << "Tanggal Produksi   : " << tanggalProduksi << endl;
    }

    
};// batas class

//program utama
int main (){
    Barang brEl;
    brEl.nama                 = "TV";
    brEl.kategori             = "Elektronik";
    brEl.jumlah               = 2;
    brEl.tanggalProduksi      = "2026-04-20";
    brEl.printData();

    cout << endl;

    Barang brNL;
    brNL.nama                 = "Meja";
    brNL.kategori             = "Non-Elektronik";
    brNL.jumlah               = 5;
    brNL.tanggalProduksi      = "2026-04-25";
    brNL.printData();
}