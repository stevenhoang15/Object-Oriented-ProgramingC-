#ifndef MILLTIME_H_INCLUDED
#define MILLTIME_H_INCLUDED

class MillTime{
    protected:
        int sec, mun, hou;
    public:
        MillTime();
        MillTime(int, int, int);

        int getSec()const;
        int getMun()const;
        int getHou()const;
};

#endif // MILLTIME_H_INCLUDED
