#include <iostream>
using namespace std;
#include<fstream>
int main()
{
    ifstream fin("‪E:\\TaiLieuHoc\\RainOrShineW.txt");
    char cArray[3][30];
    for(int i = 0; i<3; i++){
        for(int j = 0; j <30; j++){
            fin >> cArray[i][j];
        }
    }
    cout <<  "day la:" << cArray[1][3] << endl;
    if(fin){
        cout << "doc file thanh cong" << endl;
    }

    return 0;
}
