#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// Title

    cout<<"Two Interger Increments"<<endl<<endl;

//Body

    int start_num, end_num;
    
    cout<<"Choose two intergers (whole numbers):"<<endl;
    cin>> start_num >> end_num;

    cout<<endl;

    if (start_num <= end_num)
        {
            for (int i = start_num; i <= end_num; i+=5)
                {
                    cout << i <<" ";
                }
            cout<<endl;
        }

return 0;
}
