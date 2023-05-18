#include<iostream>
using namespace std;
#define n 100
class Queue
{
    int *arr;
    int front,back;
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;

    }
    void push(int x){
        if(back == n-1){
            cout<<"Queue Overflow:"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }
    void pop(){
        if(front == -1 || front>back){
            cout<<"No Element"<<endl;
            return;
        }
        front++;
    }
    void peek(){
        if(front == -1 || front>back){
            cout<<"No Element"<<endl;
            return;
        }
        cout<<arr[front];
    }
    bool empty(){
        if(front == -1 || front>back){
            return true;
        }
        return false;
        
    }
};
int main(){
    queue q;
    q.push(2);
    q.push(26);
    q.push(56);
    q.push(4);
    q.push(25);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    return 0;
}