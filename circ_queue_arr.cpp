#include <iostream>
#define N 5 
using namespace std; 

int queue[N]; 
int front = -1; 
int rear = -1; 



//ENQUEUE

void enqueue(int x){ 
if(front == -1 && rear == -1){
    front ++; 
    rear ++; 
    queue[rear] = x; 

}
else if ((rear+1)% N == front){
    cout << "queue full" <<endl; 
}
else {
    rear = (rear+1)%N; 
    queue[rear] = x; 
    
 }

}


//DEQUEUE

void dequeue(){

    if(front == -1 && rear ==-1){
        cout << "queueu is empty" <<endl;

    }
    else if (front == rear){
        front = rear = -1;
    }
    else {
        cout << "deleted item is: " << queue[front] <<endl; 
        front = (front+1)%N;
    }
}


//DISPLAY 

void display(){
    int i = front; 
    if(front == -1 && rear ==-1){
        cout << "empty queueue" <<endl; 
    }
    else {
        cout << "queue is: " <<endl; 
        while(i!= rear){
            cout << queue[i] <<endl; 
            i = (i+1)%N; 
        }
    }
}


//PEEK

void peek(){
    if(front==-1 && rear == -1){
        cout << "empty queue" <<endl; 
    }
    else {
        cout << queue[front]<<endl;

    }
}

int main(){
    enqueue(5);
    enqueue(3);
    enqueue(-4);
    display();
    peek();
    dequeue();
    enqueue(4);
    enqueue(10);
    enqueue(6);
    dequeue();
    peek();
    display();

    return 0; 

}