#include <iostream>
using namespace std;

size_t strlen(const char *text)
{
    size_t len = 0;

    while (text[len]) {
        ++len;
    }

    return len;
}

void strcpy(char *dest, const char *src)
{
    int pos = 0;
    while (src[pos])
    {
        dest[pos] = src[pos];
        ++pos;
    }
    dest[pos] = '\0';
}

int main()
{
    char arr[20], cpyarr[20];
    int n = 0, max = 0, l = 1;

    do
    {
        std::cin >> arr;
        n = strlen(arr);
        if (arr[n - 1] == '.')
        {
            arr[n - 1] = '\0';
            l = 0;
            n--;
        }
        if (n > max)
        {
            max = n;
            strcpy(cpyarr, arr);
        }
    } while (l);
    
    std::cout << cpyarr << std::endl;
}