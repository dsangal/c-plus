//
//  recursiveSeqSearch.h
//  Lab7
//
//  Created by Deryk Sangal on 4/13/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

#ifndef recursiveSeqSearch_h
#define recursiveSeqSearch_h

#include <string>

using namespace std;

int recursiveSeqSearch(int intArray[], int arraySize, int searchValue)
{
    // Return a -1 if array is empty
    if (arraySize == 0)
        return -1;
    else
        // If value being search is found, return position
        if (searchValue == intArray[arraySize - 1])
            return arraySize - 1;
        else
            // If value being search is not found yet, call function again.
            // Call with index before the last call.
            return recursiveSeqSearch(intArray, arraySize - 1, searchValue);
}

#endif /* recursiveSeqSearch_h */
