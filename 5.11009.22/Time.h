#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class time
{
public:
    explicit Time (int =0;int =0;int =0);
    void setTime (int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    void printUniversal const;
    void printStandard const;

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif // TIME_H_INCLUDED
