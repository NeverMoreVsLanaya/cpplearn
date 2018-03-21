#include <iostream>

using namespace std;

class A
{
public:
    A() {}
    A(int a){
        this->a=a;
    }
    void printA(){
        cout<<"a="<<this->a<<endl;

    }
    friend class B;
private:
    int a;
};


class B
{
public:
    B() {}
    B(int b){
        this->b=b;
    }
    void printB(){
        A objA(100);
        cout<<objA.a<<endl;
    }
    friend class A;
private:
    int b;
};

int main()
{
    cout << "Hello World!" << endl;
    B b(1);
    b.printB();
    return 0;
}
