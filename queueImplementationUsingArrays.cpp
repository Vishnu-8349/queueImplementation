#include<iostream>
#include<queue>
using namespace std;
class Queue{
public:
    int arr[6];
    int f;
    int b;
    int s;
    Queue(){
        f=b=s=0;
    }
    void push(int val){
        if(s==6){
            cout<<"Queue is FULL!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
        s--;
    }
    int frontt(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int backk(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool Isempty(){
        if(s==0) return true;
        return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    // push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.display();
    q.pop();
    q.display();
    q.pop();
    cout<<q.size();
    // q.pop();
    // q.display();
    // cout<<q.frontt()<<endl;
    // cout<<q.backk()<<endl;
    // cout<<q.size();
}