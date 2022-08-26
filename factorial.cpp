#include <iostream>
using namespace std;
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
}
int main() {
int num1=0;
cout<<"Enter the number=";
cin>>num1;
cout<<"The factorial of "<<num1<<" is = "<<factorial(num1);

return 0;
}