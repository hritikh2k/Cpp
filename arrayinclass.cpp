#include <iostream>
using namespace std;
class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter = 0;

public:
    void initcounter(void) { counter = 0; }
    void getprice(void);
    void display(void);
};
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.getprice();
    dukaan.getprice();
    dukaan.getprice();
    dukaan.display();
    return 0;
}
void shop ::getprice(void)
{
    cout << "Enter the id of " << counter + 1<<" : ";
    cin >> itemid[counter];
    cout << "Enter the price";
    cin >> itemprice[counter];
    counter++;
}
void shop ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item id" << itemid[i] << "is" << itemprice[i] << endl;
    }
}