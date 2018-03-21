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
        cout<<"("<<this->a<<","<<this->b<<"i)"<<endl;
    }

    Complex& operator +=(Complex &another){
        this->a+=another.a;
        this->b+=another.b;
        return *this;
    }

    friend Complex& operator -=(Complex& c1,Complex& c2);

private:
    int a;
    int b;
};

Complex & operator -=(Complex& c1,Complex& c2){
    c1.a-=c2.a;
    c1.b-=c2.b;
    return c1;
}

int main()
{
    cout << "Hello World!" << endl;
    Complex c1(1,2);
    Complex c2(2,3);
    c1.printComplex();
    c2.printComplex();
    (c1+=c2)+=c2;;
    c1.printComplex();
    c2.printComplex();
    c1-=c2;
    c1.printComplex();
    c2.printComplex();
    return 0;
}
