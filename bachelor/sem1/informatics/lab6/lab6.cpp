#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    cout << "Enter string: ";
    gets(s);

    int len = strlen(s);
    int i = 0;

    while (i < len)
    {
        while (i < len && s[i] == ' ') i++;
        if (i >= len) break;
        if (s[i] == '.') break;

        char word[256];
        int w = 0;

        while (i < len && s[i] != ' ' && s[i] != '.')
        {
            word[w] = s[i];
            w++;
            i++;
        }
        word[w] = '\0';

        int digitsOnly = 1;
        for (int j = 0; j < w; j++)
        {
            if (word[j] < '0' || word[j] > '9')
            {
                digitsOnly = 0;
            }
        }

        if (digitsOnly == 1)
        {
            continue;
        }

        if (word[0] >= '0' && word[0] <= '9')
        {
            cout << "_";
        }

        cout << word << " ";
    }

    cout << endl;
    return 0;
}