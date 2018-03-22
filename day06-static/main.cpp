#include <iostream>

using namespace std;

class A
{
public:
    A() {}
    static int& getA(){

        return A::a;
    }
    static void setA(int a){
        A::getA()=a;
    }
private:
    static int a;
};
int A::a=0;
class B:public A
{
public:
    B() {}
    B(int b){
        this->b=b;
    }

private:
    int b;
};

int main()
{
    cout << "Hello World!" << endl;
    A a1;
    A a2;
    cout<<a1.getA()<<endl;
    B b1;

    cout<<b1.getA()<<endl;

    cout<<b1.getA()<<endl;

    b1.setA(10);
    cout<<b1.getA()<<endl;
    cout<<a1.getA()<<endl;
//    cout<<A::a<<endl;

//    cout<<B::a<<endl;
     cout<<B::getA()<<endl;
    return 0;
}
