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
//**********insert in middle *********/

    void insert(int pos, int val){     //ensures head has address of next node 
        if(pos<0){
         cout<<"invalid position:";
         return;
        }
        if (pos==0){
            push_front(val);
            return;
        }
        else {
            node* newnode = new node(val);
            node* temp=head;

        for (int i=0;i<pos-1;i++){  
            if(temp==NULL){
                cout<<"invalid pos";
                return;
            }
            temp=temp->next;
        }   
            newnode->next=temp->next;
            temp->next=newnode;   //IN TEMP I.E last second node change its address to null so that it loss connection to list
            
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
//list was 3->2->1->null
l1.insert(2,6);

l1.traverse();

return 0;
}