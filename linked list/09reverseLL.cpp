/*to reverse a linked list,i.e 
---> head->1->2->3->4->null
    will become null<-1<-2<-3<-4<-head

--->create 3 pointer- current ,previous, next

--->current - points to head and breaks the forward connection and make new connection at reverse

---> in front of current is denoted by next pointer and

--->in back of current is denoted by previous ptr

--->at start , next and previous are null

          --------------------------
        |  next = current-> next    |
        |  curr->next= previous     |
         ---------------------------
*/

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class list{     
    node* head;
    node* tail;
    public:
    list(){
        head= tail=NULL; 
    }
    void push_front(int val){   
        node* newnode = new node(val);  
        if(head ==NULL){              
            head= tail =newnode;      
            return; }
        else{                
            newnode->next= head;    
            head =newnode;          
        }
    }
//**********reverse*********/
    void reverse(){     
        node* prev=NULL;
        node* curr= head;
        node* next=NULL;

        while (curr!=NULL){   
            next=curr->next;  //reserving the next node in the ori list before u break the list
            curr->next=prev;   //overwrite the above line and now address part of current has prvious 
            
            prev=curr;
            curr=next;
        }
     head=prev;    
    }
    
    void traverse(){
        node* ptr=head;

        while (ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
list l1;
l1.push_front(1);    
l1.push_front(2);    
l1.push_front(3);

l1.traverse();
l1.reverse();
l1.traverse();
return 0;
}