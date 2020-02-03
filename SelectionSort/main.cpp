//
//  main.cpp
//  SelectionSort
//
//  Created by Deryk Sangal on 8/7/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//
#include <iostream>
using namespace std;
void selectionSort(int A[], int n){
    int i, j, small, temp; // variables to traverse array and compare
    for (i = 0; i < n-1; i++){ // int i = left-most element
        small = i;
        for (j = i + 1; j < n; j++){ // int j = used to compare element to int small
            if (A[j] < A[small]){
                small = j; // element that j is holding is now smallest element
            }
            //swap the elements:
            temp = A[i];
            A[i] = A[small];
            A[small] = temp;
        }
    }
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    
}
int main() {
    int array[10];
    
    for (int i = 0; i < 10; i++){
        if (i == 0){
            cout << "Enter a number: " << endl;
            cin >> array[i];
        }
        else{
            cout << "Enter another number " << endl;
            cin >> array[i];
        }
    }
    selectionSort(array, 10);
    
    
}
