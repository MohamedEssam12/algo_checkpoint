#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int charCount = 0;
    int wordCount = 0;
    int spaceCount = 0;
    int vowelCount = 0;

    cout<<"Please enter a string to be analyzed: ";
    getline(cin, str);

    cout<<str.length()<<endl;

    for (unsigned int i = 0; (str[i] != '.' && i < str.length()); i++)
    {
        if (str[i] != ' ')
        {
            if (str[i]=='a' || str[i]=='e' || str[i]=='u' || str[i]=='y' || str[i]=='i' || str[i]=='o')
            {
                vowelCount++;
            }
            
            charCount++;
        }
        else
        {
            if (charCount == 0 || str[i+1] == ' ')
            {
                continue;
            }
            spaceCount++;
        }
    }

    wordCount = spaceCount + 1;

    cout<<"The number of characters are: "<<charCount<<endl;
    cout<<"The number of spaces are: "<<spaceCount<<endl;
    cout<<"The number of words are: "<<wordCount<<endl;
    cout<<"The number of vowels are: "<<vowelCount<<endl;
}
