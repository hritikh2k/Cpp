#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setdata(int n1, int n2);
    void display();
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 4);
    c1.display();
    c2.setdata(5, 6);
    c2.display();
    c3=sumcomplex(c1, c2);
    c3.display();
    return 0;
}
void complex ::setdata(int n1, int n2)
{
    a = n1;
    b = n2;
}
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
void complex ::display()
{
    cout << "The complex number is " << a << "+" << b << "i" << endl;
}