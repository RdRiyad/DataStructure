#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 5;
template <class e>
class sortedtype
{
public :
    sortedtype();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(e);
    void DeleteItem(e);
    void RetrieveItem(e&, bool&);
    void ResetList();
    void GetNextItem(e&);

private:
    int length;
    e info[MAX_ITEMS];
    int currentPos;
};
#endif // SORTEDTYPE_H_INCLUDED

