/* linked list- linear data structure
               -contains node which has 2 part 
               -head pointer has address of first node
               -their is no index in linked list
               */

   //single independent node creation

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
int main(){
    node n1(10);
    cout<<n1.data;
    return 0;
}