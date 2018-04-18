#include <iostream>
using namespace std;
class Billionaire
{
    //acces specifier
    public:
    //data members
    string billionairename;
    long int networth;
    string type;
    void printdata();
};
//member function
//since member function is outside the class we are accessing the data members using scope resoulution operator
void Billionaire::printdata()
    {
        cout<<"the billionaires name,networth and type is"<<billionairename<<endl<<networth<<endl<<type;
    }
int main()
{
   Billionaire obj1;
   obj1.billionairename ="Aswinkumar";
   obj1.networth=5000000000;
   obj1.type="Technology";
   obj1.printdata();
   return 0;

}
