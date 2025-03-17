#include <iostream>
using namespace std;

float luasPersegiPanjang(float a, float b){
    return a * b;
}

float luasLingkaran(float a){
    return 3.14 * a * a;
}

int main(){
    int pilihan;
    int panjang, lebar;
    int jejari;

    do
    {
        cout << "menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;

        cout << "Pilihan (1/2/3) = ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                cout << "hitung luas persegi panjang" << endl;
                cout << "masukkan panjang = ";
                cin >> panjang;
                cout << "masukkan lebar = ";
                cin >> lebar;
                cout << "luas persegi panjang = " << luasPersegiPanjang(panjang, lebar) << endl;
                break;
            case 2:
                cout << "hitung luas lingkaran" << endl;
                cout << "masukkan jari-jari = ";
                cin >> jejari;
                cout << "luas lingkaran = " << luasLingkaran(jejari) << endl;
                break;
            case 3:
                break;
        
            default:
                cout << "pilihan salah, pilihan harus diantara 1-3.";
                break;
        }
    } while (pilihan != 3);
    

}