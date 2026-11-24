#include <iostream>
using namespace std;

int first()
{
    int head{1}, position{0};                 // head — состояние (0 = стоп), position — где головка
    char arr[] = {' ', '1', '0', '1', '1', ' ', '\0'};  // лента: число 1011
    char alp[] = {'0', '1', ' '};             // алфавит: 0, 1, пробел

    while (head)
    {
        if (head == 1)                        // состояние 1: идём вправо до пробела
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
            {
                position += 1;
            }
            else if (arr[position] == alp[2])
            {
                position -= 1;
                head = 2;
            }
        }
        else if (head == 2)                   // состояние 2: идём влево и прибавляем 1
        {
            if (arr[position] == alp[1])
            {
                arr[position] = alp[0];
                position -= 1;
            }
            else if (arr[position] == alp[0])
            {
                arr[position] = alp[1];
                head = 0;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[1];
                head = 0;
            }
        }
    }
    cout << "1. " << arr << " \n";
    return 0;
}

int second()
{
    int head{1}, position{0};
    char arr[] = {' ', '1', '0', '1', '1', '1', ' ', '\0'};  // число 10111
    char alp[] = {'0', '1', ' '};

    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
            {
                position += 1;
            }
            else if (arr[position] == alp[2])
            {
                position -= 1;
                head = 2;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[1])
            {
                arr[position] = alp[0];
                position -= 1;
            }
            else if (arr[position] == alp[0])
            {
                arr[position] = alp[1];
                head = 0;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[1];
                head = 0;
            }
        }
    }
    cout << "2. " << arr << " \n";
    return 0;
}

int third()
{
    int head{1}, position{0};
    char arr[] = {' ', '1', '1', '1', '1', ' ', '\0'};  // число 1111
    char alp[] = {'0', '1', ' '};

    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
            {
                position += 1;
            }
            else if (arr[position] == alp[2])
            {
                position -= 1;
                head = 2;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[1])
            {
                arr[position] = alp[0];
                position -= 1;
            }
            else if (arr[position] == alp[0])
            {
                arr[position] = alp[1];
                head = 0;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[1];
                head = 0;
            }
        }
    }
    cout << "3. " << arr << " \n";
    return 0;
}

int fourth()
{
    int head{1}, position{0};
    char arr[] = {' ', '1', '1', '1', '1', '1', ' ', '\0'};  // число 11111
    char alp[] = {'0', '1', ' '};

    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
            {
                position += 1;
            }
            else if (arr[position] == alp[2])
            {
                position -= 1;
                head = 2;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[1])
            {
                arr[position] = alp[0];
                position -= 1;
            }
            else if (arr[position] == alp[0])
            {
                arr[position] = alp[1];
                head = 0;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[1];
                head = 0;
            }
        }
    }
    cout << "4. " << arr << " \n";
    return 0;
}

int main()
{
    first();
    second();
    third();
    fourth();
}