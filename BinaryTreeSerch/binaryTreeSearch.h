//
//  binaryTreeSearch.h
//  Lab9
//
//  Created by Deryk Sangal on 5/12/19.
//  Copyright © 2019 Deryk Sangal. All rights reserved.
//

#ifndef binaryTreeSearch_h
#define binaryTreeSearch_h

using namespace std;

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};

treeNode* insertNode(treeNode *node,int data)
{
    // If node is empty, insert first node and return
    if (node == NULL)
    {
        treeNode *temp;
        temp             = new treeNode;
        temp -> data     = data;
        temp -> left     = NULL;
        temp -> right     = NULL;
        return temp;
    }
    
    // If node is not empty, check if data is greater.
    // If greater, insert to the right.
    if (data > (node->data))
    {
        node->right = insertNode(node->right,data);
    }
    else
    {
        // If less, insert to the left.
        if (data < (node->data))
        {
            node->left = insertNode(node->left,data);
        }
    }
    
    // If equal, nothing to do.  Data is already in the tree.
    
    return node;
}

treeNode* getMinimum(treeNode *node)
{
    // Empty node
    if (node == NULL)
    {
        return NULL;
    }
    
    // If there are children on the left, call function until the end of the left node
    if (node->left)
        return getMinimum(node->left);
    else
        return node;
}

treeNode* getMaximum(treeNode *node)
{
    // Empty node
    if (node == NULL)
    {
        return NULL;
    }
    
    // If there are children on the right, call function until the end of the right node
    if (node->right)
        return(getMaximum(node->right));
    else
        return node;
}

treeNode* deleteNode(treeNode *node, int data)
{
    treeNode *temp;
    
    // If node is empty, there is nothing to delete.
    if (node == NULL)
    {
        cout << "Element " << data << " is not found." << endl;
    }
    else
        // If element is less than the node, go to the left
        if (data < node->data)
        {
            node->left = deleteNode(node->left, data);
        }
        else
            // If element is greater than the node, go to the right
            if (data > node->data)
            {
                node->right = deleteNode(node->right, data);
            }
            else
            {
                // If element is equal to the node, then delete the node
                // by replacing with minimum on the right tree.
                
                // If there is a right node or left node (with children)
                if (node->right && node->left)
                {
                    // Replace with minimum on the right tree
                    temp = getMinimum(node->right);
                    node -> data = temp->data;
                    
                    // Delete the node with the minimum on the right tree
                    // because data was moved to the deleted one
                    node -> right = deleteNode(node->right,temp->data);
                }
                else
                {
                    // If no children, delete that node.
                    temp = node;
                    
                    if (node->left == NULL)
                        node = node->right;
                    else
                        if (node->right == NULL)
                            node = node->left;
                    
                    free(temp);
                }
            }
    
    return node;
}

treeNode* findNode(treeNode *node, int data)
{
    // Empty node
    if (node == NULL)
    {
        // Element is not found
        return NULL;
    }
    
    // Data is greater than node data
    if (data > node->data)
    {
        // Search in the right sub tree.
        return findNode(node->right,data);
    }
    else
        // Data is less than node data
        if (data < node->data)
        {
            // Search in the left sub tree.
            return findNode(node->left,data);
        }
        else
        {
            // Data is equal to the node data - element found
            return node;
        }
}

void preOrderTraverse(treeNode *node)
{
    if (node == NULL)
    {
        return;
    }
    
    cout << node->data << " ";
    
    preOrderTraverse(node->left);
    preOrderTraverse(node->right);
}

void postOrderTraverse(treeNode *node)
{
    if (node == NULL)
    {
        return;
    }
    
    postOrderTraverse(node->left);
    postOrderTraverse(node->right);
    
    cout << node->data << " ";
}

void inOrderTraverse(treeNode *node)
{
    if (node == NULL)
    {
        return;
    }
    
    inOrderTraverse(node->left);
    cout << node->data << " ";
    inOrderTraverse(node->right);
}

#endif /* binaryTreeSearch_h */
