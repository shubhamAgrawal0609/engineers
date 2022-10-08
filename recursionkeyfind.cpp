#include <iostream>
using namespace std;

    int search(int arr[], int n,int i,int s){
        if(n==0){ 
            return -1;}
        if(arr[i]==s){
             return i;}
        else{
            int ans=search(arr,n-1,i+1,s);
            return ans;
        }
    }
    int main(){
    int arr[]={2,6,5,8,9,6,3};
    int s=10;
    cout<<search(arr,7,0,s);
}
