#include <iostream>
using namespace std;

class Billionaire
{
    //acces specifier
    public:
    //data members
    string billionairename;
    long int networth;
    //member function
    void printdata()
    {
        cout<<"the billionaires name and networth is"<<billionairename<<" "<<networth;
    }
    
    
    
};
int main()
{
   Billionaire obj1;
   obj1.billionairename ="Aswinkumar";
   obj1.networth=5000000000;
   obj1.printdata();
   return 0;

    
}
