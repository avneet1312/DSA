#include<iostream>
using namespace std;
int getbit(int n, int pos){
    return ((n&(1<<pos)) != 0);
}
int setbit(int n, int pos){
    return (n | (1<<pos));
}
int clearbit(int n,int pos){
    return  (n & (~(1<<pos)));
}
int main(){
    //cout<<getbit(5,2);
    //cout<<setbit(5,1);
    cout<<clearbit(5,2);
}