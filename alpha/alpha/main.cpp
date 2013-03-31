#include <iostream>
using namespace std;

void printArr(int array[], int size) {
    
    cout << endl;
    cout<< "Sorting..... \n";
    int j;
    
    for (j = 0; j < size; j++)
        
    cout << " " << array[j];
    cout << endl;
    
}

void insertionSort(int arr[], int length) {
    
    int i, j , tmp;
    
    for (i = 1; i < length; i++) {
        
        j = i;
        
        while (j > 0 && arr[j - 1] > arr[j]) {
            
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
        
        printArr(arr, 10);
    }
}

int main() {
    
    int array[10]= {5, 4, 3, 2, 1, 44, 68, 34, 8, 100};
    
    insertionSort(array, 10);
    cout << endl;
    
    return 0;
}