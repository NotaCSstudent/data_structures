#ifndef LINKLIST_
#define LINKLIST_
#include <iostream>
#include <cmath>
#include <vector>
namespace linklist{
struct link
{
    int data;
    link* next;
    link* prev;

    link(int x) : data(x), next(nullptr), prev(nullptr) {}
};
 link* head = nullptr;

link* insert(link* node,int x)
{
    if(node == nullptr)
    {
        node = new link(x);
        return node;
    }

   node->next = insert(node->next,x);
   return node;
}

void show()
{
    link *temp = head;
    while(temp->next!=NULL)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }

}
void code()
{
    head = NULL;
    for(int i=1;i<11;i++)
    {
        head=insert(head,i);
    }
    show();
}
};


#endif // !LINKLIST_