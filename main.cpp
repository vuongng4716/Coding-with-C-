#include<iostream>

using namespace std;

class demo{
    private:
    static int x;
    public:
    void change();
    void display();
};

void demo::display(){
    cout << x;
}

void demo::change(){
    x++;
}

int demo::x=5;

void main(){
    demo obj, obj1, obj2;
    obj.display();
    obj1.display();
    obj2.display();
    obj.change();
    obj.display();
    obj1.display();
    obj2.display();
}