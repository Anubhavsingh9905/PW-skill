#include<iostream>
#include<algorithm>
using namespace std;

class Node{
public: 
    int val;
    Node * next;
    Node(int val){
        this->val = val;
        this->next =  NULL;
    }
};

class solution{
    public:
        Node* removeval(Node* head , int value){
            Node* dummy = new Node(0);
            dummy->next = head;
            Node* temp = dummy;
            while (temp->next != NULL)
            {
                if (temp -> next -> val == value)
                {
                    temp -> next = temp -> next -> next;
                }
                else{
                    temp = temp -> next;
                }
            }
            Node* newhead = dummy->next;
                
            return newhead;
        }
};


void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(5);
    Node* g = new Node(6);
    
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);

    solution sol;
    Node* newhead = sol.removeval(a , 6);
    display(newhead);
    

return 0;
}