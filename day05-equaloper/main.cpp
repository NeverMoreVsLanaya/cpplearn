#include <iostream>
#include "string.h"
using namespace std;

class Student
{
public:
    Student();
    Student(int id,char *name);
    Student(const Student& s);
    Student& operator =(const Student&another);
    friend ostream& operator <<(ostream& os,Student&s);
    friend istream& operator >>(istream& is,Student&s);
    ~Student();
private:
    int id;
    char *name;
};

Student::Student(){
    this->id=-1;
    this->name=NULL;
}
Student::Student(int id, char *name){
    if(name==NULL){
        return;
    }
    this->id=id;
    int len=strlen(name)+1;
    this->name=new char[len+1];
    strcpy(this->name,name);
}

Student::Student(const Student &s){
    if(s.name==NULL){
        return;
    }
    this->id=s.id;
    int len=strlen(s.name)+1;
    this->name=new char[len];
    strcpy(this->name,s.name);
}

Student& Student::operator =(const Student&s){
    if(this->name!=NULL){
        delete[] this->name;
        this->name=NULL;
    }
    this->id=s.id;
    int len=strlen(s.name)+1;
    this->name=new char[len];
    strcpy(this->name,s.name);

}

ostream & operator <<(ostream&os,Student&s){
    os<<"id:"<<s.id<<" name:"<<s.name;
    return os;
}

istream& operator >>(istream&is,Student&s){
    cout<<"id:";
    is>>s.id;
    cout<<"name:";
    is>>s.name;
    return is;
}

Student::~Student(){
    if(this->name!=NULL){
        delete[] this->name;
        this->name=NULL;
        this->id=-1;
    }

}
int main()
{
    cout << "Hello World!" << endl;
//    char *p="hello world!";
//    cout<<strlen(p);
    Student s1(1,"jiangfan");
    Student s2=s1;
    Student s3(3,"hello");
    s3=s2;
    cin>>s3;
    cout<<s1<<endl<<s2<<endl<<s3<<endl;

    return 0;
}
