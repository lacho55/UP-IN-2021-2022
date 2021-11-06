#include <iostream>

// Made by Veronika Racheva

int main()
{
    int n;
    char a[20];
    int sumEven = 0;
    int sumOdd = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];

        if (i % 2 == 0) {
            sumEven = sumEven + int(a[i]);
        }

        if (i % 2 != 0) {
            sumOdd = sumOdd + int(a[i]);
        }


    }
    if (sumEven >= sumOdd) {

        if (sumEven % sumOdd == 0) {
            std::cout << "Yes" << std::endl;
        }
        else {
            std::cout << "No" << std::endl;
        }
    }

    if (sumOdd >= sumEven) {

        if (sumOdd % sumEven == 0) {
            std::cout << "Yes" << std::endl;
        }
        else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
