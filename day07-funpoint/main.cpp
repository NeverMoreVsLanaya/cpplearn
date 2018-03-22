#include <iostream>

using namespace std;
typedef int (*MYFUN)(int a,int b);

int add(int a,int b){
    return a+b;
}

int operatortownumber(int a,int b,int(*fp)(int x,int y)){
    return fp(a,b);
}

int mins(int a,int b){
    return a-b;
}

int chen(int a,int b){
    return a*b;
}


int main()
{
    cout << "Hello World!" << endl;
//    MYFUN fp=add;
//    cout<<fp(10,20)<<endl;
    cout<<operatortownumber(20,10,mins)<<endl;
    cout<<operatortownumber(20,10,chen)<<endl;
    cout<<operatortownumber(20,10,add)<<endl;
    return 0;
}
