#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<iostream>
using namespace std;
class Employee{
    private:
        string strTen;
        int iID;
        string strDepartment;
        string strJobTitel;
    public:
        Employee(string, int, string, string);
        Employee(string, int);
        Employee();

        void setName(string);
        string getName()const;
        void setID(int);
        int getID()const;
        void setDepartment(string);
        string getDepartmenr()const;
        void setJob(string);
        string getJob()const;
};


#endif // EMPLOYEE_H_INCLUDED
