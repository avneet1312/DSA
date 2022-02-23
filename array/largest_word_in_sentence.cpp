#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    cout<<"value of n:"<<n<<endl;

    int i=0;
    int currLen=0,maxLen=0;

    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen=0;
        }
        currLen++;
        if(arr[i]=='\0'){
            break;
        }
    }
    cout<<maxLen<<endl;
    

}