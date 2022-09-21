#include <iostream>
#include <string>

using namespace std;

string pigLatin(string engStr);
string pigLatinWord(string engWrd);

int main()
{
    string engStr, plStr;
    cout<<"Insert english sentence: ";
    getline(cin, engStr);
    plStr = pigLatin(engStr);
    cout << plStr << endl;
    return 0;
}

string pigLatin(string engStr)
{
    string plStr, word, plWord;
    for (int i = 0; i < engStr.length(); i++)
    {
        if (engStr[i] == ' ')
        {
            plWord = pigLatinWord(word);
            plStr = plStr + plWord + ' ';
            word = "";
            plWord = "";
            continue;
        }
        word = word + engStr[i];
    }
    plWord = pigLatinWord(word);
    plStr = plStr + plWord + ' ';

    return plStr;
}

string pigLatinWord(string engWrd)
{
    string plWord;
    for (int i = 1; i < engWrd.length(); i++)
    {
        plWord = plWord + engWrd[i];
    }
    plWord = plWord + engWrd[0] + "ay";
    return plWord;
}