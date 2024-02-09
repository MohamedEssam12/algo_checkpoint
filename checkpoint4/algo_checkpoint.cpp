#include <algorithm>
#include <string.h>
#include <iostream>
using namespace std;

// CHECKING THE STRING IS ONE CHARACTER OR NOT
bool chkonecharstr (char str[], int i, int j)
{
    if (i==j)
    {
        return true;
    }

    // CHECKING THE FIRST VALUE IN THE STRING DOES NOT MATCH THE LAST ONE
    if (str[i] != str[j])
    {
        return false;
    }

    // THE BREAK POINT IS THE END LENGTH OF THE STRING
    if (i < j+1)
    {
        return chkonecharstr (str, i+1, j-1);
    }
    return true;
    
}

// CHECKING THE STRING IS EMPTY OR NOT
bool emptystr (char str[])
{
    int x = strlen(str);

    if (x==0)
    {
        return true;
    }

    return chkonecharstr (str, 0 , x-1);
}

int main ()
{
    char string[] = "radar";
    if (emptystr(string))
    {
        cout<<"The string is palindrome";
    }
    else
    {
        cout<<"The string is not palindrome";
    }
}