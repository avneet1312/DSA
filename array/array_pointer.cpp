#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;   //*arr means the first element 
                        // arr means the adress of first elemnt 
   
   int *ptr=arr;        // *ptr gives arr first element and so on 
                        // ptr = adress as *ptr=arr so ptr=&arr
                        // &arr gives adress of array 
   for (int i=0;i<3;i++){
       cout<<*(arr+i)<<endl;
       ptr++;
   }
}