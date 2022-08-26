#include <iostream>
using namespace std;
int fib(int a){
    int c;
    if (a<2){
        return 1;
    }
    return fib(a-2)+fib(a-1);
}
int main() {
int num1=0;
cout<<"Enter the number=";
cin>>num1;
cout<<"The number "<<num1<<" at fibonacci series is = "<<fib(num1);
return 0;
}