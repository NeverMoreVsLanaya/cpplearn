#include <iostream>
#include <memory>
#include <string>
using namespace std;
class Test
{
public:
    Test() {}
    Test(int a){
        this->a=a;
    }
    ~Test(){
        cout<<"xi gou call"<<endl;
    }
private:
    int a;
};

void test(shared_ptr<Test> tp){
    cout<<tp.use_count()<<endl;
    shared_ptr<Test> tmp=tp;
    cout<<tmp.use_count()<<endl;
}
int main()
{
    cout << "Hello World!" << endl;
//    auto_ptr<Test> ap(new Test);
//    Test *p=new Test(10);
//    string a(10,'a');
//    cout<<a<<endl;

//    shared_ptr<string> share=make_shared<string>("jiangfan");

//    cout<<*share<<endl;
//    shared_ptr<Test> share=make_shared<Test>(10);
//    cout<<share.use_count()<<endl;
//    test(share);
//    cout<<share.use_count()<<endl;
    Test* t=new Test(10);
    shared_ptr<Test> share(t);
    cout<<share.use_count()<<endl;
    unique_ptr=nullptr;
    cout<<share.use_count()<<endl;
    return 0;
}
