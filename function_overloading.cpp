#include <iostream>
using namespace std;                                      //This if function overloading
float volume(float length,float breath,float height){     //it uses the same function name 
    // volume of cuboid                                   //but compare the function by its arguments
    return( length*breath*height);                         
}
float volume(float radius,float height){
    // volume of cylinder
    return(22/7*radius*height);    
}
float volume(float side){
    // volume of cube
    return(side*side*side);
}
int main() {
cout<<"The volume of cube is "<<volume(3)<<endl;
cout<<"The volume of cubiod is "<<volume(3,4,5)<<endl;
cout<<"The volume of cylinder is "<<volume(3,4)<<endl;
return 0;
}