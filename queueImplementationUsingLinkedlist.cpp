#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int s;
    Queue(){
        head=tail=NULL;
        s=0;
    }
    void push(int val){
        Node* t = new Node(val);
        if(s==0) head=tail=t;
        else{
            tail->next=t;
            tail=t;
        }
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        Node* temp = head;
        head=head->next;
        s--;
        delete(temp);  // wastage nahi ho rahi
    }
    int front(){
        if(s==0){
            cout<<"Queue is empty!";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is empty!";
            return -1;
        }
        return tail->val;
    }
    bool isEmpty(){
        if(s==0) return true;
        return false;
    }
    int size(){
        return s;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.pop();
    q.display();
    q.push(50);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}