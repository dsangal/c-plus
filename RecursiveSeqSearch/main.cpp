//
//  main.cpp
//  Lab7
//
//  Created by Deryk Sangal on 4/13/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

#include<iostream>
#include "recursiveSeqSearch.h"

using namespace std;

int main ()
{
    // Constants and Variables
    int const arraySize = 8;
    int intSearch;
    int searchReturnCode;
    int intList[8] = {11, 12, 27, 28, 29, 45, 38, 37};
    
    // Display array list
    cout << "List of Numbers: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << intList[i] << " ";
    }
    cout << endl << endl;
    
    // Ask user to enter number to be searched
    cout << "Please enter the value to be searched: ";
    cin >> intSearch;
    
    // Call recursive sequential search function
    searchReturnCode = recursiveSeqSearch(intList, arraySize, intSearch);
    
    // Check return code returned by recursive sequential search function
    if (searchReturnCode < 0)
    {
        cout << endl << "Number " << intSearch << " is not found." << endl;
    }
    else
    {
        cout << endl << "Number " << intSearch << " is at location "
             << searchReturnCode + 1 << "." << endl;
    }
    
    cout << endl;
    
    return 0;
}





