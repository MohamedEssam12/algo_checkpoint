#include <algorithm>
#include <string.h>
#include <iostream>
using namespace std;


// INSERTION SORT
void insertion_sort (int a[], int length);


int main ()
{
    int ary[9];

    for (int i = 0; i < 9; i++)
    {
        cout<<"please enter the value in idex "<<i<<" : ";
        cin>>ary[i];
    }

    insertion_sort(ary, 9);
    for (int x = 0; x < 9; x++)
    {
        cout<<ary[x]<<endl;
    }
    
    
}

void insertion_sort (int a[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int temp=a[i];
        int j = i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    
    
}