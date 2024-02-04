#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    // PROBLEM 1
    int ary1[4] , ary2[5];
    int sum = 0;
    unsigned int i = 0 , j = 0;
    
    for (i = 0; i < 4; i++)
    {
        cout <<"please enter array1 values " <<i<<": ";
        cin>>ary1[i];
    }
    for (j = 0; j < 5; j++)
    {
        cout <<"please enter array2 values " <<j<<": ";
        cin>>ary2[j];
    }
    
    
    // comparing each value in array one with all values in array 2 to get the distinct values in the first array
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (ary1[i] == ary2[j])
            {
                break;
            }
            // getting the sum of the distinct values
            else if ((ary1[i] != ary2[j]) && (j==4))
            {
                sum = sum + ary1[i];
            }
            
        }
        
    }

    cout<<"the first sum equals "<<sum<<endl;
    
    // comparing each value in array two with all values in array one to get the distinct values in the second array
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i< 4; i++)
        {
            if (ary2[j] == ary1[i])
            {
                break;
            }
            else
            {
                // getting the sum of the distinct values
                if (i==3)
                {
                    sum = sum + ary2[j];
                }
            }
            
        }
        
    }
    
    cout<<"the sum equals "<<sum<<endl;
}