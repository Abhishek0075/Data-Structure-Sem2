#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        next = NULL;
    }

};

class LinkedList{

    Node* head;

    public:

    LinkedList(){
        head = NULL;
    }

    void insertNode(int data){

        Node* newNode = new Node(data);

        if(newNode == NULL){
            cout<<"OVERFLOW";
            return;
        }

        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            // Node* temp2 = temp->next;
            // if(temp2->next==NULL){
            //     cout<<"\nNULL";
            // }
        }
    }
    void printNode(){

        Node* temp = head;

        if(head == NULL){
            cout<<"List is empty\n";
            return;
        }
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void search(){

        int count = 1;
        int item;
        cout<<"\nEnter the searching item\n";
        cin >> item;

        Node* temp = head;

        if(head == NULL){
            cout<<"List is empty;\n";
            return;
        }

        while(temp != NULL){
            if(temp->data == item){
                cout<<"Item found at "<<count<<" position. \n";
                return;
            }
            else{
                temp = temp -> next;  
                count++;
            }
        }
        cout<<"\nItem not found\n";
    }

    void deleteNode(){

        int item;
        cout<<"\nEnter the item to be deleted : ";
        cin>>item;

        Node* temp = head;
        Node* ptr = head -> next;
        Node* temp2;
        if(head == NULL){
            cout<<"List is empty";
            return;
        }

        if(item == head->data){
            temp2 = head;
            head = head->next;
            delete temp2;
            printNode();
            cout<<item<<" deleted successfully\n";
            return;
        }
        while(ptr != NULL){
            if(ptr->data == item){
                temp2 = ptr;
                temp->next = ptr->next;
                ptr->next = NULL;
                delete temp2;
                printNode();
                cout<<item<<" deleted successfully\n";
                return;
            }
            else{
                temp = ptr;
                ptr = ptr -> next;
            }
        }
        cout<<"\nItem not found\n"; 
        printNode();

    }

};

int main(){

    LinkedList list;
    list.insertNode(30);
    list.insertNode(100); 
    list.printNode();
    list.search();
    list.deleteNode();

    return 0;
}