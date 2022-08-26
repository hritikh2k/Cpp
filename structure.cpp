#include <iostream>
using namespace std;
typedef struct employee{                   //typedef is use for shortcut   
    int eID;                               //basic syntax of struture
    float salary;
}ep;                             

int main() {
ep Hritik;                            //if typedef is not use we have to write employee Hritik 
Hritik.eID=1;                                      
Hritik.salary=1200000;
cout<<Hritik.eID<<endl;
cout<<Hritik.salary<<endl;
return 0;
}