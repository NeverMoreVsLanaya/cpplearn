#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
using namespace std;

class MyArray
{
public:
    MyArray();
    MyArray(int len);
    MyArray(const MyArray& another);
    ~MyArray();
    MyArray& operator =(const MyArray&another);
    int  & operator[](int index) const;

    friend ostream& operator <<(ostream& os,MyArray &myarray);
    friend istream& operator >>(istream& is,MyArray &myarray);
private:
    int len;
    int *space;
};

#endif // MYARRAY_H
