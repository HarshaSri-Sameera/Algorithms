#include <iostream>

using namespace std;

struct listnode{   // Using structure to create own datatyepe
    int val;
    listnode *next;
};
void rev(struct listnode **head) // Reversing the list 
{
    listnode *c = NULL;
    listnode *p = NULL;
    while(*head!=NULL)
    {
        c=(*head)->next;
        (*head)->next = p;
        p = (*head);
        (*head) = c;
    }
    (*head) = p;
}

void display(struct listnode *head){ // display the list 
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main() {
    listnode *head = NULL; // creating list elements as NULL
    listnode *first = NULL;
    listnode *second = NULL;
    
    head=(listnode *)malloc(sizeof(listnode)); // allocating the space to list elements
    first=(listnode *)malloc(sizeof(listnode));
    second=new listnode();
    
    head->val=7;                    // Linked list creation
    head->next=first;
    first->val=8;
    first->next=second;
    second->val=9;
    second->next=NULL;
    
    rev(&head);
    display(head);
}

/* OUtput
   9 8 7 */
