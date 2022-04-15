#include <iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;

        Node(){
            key=0;
            data=0;
            next=NULL;
        }

        Node(int k, int d){
            key=k;
            data=d; 
        }
};

class SinglyLinkedList{
    public:
        Node* head;

        SinglylinkedList(){
            head=NULL;
        }

        SinglyLinkedlist(Node *n){
            head = n;
        }
        //1. check if node exitst using key value
        Node* nodeExists(int k){
            Node* temp = NULL;

            Node *ptr = head;
            while (ptr!=NULL)
            {
                if(ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            }
            return temp;
        }

        //2. Append a node to the list 

        void appendNode(Node *n){
            if (nodeExists(n->key)!=NULL)
            {
                cout << "Node already exists with key value :" << n->key << ". Append another node with diffrent value" << endl;
            }
            else{
                if(head==NULL)
                {
                    head = n;
                    cout << "Node Appended" << endl;
                }
                else{
                    Node* ptr = head;
                    while(ptr->next!=NULL){
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                    cout << "Node Appended" << endl;
                }
            }
        }

        //3. Prepend Node - Attatch a node at start
        void prependNode(Node* n){
            if (nodeExists(n->key)!=NULL)
            {
                cout << "Node already exists with key value :" << n->key << ". Append another node with diffrent value" << endl;
            }
            else{
                n->next = head;
                head = n;
                cout << "Node Prepended" << endl;
            }
        }

        //4. Insert a Node after a perticular node in the list
        void insertNodeAfter(int k, Node *n){
            Node* ptr = nodeExists(k);
            if (ptr==NULL)
            {
                cout << "no node exists with key value : " << k << endl;
            }
            else{
                if (nodeExists(n->key)!=NULL)
                {
                    cout << "Node already exists with key value :" << n->key << ". Append another node with diffrent value" << endl;
                }
                else{
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "Node inserted";
                }
            }
        }

        //5. Delete Node by unique key
        void deleteNodeByKey(int k){
            if (head==NULL)
            {
                cout << "Singly linked list already Empty. can't delete" << endl;

            }
            else if(head!=NULL){
                if (head->key==k){
                    head = head->next;
                    cout << "Node unlinked with keys value :" << k << endl;
                }  
            }
            else{
                Node* temp = NULL;
                Node* prevptr = head;
                Node* currentptr = head->next;
                while (currentptr!=NULL)
                {
                    if (currentptr->key==k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else{
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if (temp!=NULL)
                {
                    prevptr->next = temp->next;
                    cout << "Note UNLINKED with keys value :" << k << endl;
                }
                else{
                    cout << "Node dosen't exist with key value :" << k << endl;
                }
            }
        }
        //6. Update Node 
        void updateNodeByKey(int k, int d){
            Node *ptr = nodeExists(k);
            if(ptr!=NULL){
                prt->data = d;
                cout << "Node data updated succesfully" << endl;
            }
            else{
                cout << "Node dosen't exist with key value :" << k << endl;
            }
        }

        //7. printing while linked list

        void printlist(){
            if(head==NULL){
                cout << "No nodes in singly linked list";
            }
            else{
                cout << endl << "singly Linked list values : ";
                Node* temp = head;
            }
        }
};

int main(){
    return 0;
}