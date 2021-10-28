#include<bits/stdc++.h>

using namespace std;
class Queue{
 private:
    int Front;
    int rear;
    int arr[5];

 public:
      Queue(){
      Front = -1;
      rear = -1;
      for(int i = 0;i<5;i++){
        arr[i]=0;
      }
    }
    //Initializing methods of Queue data structures
    bool isEmpty(){
        if(Front==-1 && rear ==-1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if(rear==4)
            return true;
        else
            return false;
    }
    void enque(int val){
        if(isFull()){
            cout<<"Queue is going to be overflow\n";
            return;
        }
        else if(isEmpty()){
            rear = 0;
            Front = 0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

   int Deque(){
       int temp;
         if(isEmpty()){
            cout<< "Can't perform\n";
            return 0;
         }
         else if(rear==Front){
            temp = arr[Front];
            arr[Front] = 0;
            rear=-1;
            Front=-1;
            return temp;
         }
         else{
            temp = arr[Front];
            arr[Front] = 0;
            Front++;
            return temp;
         }
    }
    void Display(){
      for(int i = 0;i<5;i++)
        cout << " " <<arr[i];
    }
    int Count(){
        return (rear-Front+1);
    }

};

int main(){

    Queue q1; //initializing object of Queue class

    int val,position,option;


    do{
        cout << "Select option : or enter 0 to exit \n";
        cout << "1. Enqueue()\n";
        cout << "2. Dequeue()\n";
        cout << "3. isEmpty()\n";
        cout << "4. isFull()\n";
        cout << "5. count()\n";
        cout << "6. display()\n";
        cout << "7. Clear Screen\n\n";

        cin>> option;
        switch(option){
        case 0:
            break;
        case 1:
            cout << "Enqueue a value : ";
            cin >> val;
            q1.enque(val);
            break;
        case 2:
            cout << "Dequeued value : " <<q1.Deque()<<endl;
            break;
        case 3:
            cout << q1.isEmpty()<<endl;
            break;
        case 4:
            cout << q1.isFull()<<endl;
            break;
        case 5:
            cout << "Elements number : " << q1.Count()<<endl;
            break;
        case 6:
            q1.Display();
            break;
        case 7:
            system("cls");
            break;
        default:
            break;

        }

    }while(option!=0);

    return 0;

}
