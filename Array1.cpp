
// Reverse a Array

#include<bits/stdc++.h>
using namespace std;
void printArr(int * arr , int n){
   for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

void swap(int* arr, int a,int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void reverse(int * arr,int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr,i,j);
        i++;
        j--;
    }

}
int main()
{
    int arr[6];
    for(int &i:arr)cin>>i; 
    reverse(arr,6);
    printArr(arr,6);
    
}