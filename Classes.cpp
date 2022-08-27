#include <iostream>
using namespace std;
class school{
    private:
    int pin;
    int mobile_no;
    public:
    int ID;
    int classNo;
    void setdata(int pin1,int mobile_no1);
    void getdata();

};
void school::setdata(int pin1,int mobile_no1)
{
        pin = pin1;
        mobile_no = mobile_no1; 
         }
void school::getdata(){
        cout<<"ID = "<<ID<<endl;
    cout<<"ClassNo = "<<classNo<<endl;
    cout<<"PIN = "<<pin<<endl;
    cout<<"Mobile number  = "<<mobile_no<<endl;

}
int main() {
    school Hritik;
    Hritik.ID=2002;
    Hritik.classNo=12;
    Hritik.setdata(123,780777);
    Hritik.getdata();
return 0;
}