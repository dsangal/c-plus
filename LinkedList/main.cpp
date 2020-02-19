//
//  main.cpp
//  Lab 3
//
//  Created by Deryk Sangal on 3/4/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

//Programming Exercise 2: Test Program
#include <iostream>
#include "unorderedLinkedList.h"

using namespace std;

int main()
{
    unorderedLinkedList<int> list;
    int num;
    
    cout << "Enter numbers ending with -999" << endl;
    cin >> num;
    while (num != -999)
    {
        list.insertLast(num);
        cin >> num;
    }
    cout << endl;
    
    cout << "List: ";
    list.print();
    cout << endl;
    
    cout << "Length of the list: " << list.length() << endl;
    cout << endl;
    
    cout << "****====================*****" << endl;
    cout << "**** deleteAll testing  *****" << endl;
    cout << "****====================*****" << endl;
    cout << endl;
    
    // Ask user to enter number to be deleted
    cout << "Enter the number to be deleted: ";
    cin >> num;
    cout << endl;
    
    // Call deleteAll function to delete all occurrences
    // of entered number
    list.deleteAll(num);
    
    // Display list after deleting
    cout << "List after deleting " << num << ": ";
    list.print();
    cout << endl;
    cout << endl;
    
    cout << "****=========================*****" << endl;
    cout << "**** deleteSmallest testing  *****" << endl;
    cout << "****=========================*****" << endl;
    cout << endl;
    
    // Call deleteSmallest function to delete smallest
    // number from the list
    list.deleteSmallest();
    
    // Display list after deleting smallest
    cout << "List after deleting the smallest" << ": ";
    list.print();
    cout << endl;
    
    return 0;
}


