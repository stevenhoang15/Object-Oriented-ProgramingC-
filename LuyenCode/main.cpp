#include<iostream>
using namespace std;

int TimSoDaoNguoc(int);
bool KiemTraSoDoiXung(int);
int TinhGiaiThua(int);

int main(){
    int so;
    cin >> so;
    /*cout << TimSoDaoNguoc(so) << endl;
    if(KiemTraSoDoiXung(so)){
        cout << "So tren doi xung " << endl;
    }
    else{
        cout << "So khong doi xung" << endl;
    }*/
    cout << TinhGiaiThua(so) < endl;
    return 0;
}

int TimSoDaoNguoc(int soNhap){
    int soMoi = 0;
    while(soNhap != 0){
        int boNho;
        boNho = soNhap % 10;
        soMoi = soMoi*10 + boNho;
        soNhap /= 10;
    }
    return soMoi;
}

bool KiemTraSoDoiXung(int soNhap){
    return (TimSoDaoNguoc(soNhap) == soNhap);
}

int TinhGiaiThua(int soNhap){
    if(soNhap > 0){
        return soNhap * TinhGiaiThua(soNhap - 1 );
    }
    else{
        return 1;
    }
}
