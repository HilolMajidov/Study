#include "headers.hpp"

void printArray(int arr[][4], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout <<"===========================" << "\n";
}

void printMatrix(int arr[][7], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 7; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout <<"===========================" << "\n";
}

void fillMatrix(int arr[][4], int rows) {
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 4; j++){
            arr[i][j] = rand() % 15;
        }
    }
}

void sortArray(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++){
        for(int j = i+1; j < size ; j++){
            if(arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

void copyArray(int arr[], int size, int arr2[]){

    int sum = 0;
    for(int i = 0; i < size; i++){
        arr2[i] = arr[i];
        sum += arr[i];
    }
    arr2[size] =  arr[0];
    arr2[size + 1] = arr[size - 1];
    arr2[size + 2] =  sum;
}

void sortMatrix(int arr[][7], int rows){
    for(int k = 0; k < rows; k++){
        for(int i = 0; i < rows - 1; i++){
            if(arr[i][6] > arr[i + 1][6]){
                for(int j = 0; j < 7; j++){
                    int templ = arr[i][j];
                    arr[i][j] = arr[i+1][j];
                    arr[i+1][j] = templ;                    
                }
            }
        }
    }
}