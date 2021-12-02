#include <iostream>
using namespace std;

int *createArray(int size)
{
    int *array = new int[size];

    std::cout << "Enter array: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    return array;
}

void swapElements(int *array, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (array[i] > array[size - 1 - i])
        {
            int temp = array[i];
            array[i] = array[size - 1 - i];
            array[size - 1 - i] = temp;
        }
    }
}

void print(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    int size;
    int *array;

    std::cout << "Enter size: ";
    std::cin >> size;

    array = createArray(size);

    swapElements(array, size);

    print(array, size);

    delete[] array;
}