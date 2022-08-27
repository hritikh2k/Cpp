#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void checkbinary(void);

public:
    void getstring(void);
    void compliment(void);
    void display(void);
};
int main()
{
    binary b;
    b.getstring();
    b.compliment();
    b.display();
    return 0;
}
void binary::getstring(void)
{
    cout << "Enter the binary number:";
    cin >> s;
}
void binary::checkbinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary::compliment(void)
{
    checkbinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
        cout << "The number display";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}