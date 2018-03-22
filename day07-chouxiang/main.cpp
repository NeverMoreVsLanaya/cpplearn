#include <iostream>

using namespace std;


class Shape{
public:
    virtual double getArea()=0;
};


class  Tri:public Shape
{
public:
     Tri(int a,int b) {
         this->a=a;
         this->b=b;
     }
     virtual double getArea(){
        return a*b/2;
     }
private:
    int a;
    int b;
};
int main()
{
    cout << "Hello World!" << endl;
    Tri b(1,2);
    cout<<b.getArea()<<endl;
    return 0;
}
