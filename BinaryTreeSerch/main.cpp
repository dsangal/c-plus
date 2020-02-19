//
//  main.cpp
//  Lab9
//
//  Created by Deryk Sangal on 5/12/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

#include<iostream>
#include "binaryTreeSearch.h"

using namespace std;

int main()
{
    treeNode *root = NULL,*temp;
    
    int userChoice;
    int numberEntered;
    
    cout << "1. Insert node 2. Delete node 3. Search for a node" << endl;
    cout << "4. Get minimum  5. Get maximum  " << endl;
    cout << "6. Pre-order  7. Post-order  8. In-order  9. Exit" << endl;
    cout << endl;
    
    do
    {
        cout << "Enter choice: ";
        cin >> userChoice;
        numberEntered = -1;
        
        switch(userChoice)
        {
            // Insert node
            case 1:
                cout << "Enter number to be inserted: ";
                cin >> numberEntered;
                root = insertNode(root, numberEntered);
                
                cout << "Numbers in binary search tree: ";
                inOrderTraverse(root);
                cout << endl << endl;
                break;
                
            // Delete node
            case 2:
                cout << "Enter number to be deleted: ";
                cin >> numberEntered;
                root = deleteNode(root,numberEntered);
                
                cout << "After deletion, numbers in binary search tree: ";
                inOrderTraverse(root);
                cout << endl << endl;
                break;
                
            // Search for a number
            case 3:
                cout << "Enter number to be searched: ";
                cin >> numberEntered;
                
                temp = findNode(root,numberEntered);
                
                if (temp == NULL)
                {
                    cout << "Number " << numberEntered << " is not found.";
                }
                else
                {
                    cout << "Number " << numberEntered << " is found.";
                }
                cout << endl << endl;
                break;
                
            // Get minimum number
            case 4:
                temp = getMinimum(root);
                cout << "Minimum number in binary search tree: " << temp->data;
                cout << endl << endl;
                break;
                
            // Get maximum number
            case 5:
                temp = getMaximum(root);
                cout << "Maximum number in binary search tree: " << temp->data;
                cout << endl << endl;
                break;
                
            // Pre-order traversal
            case 6:
                cout << "Pre-order traversal list: ";
                preOrderTraverse(root);
                cout << endl << endl;
                break;
                
            // Post-order traversal
            case 7:
                cout << "Post-order traversal list: ";
                postOrderTraverse(root);
                cout << endl << endl;
                break;
                
            // In-order traversal
            case 8:
                cout << "In-order travesal list: ";
                inOrderTraverse(root);
                cout << endl << endl;
                break;
                
            // Exit
            case 9:
                cout << "Exit";
                cout << endl << endl;
                exit(0);
                break;
                
            default:
                cout << "Invalid choice" << endl << endl;
                break;
        }
        
    }
    
    while (userChoice != 9);
    
    return 0;
    
}






