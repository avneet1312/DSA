#include<iostream>
using namespace std;
void swap(int *a, int *b){      //call by reference
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2;
    int b=4;

     swap(&a,&b);   //passing pointrs in func
     cout<<a<<"  "<<b<<endl;
}