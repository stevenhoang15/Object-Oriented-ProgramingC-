#include"MillTime.h"
#include<iostream>
using namespace std;

MillTime::MillTime():sec(0), mun(0), hou(0){}
MillTime::MillTime(int sec, int mun, int hou):sec(sec), mun(mun), hou(hou){}

int MillTime::getSec()const{
    return sec;
}
int MillTime::getMun()const{
    return mun;
}
int MillTime::getHou()const{
    return hou;
}
