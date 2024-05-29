#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include<iostream>
using namespace std;
#include"MillTime.h"
class Time:public MillTime{
    public:
        Time();
        Time(int, int, int);
        void chuyenTime()const;
};


#endif // TIME_H_INCLUDED
