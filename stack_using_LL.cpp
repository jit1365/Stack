#include<iostream>

using namespace std;

class node{
    public:
    int  data;
    node *next;

    node(){
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
    node* top=NULL;

    void push(int element){
        node* n = new node(element);
        if (!n){
        cout << "\nStack Overflow";
        return;
        }
        else{
            n->next=top;
            top=n;
        }
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack UnderFlow"<<endl;
            return;
        }
        else{
            node* toDelete=top;
            top=top->next;
            toDelete->next=NULL;
            delete toDelete;
        }
    }
    int look(){
        if(top==NULL){
            cout<<"Stack is Empty."<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }
    bool isEmpty(){
        if(top!=NULL){
            return false;
        }
        else{
            return true;
        }
    }

};

int main(){
    node s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    if(s.isEmpty()){
        cout<<"Stack is Empty."<<endl;
    }
}
