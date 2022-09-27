#include <iostream>

using namespace std;

string removeSpecialChars(string wrongStr);

int main()
{
    cout << removeSpecialChars("Hell*+o@ W##orld@=] 20'2/=2");
    return 0;
}

string removeSpecialChars(string wrongStr)
{
    string correctStr;
    char correctChars[63] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                             'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                             '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ' '};

    for (int i = 0; i < wrongStr.length(); i++)
    {
        for (int j = 0; j < 63; j++)
        {
            if (wrongStr[i] == correctChars[j]) //compare two chars
            {
                correctStr += wrongStr[i];
                break;
            }
        }
    }

    return correctStr;
}
