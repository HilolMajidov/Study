#include "headers.hpp"
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[3][4];
    int arr2[3][7];

    fillMatrix(arr,3);
    printArray(arr,3);

    for(int i = 0; i < 3; i++){
        sortArray(arr[i], 4);
    }
    printArray(arr,3);

    for(int i = 0; i < 3; i++) {
        copyArray(arr[i], 4, arr2[i]);
    }
    printMatrix(arr2, 3);

    sortMatrix(arr2, 3);

    printMatrix(arr2, 3);

    return 0;
}