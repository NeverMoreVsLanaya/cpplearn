#include "myarray.h"

MyArray::MyArray(){
    this->len=0;
    this->space=NULL;
}

MyArray::MyArray(int len){
    if(len<=0){
        this->len=0;
        return ;
    }
    this->len=len;
    this->space=new int[len];
}


MyArray::MyArray(const MyArray &another){
    if(another.len>=0){
        this->len=another.len;
        this->space=new int[this->len];
        for(int i=0;i<this->len;i++){
            this->space[i]=another.space[i];
        }
    }

}



MyArray::~MyArray(){
    if(this->space!=NULL){
        delete[] this->space;
        this->space=NULL;
        this->len=0;
    }
}



void MyArray::setData(int index, int data){
    if(this->space!=NULL||this->len<index){
        this->space[index]=data;
    }
}

int MyArray::getData(int index) const{
    if(this->len>index||this->space!=NULL){
        return this->space[index];
    }
}

int MyArray::getLen()const{
    return this->len;
}

MyArray& MyArray::operator =(const MyArray& another){
    if(this->space!=NULL){
        delete[] this->space;
        this->space=NULL;
    }
    this->len=another.len;
    this->space=new int[this->len];
    for(int i=0;i<this->len;i++){
        this->space[i]=another.space[i];
    }
}




