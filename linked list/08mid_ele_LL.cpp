/*METHOD 1: FIND SIZE BY TRAVERSING ->THEN APPLY LOOP TILL SIZE/2 AND FIND THE MID

METHOD 2: TAKE 2 pointer slow and fast ->slow iterates by +1 and fast by +2 -> when fast complete 1 loop , slow will
          reach the middle*/


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
 
//****method 2:******return_MIDDLE*********/
    int MID_RETURN(){     //return type is pointer so use node*
        node* slow=head;
        node* fast= head;

        while (fast!=NULL && fast->next !=NULL){
            slow=slow->next;  //slow moves by +1
            fast=fast->next->next;   // fast moves by +2
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

l1.traverse();
cout<<l1.MID_RETURN();
return 0;
}
