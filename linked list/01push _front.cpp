/*   create new node in link list from scratch

*/


#include <iostream>
using namespace std;

class node{  //node structure is created
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class list{     //linked list making prep
    node* head;
    node* tail;
    public:
    list(){
        head= tail=NULL; //create head and tail and point them to null
    }
    void push_front(int val){   //to add new node in front
        node* newnode = new node(val);  //dynamic crete a newnode
        if(head ==NULL){              //if there exists no nodes
            head= tail =newnode;      
            return;                 //both head and tail points to newnode i.e head has address of newpointer 
        }else{
            newnode->next= head;    //newpointer second part has address of head and
            head =newnode;          //head moves to new pointer
        }
    }
};

int main(){
list l1;
l1.push_front(1);    //if part runs for this code as head =null
l1.push_front(2);    //else part is executed for this code as one node is already there
  


return 0;
}