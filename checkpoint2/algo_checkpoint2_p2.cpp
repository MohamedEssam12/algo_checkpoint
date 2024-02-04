#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;


// PROBLEM 2

// fuction with no return (procedure)
void dot_product(int ary1[4], int ary2[4]){
    int ps = 0;

    // getting the dot product of 2 vectors
    for (unsigned int i = 0, j= 0; (i < 4) && (j<4); i++, j++)
    {
        ps = ps + (ary1[i]*ary2[j]);
    }
    cout<<"the dot product of the vectors = "<<ps<<endl;

    // checking if the dot product of the two vectors is orthogonal
    if (ps==0)
    {
        cout<<"the dot product of the vectors is orthogonal";
    }
    
    
}

int main ()
{
    int aryA[4], aryB[4];

    for (unsigned int x = 0; x < 4; x++)
    {
        cout<<"Please enter arrayA value"<<x<<": ";
        cin>>aryA[x];
    }

    for (unsigned int y = 0; y < 4; y++)
    {
        cout<<"Please enter arrayB value"<<y<<": ";
        cin>>aryB[y];
    }

    // calling the function
    dot_product (aryA,aryB);
    
}