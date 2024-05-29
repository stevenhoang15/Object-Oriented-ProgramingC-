#include"Date.h"
#include<iostream>
using namespace std;

Date::Date():day(0), month(0), year(0){}
Date::Date(int day, int month, int year):day(day), month(month), year(year){}

void Date::setDay(){
    int iDay;
    try{
        cout << "Nhap ngay(tu 1-31):"; cin >> iDay;
        if(iDay < 1 || iDay > 31)
            throw  ;
    }
    catch(char* s){
        cout << s << endl;
    }
    day = iDay;
}
int Date::getDay()const{
    return day;
}

void Date::setMonth(){
    int iMonth;
    do{
        cout << "Nhap thang (tu 1-12):"; cin >> iMonth;
    }while(iMonth < 1 || iMonth > 12);
    month = iMonth;
}
int Date::getMonth()const{
    return month;
}

void Date::setYear(){
    int iYear;
    do{
        cout << "Nhap nam:"; cin >> iYear;
    }while(iYear < 0);
    year = iYear;
}
int Date::getYear()const{
    return year;
}

void Date::getDate()const{
    cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
}




