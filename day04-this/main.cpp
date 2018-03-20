#include <iostream>

using namespace std;


class Test
{
public:
    Test() {}
    Test(int k){
        this->m_k=k;
    }
    int getK() const{

        return this->m_k;
    }
private:
    int m_k;
    static int s_k;

};

int Test::s_k=0;
int main()
{
    cout << "Hello World!" << endl;
    Test t1(10);
    t1.getK();
    return 0;
}
