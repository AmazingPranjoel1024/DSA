#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class linkedlist{
public:
    Node* head;
    Node* tail;
    int size;

    linkedlist(){
        head=tail=NULL;
        size=0;
    }

    void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void inseartathead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertatidx(int idx,int val){
        if(idx<0|| idx>size) cout<<"Invali index"<<endl;
        else if(idx==0) inseartathead(val);
        else if(idx==size) insertattail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }

    }

    void deleteathead(){
        if(size==0){ cout<<"list is empty";
            return;
        }
        head=head->next;
        size--;
    }


    void dis(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void deleteattail(){
        if(size==0){ cout<<"list is empty";
            return;
        }
        Node* temp =head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }

    void deleteatidx(int idx){
        if(size==0){ cout<<"list is empty";
            return;
        }
        if(idx<0 || idx>size){ cout<<"invalid idx";
        return;
        }
        else if(idx==0) deleteathead();
        else if(idx==size-1) deleteattail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }


};


int main(){
    // Node* a= new Node(10);
    // Node* b= new Node(20);
    // Node* c= new Node(30);
    // Node* d= new Node(40);
    // Node* e= new Node(50);
    // a->next=b;
    // b->next=c;
    // c->next=d;
    // d->next=e;
    // display(a);
    linkedlist ll;
    ll.insertattail(10);
    ll.dis();
    ll.insertattail(20);
    ll.dis();
    ll.insertattail(30);
    ll.dis();
    ll.insertattail(40);
    ll.dis();
    ll.insertattail(50);
    ll.dis();
    ll.insertattail(60);
    ll.dis();
    ll.inseartathead(70);
    ll.dis();
    ll.insertatidx(4,90);
    ll.dis();
    ll.deleteathead();
    ll.dis();
    ll.deleteattail();
    ll.dis();
    ll.deleteatidx(3);
    ll.dis();













}



