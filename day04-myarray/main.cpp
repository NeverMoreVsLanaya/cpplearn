#include <iostream>
#include "myarray.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    MyArray array1(10);
    for(int i=0;i<10;i++){
        array1.setData(i,i+10);
    }

    cout<<"============"<<endl;
    cout<<"array1:"<<endl;
    for(int i=0;i<array1.getLen();i++){
        cout<<array1.getData(i)<<" ";
    }
    cout<<endl;

    MyArray array2=array1;
    cout<<"array2:"<<endl;
    for(int i=0;i<array2.getLen();i++){
        cout<<array2.getData(i)<<" ";
    }
    cout<<endl;

    MyArray array3;
    array3=array1;
    cout<<"array3:"<<endl;
    for(int i=0;i<array3.getLen();i++){
        cout<<array3.getData(i)<<" ";
    }
    cout<<endl;

    return 0;
}
