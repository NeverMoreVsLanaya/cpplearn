#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
    A() {}
    A(char*s){
        cout<<"A construct"<<endl;
        this->p=new char[strlen(s)+1];
        strcpy(this->p,s);
    }

    virtual ~A(){
        cout<<"A xigou"<<endl;
        if(this->p!=nullptr){
            delete [] this->p;
            this->p=nullptr;
        }
    }


    virtual void print(){
        cout<<this->p<<endl;
    }
private:
    char*p;
};


class B :public A
{
public:
    B() {}
    B(char*sb,char*sa):A(sa){
        cout<<"B construct"<<endl;
        this->p=new char[strlen(sb)+1];
        if(this->p!=nullptr){
            strcpy(this->p,sb);
        }

    }

    ~B(){
        cout<<"B xigou"<<endl;
        if(this->p!=nullptr){
            delete[] this->p;
            this->p=nullptr;
        }
    }

    virtual void print(){
        cout<<this->p<<endl;
    }
private:
    char *p;
};

void test(){
    A *tmp=new B("bb","aa");
    tmp->print();
    delete tmp;
}

int main()
{
    cout << "Hello World!" << endl;
    test();
    return 0;
}
