#include <iostream>
using namespace std;

//Made by Georgi Krastenov :)

int main()
{
    const int firstSize = 128;
    const int secondSize = 64;

    int firstLength;
    int secondLength;

    cout << "First length:" << endl;
    cin >> firstLength;
    cout << "Second length:" << endl;
    cin >> secondLength;

    char first[firstSize];
    char second[secondSize];

    cout << "Write your first string" << endl;
    for (int i = 0; i < firstLength; i++)
    {
        cin >> first[i];
    }

    cout << "Write your second string" << endl;
    for (int i = 0; i < secondLength; i++)
    {
        cin >> second[i];
    }

    int result = 0;
    for (int i = 0; i < firstLength; i++)
    {
        int index = i;
        bool flag = false;
        for (int j = 0; j < secondLength; j++)
        {
            if (first[index] == second[j])
            {
                flag = true;
                index++;
                continue;
            }
            else {
                flag = false;
                break;
            }       
        }
        if (flag)
        {
            result++;
            i = i + secondLength - 1;
        }
    }

    cout << "The result is: " << result << endl;

}
