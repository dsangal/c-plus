//
//  main.cpp
//  InsertionSort
//
//  Created by Deryk Sangal on 8/7/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

#include <iostream>

using namespace std;

void insertionSort(int A[], int n){
    int value;
    int index;
    for (int i = 1; i < n; i++){
        value = A[i];
        index = i;
        while (index > 0 && A[index-1] > value){
            A[index] = A[index-1];
            index = index -1;
        }
        A[index] = value;
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
    insertionSort(array, 10);
}

