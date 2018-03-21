#include "myarray.h"

MyArray::MyArray(){
    this->len=0;
    this->space=NULL;
}

MyArray::MyArray(int len){
    if(len>0){
        this->len=len;
        this->space=new int[len];
    }
}


MyArray::MyArray(const MyArray &another){
    if(another.space!=NULL){
        this->len=another.len;
        this->space=new int[this->len];
        for(int i=0;i<this->len;i++){
            this->space[i]=another.space[i];
        }
    }
}


MyArray &  MyArray::operator =(const MyArray&another){
    if(this->space!=NULL){
        delete[] this->space;
        this->space=NULL;
    }
    this->len=another.len;
    this->space=new int[this->len];
    for(int i=0;i<this->len;i++){
        this->space[i]=another.space[i];
    }
    return *this;
}

int& MyArray::operator [](int index) const{
    if(index>=0&&index<this->len){
        return this->space[index];
    }
}


ostream& operator <<(ostream&os,MyArray&myarray){

    for(int i=0;i<myarray.len;i++){
        os<<myarray[i]<<" ";
    }
    os<<endl;
    return os;
}

istream& operator >>(istream& is,MyArray&myarray){
    for(int i=0;i<myarray.len;i++){
        cout<<"please input "<<i<<"value:";
        cin>>myarray[i];
    }
    return is;
}

MyArray::~MyArray(){
    if(this->space!=NULL){
        delete[] this->space;
        this->space=NULL;
        this->len=-1;
    }
}


