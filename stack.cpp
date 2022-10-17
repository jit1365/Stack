#include<iostream>
//#include<stack>
using namespace std;

class stack{
    public:
    int top;
    int* arr;
    int size;

    stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    void push(int element){
        if(top<size-1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack  OverFlow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack  UnderFlow"<<endl;

        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty."<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
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




    
    //creation of stack
    stack<int> s;
    //push operation
    s.push(5);
    s.push(8);
    //pop
    s.pop();
    cout<<s.top(); 
    if(s.empty()){
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Stack is not empty."
    }
    */

    return 0;
}
