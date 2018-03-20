#include <iostream>
#include <cmath>
using namespace std;
class Point;
class PointManager
{
public:
    double PoinDistance(Point&p1,Point&p2);
};


class Point
{
public:
    Point() {}
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    Point(const Point& p){
        this->x=p.x;
        this->y=p.y;
    }
    friend double PointManager::PoinDistance(Point &p1, Point &p2);
private:
    int x;
    int y;
};

double PointManager::PoinDistance(Point &p1, Point &p2){

    int dd_x=p2.x-p1.x;
    int dd_y=p2.y-p1.y;
    return sqrt(dd_x*dd_x+dd_y*dd_y);
}
int main()
{
    cout << "Hello World!" << endl;
    Point p1(1,2);
    Point p2(2,2);
    PointManager pm;
    cout<<pm.PoinDistance(p1,p2)<<endl;
    return 0;
}
