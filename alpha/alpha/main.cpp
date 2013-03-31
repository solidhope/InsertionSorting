

#include <iostream>
#include "InsertionSort.h"
using namespace std;

int main() {
    
    int array[10]= {5, 4, 3, 2, 1, 44, 68, 34, 8, 100};
    
    insertionSort(array, 10);
    cout << endl;
    
    return 0;
}