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
    void setData(int index,int data);
    int getData(int index) const;
    int getLen()const;
    MyArray& operator =(const MyArray& another);
private:
    int len;
    int *space;
};


#endif // MYARRAY_H
