#include<iostream>
#include "timestamp.h"
using namespace std;

timestamp::timestamp()
{
    hour=0;
    minute=0;
    second=0;
}

timestamp::timestamp(int h,int m,int s)
{
    hour=h;
    minute=m;
    second=s;
}
void timestamp::setHour(int h)
{
    hour=h;
}
void timestamp::setMinute(int m)
{
    minute=m;
}
void timestamp::setSecond(int s)
{
    second=s;
}

int timestamp::getHour()
{
  return hour;
}


int timestamp::getMinute()
{
  return minute;
}


int timestamp::getSecond()
{
  return second;
}

void timestamp::print()
{
    cout<<hour<<" :"<<minute<<" :"<<second<<endl;
}

bool operator<(timestamp t1,timestamp t2)
{
    if(t1.getHour()<t2.getHour())
        return true;
    else
        return false;
}
