#include <iostream>
using namespace std;

const int SIZE = 5;

char *concat(char *firstString, int firstStringLength, char *secondString, int secondStringLength)
{
    char *result = new char[firstStringLength + secondStringLength];

    for (int i = 0; i < firstStringLength; i++)
    {
        result[i] = firstString[i];
    }

    for (int i = 0, j = firstStringLength; i < secondStringLength; i++, j++)
    {
        result[j] = secondString[i];
    }

    return result;
}

int main()
{
    char *startWord = new char[5]{'P', 'e', 's', 'h', 'o'};
    int startWordLength = 5;
    char *addedWord = new char[8]{' ', 'i', 's', ' ', 'c', 'o', 'o', 'l'};
    int addedWordLength = 8;
    char *result;

    result = concat(startWord, startWordLength, addedWord, addedWordLength);

    for (int i = 0; i < (startWordLength + addedWordLength); i++)
    {
        std::cout << result[i];
    }

    delete[] startWord;
    delete[] addedWord;
    delete[] result;
}
