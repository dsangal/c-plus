//
//  main.cpp
//  BubbleSort
//
//  Created by Deryk Sangal on 8/7/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

#include <iostream>
using namespace std;

void bubbleSort(int A[], int n){
    int k;
    int i;
    int temp = 0;
    int flag;
    for (k = 0; k < n; k++){
        flag = 0;
        //cout << "first loop";
        for (i = 0; i < n-k; i++){
            if (A[i] > A[i + 1]){
          //      cout << temp << A[i] << endl;
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            //    cout << temp << A[i] << endl;
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
    for (int i =0; i < n; i++){
        cout << A[i] << " ";
        
    }
}

int main() {
    int array[5];
    
    for (int i = 0; i < 5; i++){
        if (i == 0){
            cout << "Enter a number: " << endl;
            cin >> array[i];
        }
        else{
            cout << "Enter another number " << endl;
            cin >> array[i];
        }
    }
    bubbleSort(array, 5);
}
