#include <iostream>
#include <string>
using namespace std;
class rtd{
    private:
    string s;
    void check(void);
    void convert(void);
    public:
    int value(char r);
    void getdata(void);
    void display(void);
};
int main() {
rtd num1;
num1.getdata();
return 0;
}
void rtd ::getdata(void){
    cout<<"Enter the roman number : ";
    cin>>s;
    check();
}
void rtd ::check(void){
    for (int i=0;i<s.length();i++){
        if (s.at(i)!='I'&& s.at(i)!='V'&& s.at(i)!='X'&&s.at(i)!='L'&&s.at(i)!='C'&&s.at(i)!='D'&&s.at(i)!='M'){
            cout<<"Wrong Roman format";
            exit(0);
        }
    }   
convert();
}
void rtd ::convert(void){
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        int s1 = value(s[i]);
 
        if (i + 1 < s.length()) {
            int s2 = value(s[i + 1]);
         if (s1 >= s2) {
                res = res + s1;
            }
        else {
                res = res + s2 - s1;
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    cout<<res;
}
int rtd ::value(char r){
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
}