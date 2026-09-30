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

return 0;
}