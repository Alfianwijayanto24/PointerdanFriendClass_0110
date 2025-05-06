#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = "<<nim<<endl;
    }

};

int main(){
    mahasiswa mhs{1};//objek mhs
    mhs.showNim();//Member Access Operator

    mahasiswa &refMhs = mhs; //Pointer reference refMhs
    refMhs.nim = 2;//Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs;//pointer dereference pMhs
    pMhs->nim =3;// Arrow Operatour
    pMhs->showNim();
    return 0;
}
