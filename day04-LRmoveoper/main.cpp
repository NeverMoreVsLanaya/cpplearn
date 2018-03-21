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
        cout << "( " << this->a << ", " << this->b << "i )" << endl;
     }

    friend ostream& operator <<(ostream&os,Complex& c);
    friend istream& operator >>(istream&is,Complex& c);
private:
    int a;
    int b;
};
ostream& operator <<(ostream& os,Complex& c){
    os<<"("<<c.a<<"+"<<c.b<<"i)"<<endl;
    return os;
}

istream& operator >>(istream& is,Complex& c){
    cout<<"a:";
    is>>c.a;
    cout<<"b:";
    is>>c.b;
    return is;
}
int main()
{
    cout << "Hello World!" << endl;
    Complex c1(1,2);
    cout<<c1;
    cin>>c1;
    cout<<c1;
    return 0;
}
