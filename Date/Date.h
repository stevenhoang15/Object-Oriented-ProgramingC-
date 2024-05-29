#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class Date{
    private:
        int day, month, year;
    public:
        Date();
        Date(int, int, int);

        void setDay();
        int getDay()const;
        void setMonth();
        int getMonth()const;
        void setYear();
        int getYear()const;

        void getDate()const;

};


#endif // DATE_H_INCLUDED

