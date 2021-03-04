#ifndef BINARYSEARCH_
#define BINARYSEARCH_
#include <iostream>
#include <cmath>
#include <vector>
namespace binarysearch{
struct BST
{
    int data;
    BST* left;
    BST* right;
    BST(int x) : data(x) , left(NULL), right(NULL) {}
};

BST* insert(int x, BST* insertnode)
{
    if(insertnode== NULL)
    {
        insertnode = new BST(x);
        return insertnode;
    }
    else if(insertnode->data > x)
    {
        insertnode->right = insert(x,insertnode->right);
        return insertnode;
    }
    else if(insertnode->data < x)
    {
        insertnode->left = insert(x,insertnode->left);
        return insertnode;
    }
    return insertnode;
}

void show(BST* node)
{
    if(node!=NULL)
    {
        return;
    }
    show(node->right);
    std::cout << node->data << std::endl;
    show(node->left);

}
};

#endif // !BINARYSEARCH_#define BINARYSEARCH_