#include<iostream>
using namespace std;
#define max 6
class queue{
    int a[max];
    int f=-1;
    int r=-1;
    public:
            bool isempty(){
                if(f==-1 && r==-1)
                    return true;
                else false;
            }
            bool isfull(){
                if(r==max-1)
                    return true;
                return false;
            }
            void enqueue(int x){
                if(isfull()){
                    cout<<"full"<<endl;
                }
                else if(isempty()){
                    f=0;
                    r=0;
                    //cout<<"empty"<<endl;
                }
                else{
                    r++;
                }
                a[r]=x;
            }
            void dequeue(){
                if(isempty())
                    cout<<"empty"<<endl;
                else if(f==r){
                    f==-1;
                    r==1;
                }
                else
                    f=f+1;
            }
            void printqueue(){
                cout<<"the elments are ";
                for(int i=f;i<=r;i++)
                {
                    cout<<a[i]<<" ";
                }
            }


};
int main()
{
    queue s;
    if(s.isempty()){
        cout<<"empty"<<endl;
    }
    s.enqueue(1);
    s.enqueue(2);
    s.enqueue(2);
    s.enqueue(1);
    s.enqueue(1);
    s.enqueue(1);
    if(!s.isempty()){
        cout<<"not empty"<<endl;
    }
    s.printqueue();
    s.enqueue(1);
    s.dequeue();
    s.printqueue();
}