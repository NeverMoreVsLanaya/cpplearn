#include <iostream>
#include <string.h>

using namespace std;

class Test
{
public:
    Test() {
        this->m_x=0;
        this->m_y=0;
        this->name=(char*)malloc(100);
        strcpy(this->name,"default");
    }
    Test(int x,int y,char*s){
        this->m_x=x;
        this->m_y=y;
        this->name=(char*)malloc(100);
        strcpy(name,s);
    }
    Test(const Test &t){
        this->m_x=t.m_x;
        this->m_y=t.m_y;
        this->name=(char*)malloc(100);
        if(this->name!=NULL){
            strcpy(this->name,t.name);
        }

    }

    Test & operator =(const Test &t){
        if(this->name!=NULL){
            free(this->name);
            this->name=NULL;
        }
        this->m_x=t.m_x;
        this->m_y=t.m_y;
        this->name=(char*)malloc(100);
        if(this->name!=NULL){
            strcpy(this->name,t.name);
        }

    }

    void print(){
        cout<<"m_x:"<<this->m_x<<endl;
        cout<<"m_y:"<<this->m_y<<endl;
        cout<<"name:"<<this->name<<endl;
        cout<<"m_z:"<<this->getC()<<Test::getsc()<<endl;

    }
    ~Test(){
        cout<<"Test xigou call"<<endl;
        if(this->name!=NULL){
            free(this->name);
            this->name=NULL;
        }
    }

    int getC(){
        return this->m_z;
    }

    static int &getsc(){
        return Test::m_z;
    }
private:
    int m_x;
    int m_y;
    char *name;
    static int m_z;
};


int Test::m_z=100;




class ConList
{
public:
    ConList() {}
    ConList(float a,float b,char *constr,int x,int y,char *name):t(x,y,name){
        this->a=a;
        this->b=b;
        this->constr=(char*)malloc(100);
        if(this->constr!=NULL){
            strcpy(this->constr,constr);
        }
    }
    ConList(float a, float b, char *constr, const Test& t):t(t){
        this->a=a;
        this->b=b;
        this->constr=(char*)malloc(100);
        if(this->constr!=NULL){
            strcpy(this->constr,constr);
        }
    }
    ConList(const ConList& con){
        this->a=con.a;
        this->b=con.b;
        this->constr=(char*)malloc(100);
        if(this->constr!=NULL){
            strcpy(this->constr,con.constr);
        }
        this->t=con.t;
    }

    ConList & operator =(const ConList& con){
        if(this->constr!=NULL){
            free(this->constr);
            this->constr=NULL;
        }
        this->a=con.a;
        this->b=con.b;
        this->constr=(char*)malloc(100);
        if(this->constr!=NULL){
            strcpy(this->constr,con.constr);
        }
        this->t=con.t;
    }
    void print(){
        this->t.print();
        cout<<"a:"<<this->a<<endl;
        cout<<"b:"<<this->b<<endl;
        cout<<"constr:"<<this->constr<<endl;
    }
    ~ConList(){
        cout<<"ConList xigou call"<<endl;
        if(this->constr!=NULL){
            free(this->constr);
            this->constr=NULL;
        }
    }

private:
    float a;
    float b;
    char *constr;
    Test t;
};

void check(){
    Test t1(1,2,"jiangfan");
    cout<<"hello"<<endl;
    ConList c1(3.0,4.0,"caonima",t1);
    cout<<"world"<<endl;
    Test *pt1=new Test(t1);
    ConList *pc1=new ConList(c1);
    if(pt1!=NULL){
        delete pt1;
        pt1=NULL;
    }
    if(pc1!=NULL){
        delete pc1;
        pc1=NULL;
    }
    t1.print();
    c1.print();
}


class C1
{
public:
    int i;
    int j;
    int k;
};


class C2{
public:
    int i;
    int j;
    int k;
    static int m;
public:
    int getk(){
        return k;
    }
    void setK(int k){
        this->k=k;
    }

};


struct S1
{
    int i;
    int j;
    int k;

};

struct S2
{
    int i;
    int j;
    int k;
    static int m;
};

int main()
{
//    cout << "Hello World!" << endl;
    cout<<"===================="<<endl;
//    check();
    C1 x;
    C2 y;
    cout<<sizeof(C1)<<endl;
    cout<<sizeof(C2)<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;

    cout<<sizeof(S1)<<endl;
    cout<<sizeof(S2)<<endl;
    cout<<"*********************"<<endl;




    return 0;
}
