#include<iostream>
#define max 6
using namespace std;
class  circualr{
        int a[max];
        int f=-1;
        int r=-1;
    public:
        bool isempty(){
            if(f==-1 && r==-1)
                return true;
            return false;
        }
        bool isfull(){
            if((r+1)%max==f)
                return true;
            return false;
        }
        void enqueue(int x){
            if(isfull())
                cout<<"Queue is full"<<endl;
            else if(isempty()){
                f=0;r=0;
            }
            else{
                r=(r+1)%max;
            }
            a[r]=x;
        }
        void dequeue(){
            if(isempty())
                cout<<"Queue is empty"<<endl;
            else if(f==r){
                f=-1;r=-1;
            }
            else{
                f=(f+1)%max;
            }
        }
        void print(){
            for(int i=f;i<=r;i=(i+1)%max){
                cout<<a[i]<<" ";
            }
        }
};
int main(){
    circualr q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.print();
    cout<<endl;
   // q.enqueue(7);
    q.dequeue();
    q.print();
}