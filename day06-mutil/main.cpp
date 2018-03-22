#include <iostream>

using namespace std;
class Furniture
{
public:
    Furniture() {}
public:
    int m;
};

class Bed:virtual public Furniture
{
public:
    Bed() {}
    void sleep(){
        cout<<"sleep"<<endl;
    }
};


class Sofa:virtual public Furniture
{
public:
    Sofa() {}
    void sit(){
        cout<<"sit"<<endl;
    }
};


class SofaBed :public Sofa,public Bed
{
public:
    SofaBed() {}
    void sleepandsit(){
        this->sleep();
        this->sit();
    }
};
int main()
{
    cout << "Hello World!" << endl;

    SofaBed sb;
    sb.sleepandsit();
    return 0;
}
