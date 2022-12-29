// Author : P V Siddeshware
// Purpose: To demonstrate stack operations
// Date: 29/12/2022
#include <iostream>
using namespace std;

//intialize var
int TOP =-1, stack[100], size;

// get stack size
int getSize(){
    cout<< "Enter size of stack you want to create : ";
    cin>>size;
    return size;
}

//check stack is full or not
bool isFull(){
    if(TOP == size -1){
        return true;
    }
    return false;
}

//check stack is empty or not
bool isEmpty(){
    if(TOP <= -1){
        return true;
    }
    return false;
}

//push elemnet into the stack
void push(int value){
    TOP ++;
    stack[TOP] = value;
}

//pop element from the stack
int pop(){
    int val = stack[TOP];
    TOP--;
    return val;
}

// dispaly stack elements
void display(){
    int i=TOP;
    for(i;i>=0;i--){
        cout<<stack[i]<<" ";
    }
}

// main function to run code
int main() {
    
    size = getSize();
    int choice,value;
    
    stack[size];
    
    do{
        cout<<"\n0. exit \n1. push \n2.pop \n3.isFull \n4.isEmpty \n5.Fetch Top element \n6.Display all stack elements" << endl;
        cin >> choice;
        
        switch(choice){
            case 1: {
                if(isFull()){
                    cout<< "Stack is full."<<endl;
                }
                else{
                    cout<<"Before pushing element into the stack : ";
                    display();
                    cout<<"\nEnter data which need to push into the stack : ";
                    cin>> value;
                    push(value);
                    cout<<"\nAfter pushing element into the stack : ";
                    display();
                }
                break;
            }
            case 2: {
                if(isEmpty()){
                    cout<< "Stack is empty."<<endl;
                }
                else{
                    cout<<"Before popping element from the stack : ";
                    display();
                    cout<<"\nElement deleted from stack : "<<pop();
                    cout<<"\nAfter popping element from the stack : ";
                    display();
                }
                 break;
            }
        case 3: {
                if(isFull()){
                    cout<< "Stack is Full."<<endl;
                }
                else{
                    cout<< "Stack is not Full."<<endl;
                }
                break;
            }
        case 4: {
                if(isEmpty()){
                    cout<< "Stack is Empty."<<endl;
                }
                else{
                    cout<< "Stack is not Empty."<<endl;
                }
                break;
            }
        case 5: {
                cout<<"Element present at TOP is : "<<stack[TOP];
                break;
            }
        case 6: {
                if(isEmpty()){
                    cout<<"Stack is empty.";
                }
                else{
                    display();
                }
                break;
            }
        }
    }while(choice != 0);

    return 0;
}
