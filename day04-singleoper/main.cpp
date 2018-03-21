#include <iostream>

using namespace std;

class Complex
{
public:
    Complex() {}
    Complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    void printComplex(){
        cout<<"("<<this->a<<"+"<<this->b<<"i)"<<endl;
    }
#if 0
    friend Complex& operator ++(Complex& c);
    friend const Complex operator ++(Complex& c,int);
#endif
    Complex &operator ++(){
        this->a++;
        this->b++;
        return *this;
    }
    const Complex operator ++(int){
        Complex tmp(this->a,this->b);
        this->a++;
        this->b++;
        return tmp;
    }
private:
    int a;
    int b;
};

#if 0
Complex & operator ++(Complex& c){
    c.a++;
    c.b++;
    return c;
}

const Complex operator ++(Complex &c,int){
    Complex tmp(c.a,c.b);
    c.a++;
    c.b++;
    return tmp;
}
#endif

int& test(){
    int *tmp=new int(9);;
    return *tmp;
}
int main()
{
//    cout << "Hello World!" << endl;
//    int a=0;
//    ++++a;
//    cout<<a<<endl;
//    int& a=test();
//    cout<<a<<endl;
    Complex c1(1,2);
    Complex c3=++c1;
    c1.printComplex();
    c3.printComplex();
    Complex c2(1,2);
    Complex c4=c2++;
    c2.printComplex();
    c4.printComplex();
    return 0;
}
