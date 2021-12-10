#include <iostream>

void initArray(int*& array, int size, int index);
void printArray(int* array, int size, int index);
void solve(int*& array, int size, int index);

int main() 
{
    int size;
    std::cout << "Input array size:\t";
    std::cin >> size;
    int* array = new int[size];
    initArray(array, size, 0);
    std::cout << "Before: ";
    printArray(array, size, 0);
    solve(array, size, 0);
    std::cout << "\nAfter: ";
    printArray(array, size, 0);
}

void initArray(int*& array, int size, int index) 
{
    if (index < size) 
    {
        array[index] = rand() % 13 + 4;
        if (index + 1 >= size) 
        {
            return;
        }
        else 
        {
            initArray(array, size, index + 1);
        }
    }
}

void printArray(int* array, int size, int index) 
{
    if (index < size) 
    {
        std::cout << array[index] << " ";
        if (index + 1 >= size) 
        {
            return;
        }
        else 
        {
            printArray(array, size, index + 1);
        }
    }
    else 
    {
        return;
    }
}

void solve(int*& array, int size, int index) 
{

    if (index < (size - 1)) 
    {
        int temp = array[index + 1];
        array[index + 1] = array[index];
        array[index] = temp;
        if (index + 2 >= size - 1) 
        {
            return;
        }
        else 
        {
            solve(array, size, index + 2);
        }
    }
}
