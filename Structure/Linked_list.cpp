#include <iostream>

using namespace std;

struct Listnode {
  int val; // To store the value
  Listnode* next; //For storing address of the value
};

void display(Listnode *head)
{
    while(head!=NULL) // Itterates the value until the list value is NULL
    {
        cout<<head->val<<"\n";
        head=head->next;
    }
}

int main() {
    Listnode *head=NULL; // assigning the value of the NULL
    Listnode *first=NULL;
    Listnode *second=NULL;
    
    head = (struct Listnode *) malloc(sizeof(struct Listnode)); // can use malloc or new operator to allocate size in c++
    first = new Listnode();
    second = new Listnode();
    
    head->val=2; // assigning the value
    head->next=first; // assigning the address of the first to the next pointer to create a link between the two list elements. 
    first->val=3;
    first->next=second;
    second->val=4;
    second->next=NULL;
    
    display(head); // Calls the display function and give the output as list.
  
  
  /* Output:
    2
    3
    4
 */   
    
    
    
}
