#include<iostream>
using namespace std;

class Node{

    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};


void InsertAthead(Node* &head , int d){

    //new node creation
    Node* temp = new Node(d);
    temp -> next = head ;
    head = temp;

}

void InsertAtTail(Node * &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(int position , int d , Node* &head ){
    if(position == 1){
        InsertAthead(head , d);
        return ;
    }
    Node* temp = head ;

    //create new Node 
    Node* temp2 = new Node(d);

    int cnt = 1 ;
    while (cnt<position-1){
        temp = temp->next ;
        cnt++;
    }

    //If element if to be insert at last.
    if(temp->next == NULL){
        temp->next = temp2;
        return ;
    }


    //Insert node in between 
    temp2->next = temp->next;
    temp->next = temp2;
}


void DeleteNode(int position , Node* &head){
    
}




void print(Node* &head){
    Node* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl ;
}

int main(){

    //Create a new node
    Node* node1 = new Node(10) ;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* tail = node1 ;
    Node* head = node1 ;

    // print(tail) ;

    // InsertAthead(head ,12);
    InsertAtTail(tail , 12);
    // print(head) ;

    InsertAtTail(tail ,15);
    print(head);

    insertAtPosition(4 , 66 , head);
    print(head);



    return 0;
}