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
    char s[20], sm[20];
    int n = 0, max = 0, l = 1;

    do
    {
        std::cin >> s;
        n = strlen(s);
        if (s[n - 1] == '.')
        {
            s[n - 1] = '\0';
            l = 0;
            n--;
        }
        if (n > max)
        {
            max = n;
            strcpy(sm, s);
        }
    } while (l);
    
    std::cout << sm << std::endl;
}