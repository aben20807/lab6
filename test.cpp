#include<iostream>
using namespace std;

class A
{
friend class C;
    public:
        A():a1(1),a2(2)
        {
            cout<<"A ctor "<<a1<<" "<<a2<<endl;
        }
    private:
        int a1;
    protected:
        int a2;
};
class B:public A
{
    public:
        B()
        {
            cout<<"B ctor "<<a2<<endl;
        }
        //A objA;
};
class C
{
    A oA;
    public:
        C()
        {
            cout<<"C ctor "<<oA.a1<<" "<<oA.a2<<endl;
        }
};
class D:public C
{
    A ooA;
     public:
        D()
        {
            //cout<<"D ctor "<<ooA.a2<<endl;
        }
};
int main()
{
    A objA;
    cout<<endl;
    B objB;
    cout<<endl;
    C objC;
    cout<<endl;
    D objD;
    cout<<endl;
}
