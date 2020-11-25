#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timestamp{

public:
    timestamp();
    timestamp(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
    void print();
    friend bool operator<(timestamp,timestamp);
    private:
    int hour;
    int minute;
    int second;
};
#endif // TIMESTAMP_H_INCLUDED


