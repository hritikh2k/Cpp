#include <iostream>
using namespace std;
// void swap(int a,int b){ //This function will not swap the number because 
//     int c=0;            //the actual perameter send the copy to a and b here
//     c=a;
//     a=b;
//     b=c
// }

void swapPointer(int *a,int *b){ //This function will swap the number because 
    int c=0;                     //we use the address of actual perameter to swap using pointer 
    c=*a;                        //this is know as call by value
    *a=*b;
    *b=c;    
    
}
int main() {
    int num1=4;
    int num2=5;
    cout<<"The value of a is" <<num1<<"and b is"<<num2<<endl;    
    //swap(num1,num2);
    swapPointer(&num1,&num2);
    cout<<"after swap" <<endl;    
    cout<<"The value of a is" <<num1<<"and b is"<<num2<<endl;    

return 0;
}