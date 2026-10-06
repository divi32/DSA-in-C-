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
//**********pop front*********/
    void pop_front(){     //ensures head has address of next node 
        if(head==NULL){
         cout<<"empty list:";
        }
         else{
            node* temp=head;   //CREATE A NEW NODE
            head=head->next;   //CHANGE HEAD TO NEXT POINTER
            temp->next=NULL;   //IN TEMP I.E FIRST NODE change its address to null so that it loss connection to list

            delete temp;      //then delete list
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
l1.pop_front();

l1.traverse();

return 0;
}