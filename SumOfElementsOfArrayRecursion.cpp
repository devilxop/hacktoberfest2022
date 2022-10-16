// Sum of Elements of Array using recursion

#include <iostream>
using namespace std;

int sumArr(int*  arr, int size)
{


    // Base case
    if( size == 0){
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    // if you use post increment you will get error and in pre increment it will give
    // wrong output
    int remainingPart = sumArr( arr+1, size-1);

    int sum = arr[0] + remainingPart;

    return sum;
}

int main()
{
    int arr[5] = {1, 4, 2, 7, 3};

    cout << "Sum of Elements of Array is :" << sumArr(arr, 5) << endl;

    return 0;
}