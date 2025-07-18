#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;

// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class LinkedList{
// public:
//     Node* head;
//     Node* tail;
//     int size;
//     LinkedList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void insertatend(int val){
//         Node* temp= new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     LinkedList ll;
//     ll.insertatend(10);
//     ll.display();
//     ll.insertatend(20);
//     ll.display();
// }



class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
                
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
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
    // void inseartatidx(int idx,int val){
    //     if(idx<0 || idx>size) cout<<"invalid input"<<endl;
    //     else if(idx==0) inseartathead(val);
    //     else if(idx==size) inseartatend(val);
    //     else{
             
    //     }
    // }

    void display(){
        Node* temp=head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};


int main(){
    LinkedList ll;
    ll.insertatend(10);
    ll.display();
    ll.insertatend(20);
    ll.display();
    ll.insertatend(30);
    ll.display();
    ll.insertatend(40);
    ll.display();
    ll.insertatend(50);
    ll.display();
    ll.inseartathead(60);
    ll.display();

}















