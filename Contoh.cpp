#include <iostream>
using namespace std;

class PersegiPanjang
{
    public:// akses modifier
        int panjnag, lebar;
    public:
    void input()
    {
        cout <<"Masukan panjnag :";
        cin >> panjnag;
        cout <<"Masukkan lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }
    //Lingkaran ol;

};
     

    class Lingkaran
    {
        public:
        int jarijari;

        void input()
        {
            cout << "Masukkan jari-jari : ";
            cin >> jarijari;
        }
        
        int luasLingkaran(int r)
        {
            return 3.14 * r * r;
        }
    };

    int main()
    {
        PersegiPanjang objekPP; // Membuat objek
        Lingkaran ol;


        cout << "Masukkan panjnag : ";
        cin >> objekPP.panjnag;
        cout << "Masukan Lebar : ";
        cin >> objekPP.lebar;
        cout << "Luas Persegi Panjang : " <<
        objekPP.luasPp(objekPP.panjnag, objekPP.lebar) <<endl;
    }