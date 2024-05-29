#include <iostream>
using namespace std;
#include"Date.h"
int main()
{
    Date d1;
    d1.setDay();
    d1.setMonth();
    d1.setYear();
    d1.getDate();
    /*
    try{
        cout << "Chuong trinh duoc thuc thi." << endl;
        throw 100;
        cout << "Chuong trinh khong duoc thuc thi" << endl;
    }
    catch(int i){
        cout << "so bat duoc la" << i << endl;
    }*/
    return 0;
}
