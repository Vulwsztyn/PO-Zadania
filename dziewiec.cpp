#include <iostream>
using namespace std;
class Figure { 
public: 
    float area();
    float circumference(); 
}; 
class Rectangle: public Figure{
    protected:
        float x,y;
    public:
        Rectangle(float a,float b) {
            x = a;
            y = b;
        }
        float area() {
            return x*y;
        }
        float circumference() {
            return 2*x*y;
        }
};
class Square: public Rectangle {
    public:
        Square(float a):Rectangle(a,a) {}
};

int main() 
{
    Rectangle r(5,3);
    cout<<r.area()<<endl<<r.circumference()<<endl;
    Square s(5);
    cout<<s.area()<<endl<<s.circumference()<<endl;
    return 0;
}