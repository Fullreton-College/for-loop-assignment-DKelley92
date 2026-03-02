#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
//Title Name

   cout<<"Sales Data of 5 Stores"<<endl<<endl;

// Body

   const int stores = 5;
   double sales [stores];

   for (int i=0; i<stores; i++)
      {
         cout<<"Enter today's sales for store #" << (i+1) <<": $";
         cin>> sales[i];
      }

   cout<<"\nSales Chart\n";
   
   for (int i=0; i<stores; i++)
      {
         cout<<"Stores "<<(i+1) << ": ";

         int stars = sales[i] / 100;

         for (int j=0; j<stars; j++)
            {
               cout<<"*";
            }
         cout<<endl;
      }

   return 0;
}