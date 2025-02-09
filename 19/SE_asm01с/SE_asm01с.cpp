#include <iostream>
#pragma comment(lib, "..\\Debug\\SE_asm01a.lib")
extern "C"
{
    int __stdcall getMin(int*, int);
    int __stdcall getMax(int*, int);
}

int main()
{
    int arr[10] = { 2, 6, 8, 87, 3, 1, 12, 9, 11, 15 };

    std::cout << "getmax + getmin = " << getMin(arr, 10) + getMax(arr, 10) << std::endl;
}