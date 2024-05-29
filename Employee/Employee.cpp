#include"Employee.h"

Employee::Employee(string name, int id, string department, string job){
    cout << "Nhap ten:"; cin >> name;
    cout << "Nhap id:"; cin >> id;
    cout << "Nhap department:"; cin >> department;
    cout << "Nhap job:"; cin >> job;
    strTen = name;
    iID = id;
    strDepartment = department;
    strJobTitel = job;
}
Employee::Employee(string name, int id){
    cout << "Nhap ten:"; cin >> name;
    cout << "Nhap id:"; cin >> id;
    strTen = name;
    iID = id;
    strDepartment = "";
    strJobTitel = "";
}
Employee::Employee():strTen(""), iID(0), strDepartment(""), strJobTitel(""){}

void Employee::setName(string strTen){
    this->strTen = strTen;
}
string Employee::getName()const{
    return strTen;
}
void Employee::setID(int iID){
    this->iID = iID;
}
int Employee::getID()const{
    return iID;
}
void Employee::setDepartment(string strDepartment){
    this->strDepartment = strDepartment;
}
string Employee::getDepartmenr()const{
    return strDepartment;
}
void Employee::setJob(string strJobTitel){
    this->strJobTitel = strJobTitel;
}
string Employee::getJob()const{
    return strJobTitel;
}













