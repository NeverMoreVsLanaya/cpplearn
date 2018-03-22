#include <iostream>

using namespace std;

typedef int (MYARRAY) [10];
typedef int (*MYARRAYP)[10];

int main()
{
    cout << "Hello World!" << endl;
    int a[10]={0};
    cout<<a<<endl;
    cout<<a+1<<endl;
    cout<<&a<<endl;
    cout<<&a+1<<endl;
    cout<<**(&a+1)<<endl;
    cout<<"============="<<endl;
    MYARRAYP p=&a;
    cout<<p<<endl;
    cout<<**p<<endl;
    cout<<p+1<<endl;
    cout<<p[1]<<endl;
    cout<<*p[1]<<endl;
    cout<<"*************"<<endl;

    int (*ap)[10]=&a;
    cout<<ap<<endl;
    cout<<**ap<<endl;
    cout<<ap+1<<endl;
    cout<<ap[1]<<endl;
    cout<<*ap[1]<<endl;


    return 0;
}
