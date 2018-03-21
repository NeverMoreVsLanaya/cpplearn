#include <iostream>
#include "myarray.h"
using namespace std;


int & test(bool flag,int &t){
    if(flag){
        return t;
    }
}
int main()
{
    cout << "Hello World!" << endl;
//    int a=1;
//    int k=test(false,a);
//    cout<<k<<endl;

    MyArray a1(10);
    cin>>a1;
    cout<<a1;

    MyArray a2(a1);
    cout<<a2;

    MyArray a3;
    a3=a2;
    cout<<a3;
    cout<<a3[3];
    return 0;
}
