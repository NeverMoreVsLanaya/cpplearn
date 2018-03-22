#include <iostream>

using namespace std;
class Parent
{
public:
    Parent(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    virtual void print()
    {
        cout << "Parent::print a,b=  " << a <<","<<b<< endl;
    }

    int a;
    int b;
};

class Child :public Parent
{
public:
    Child(int a,int b,int c) :Parent(a,b)
    {
        this->c=c;
    }

    virtual void print()
    {
        cout << "Child::print a=  " << a << endl;
    }

    int c;
};

int main()
{
    cout << "Hello World!" << endl;


    Child childarr[]={Child(0,0,0),Child(1,1,1),Child(2,2,2)};

    Parent *pp=&childarr[0];
    Child *cp=&childarr[0];
//    pp->print();
//    cp->print();
//    cp++;
//    cp->print();
    pp++;
    pp++;
    pp->print();
    return 0;
}
