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
        if(head==NULL){
         cout<<"empty list:";
        }
         else{
            node* temp=head;

        while (temp->next->next!=NULL){   //
            temp=temp->next;
        }   
            temp->next=NULL;   //
            delete tail;   //
            tail=temp; //
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