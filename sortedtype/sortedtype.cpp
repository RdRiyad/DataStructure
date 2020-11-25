#include<iostream>
#include "sortedtype.h"
using namespace std;

template <class e>
sortedtype<e>::sortedtype()
{
    length=0;
    currentPos=-1;
}
template <class e>
void sortedtype<e>::MakeEmpty()
{
    length=0;
}

template <class e>
bool sortedtype<e>::IsFull()
{
 return (length==MAX_ITEMS);
}

template <class e>
int sortedtype<e>::LengthIs()
{
    return length;
}

template <class e>
void sortedtype<e>::ResetList()
{
    currentPos=-1;
}

template <class e>
void sortedtype<e>::GetNextItem(e& item)
{
    currentPos++;
    item=info[currentPos];
}

template <class e>

void sortedtype<e>::InsertItem(e item)
{
    int location =0;
for(int i=0;i<length;i++)
{
    if(info[i]<item){    //no match for <operator> timestamp ans timestamp.
       location++;
    }
    else
        break;
}
for (int i = length-1; i>= location;i--){
info[i+1] = info[i];
}
info[location] = item;
length++;
}
template <class e>
void sortedtype<e>::DeleteItem(e item)
{
    int location = 0;
    while (item != info[location])
    location++;
    for (int index = location + 1; index < length;
    index++)
    info[index - 1] = info[index];
    length--;
}

template <class e>
void sortedtype<e>::RetrieveItem(e&item, bool& found)
{
     int midPoint, first = 0, last = length - 1;
     bool moreToSearch = (first <= last);
     found = false;
     while (moreToSearch && !found)
    {
    midPoint = (first + last) / 2;
    if(item < info[midPoint])
    {
    last = midPoint - 1;
    moreToSearch = (first <= last);
    }
    else if(item > info[midPoint])
    {
    first = midPoint + 1;
    moreToSearch = (first <= last);
    }
    else
    {
    found = true;
    item = info[midPoint];
    }
  }
}

