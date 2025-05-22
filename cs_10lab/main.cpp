#include <iostream>
using namespace std;
class Animal {
    public:
    virtual void func1()=0;
};
class Dog : public Animal{
    public:
    virtual void func1(){
        cout<<"I am dog and I eat meat"<<endl;
    }
};
class Cat: public Animal {
    public:
    virtual void func1(){
        cout<<"I am cat and I eat fish"<<endl;
    }
};

int main()
{
    Dog D;
    D.func1();
    Cat C;
    C.func1();
    return 0;
}
