#include <iostream>
using namespace std;
int sum(int, int);//Declaring function at first and explaning it later is know as function prototype
int main()
{
    int num1 = 10;
    int num2 = 7;
    cout<<sum(num1, num2);

    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}