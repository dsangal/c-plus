//
//  selectionSort.h
//  Lab8
//
//  Created by Deryk Sangal on 4/27/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

#ifndef selectionSort_h
#define selectionSort_h

using namespace std;

int selection_sort(int intList[], int arraySize)
{
    int max;
    int temp;
    
    // Return a -1 if array is empty
    if (arraySize == 0)
        return -1;
    else
    {
        // Loop through the array
        for (int i = 0; i < arraySize - 1; i++)
        {
            max = i;
            
            /* check the element to be maximum */
            for (int j = i+1; j < arraySize; j++)
            {
                if (intList[j] > intList[max])
                {
                    max = j;
                }
            }
            
            /* swap the maximum element with the current element*/
            if (max != i)
            {
                temp         = intList[max];
                intList[max] = intList[i];
                intList[i]   = temp;
            }
         }
    }
    
    cout << "Sorted List in Descending Order: " << endl;
    
    for (int i = 0; i < arraySize; i++)
    {
        cout << intList[i] << " ";
    }
    
    cout << endl << endl;
    
    return 0;
}
#endif /* selectionSort_h */
