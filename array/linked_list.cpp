#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
    
};
void insertathead(node *&head, int val){
    node *n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node *&head , int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node *head,int key){
    node *temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteathead(node *&head){
    node *todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node *head, int val){
    node *temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node * todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node *reverse(node *&head){
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node *reverserecursive(node *&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node *newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    node *head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertathead(head,4);
    display(head);
    //cout<<search(head,5)<<endl;
    //deletion(head,3);
    //deleteathead(head);
    //node *newhead=reverse(head);
    node *newhead=reverserecursive(head);
    display(newhead);


    return 0;

}
