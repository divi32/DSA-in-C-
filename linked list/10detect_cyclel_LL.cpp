/*cycle in linked list
1-->2-->3-->4-->5
        ^       |
        |--------
 
    METHOD : - slow-fast pointer
             - slow moves +1 and fast by +2
             - if slow and fast pointer meet at some point then 
               there is a cycle in the linked list.  



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
//**********check cycle*********/
    bool iscycle(){  
        node* slow=head;
        node* fast=head;   

        while (fast!=NULL && fast->next!=NULL){   //
            slow=slow->next;
            fast=fast->next->next;  

            if(slow==fast){
                return true;
            }
        }
         return false;
    }

/*********Print NODE*********/
    int inter_pt(){  
        node* slow=head;
        node* fast=head;   
        bool is_cycle=false;
        while (fast!=NULL && fast->next!=NULL){   //
            slow=slow->next;
            fast=fast->next->next;  

        if(slow==fast){
            is_cycle=true;
            break;
            }
        }
        if(!is_cycle){     //if is_cycle =false
            return NULL;
        }
        slow=head;
        while(slow!=fast){
            slow= slow->next;
            fast =fast->next;
        }
        return slow->data;


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
l1.push_front(4);
l1.push_front(5);
l1.traverse();

cout<<l1.iscycle();

return 0;
}