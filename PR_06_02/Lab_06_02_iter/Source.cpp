#include <iostream>

int* initArray(int size);
void printArray(int* array, int size);
void solve(int*& array, int size);

int main() 
{
    int size;
    std::cout << "Input array size:\n";
    std::cin >> size;
    int* array = initArray(size);
    printArray(array, size);
    solve(array, size);
    std::cout << "\nAfter:\n";
    printArray(array, size);
}

int* initArray(int size) 
{
    int* array = new int[size];
    for (int i = 0; i < size; i++) 
    {
        array[i] = rand() % 10;
    }
    return array;
}

void printArray(int* array, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << array[i] << ' ';
    }
}

void solve(int*& array, int size) 
{
    for (int i = 0; i < size - 1; i += 2) 
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}
