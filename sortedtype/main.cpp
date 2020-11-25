#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;


void Print(sortedtype<timestamp> s)
{
    for(int i=0;i<s.LengthIs(); i++)
    {
        timestamp temp;
        s.GetNextItem(temp);
        temp.print();
    }
    s.ResetList();
    cout<<endl;
}

int main()
{

    timestamp t1(2,3,4);
    timestamp t2(4,3,2);
    timestamp t3(3,4,5);
    sortedtype<timestamp> st;
    st.InsertItem(t1);
    st.InsertItem(t2);
    st.InsertItem(t3);

    Print(st);
    return 0;

}
