#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int * arr, int size){
    int max ;
    int min ;
    struct Pair minmax;

    if(size==1){
        max = arr[0];
        min = max;
    }
    if(arr[0]>arr[1]){
        min = arr[1];
        max = arr[0];
    }
    else{
        min = arr[0];
        max = arr[1];
    }

    for(int i=2;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    minmax.max = max;
    minmax.min = min;
    return minmax;
    
}
int main(){
    int arr[] = {2,3,54,7,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    struct Pair minmax = getMinMax(arr,size);
    cout<< " MIN : "<< minmax.min<<endl;
    cout<<" MAX : "<< minmax.max;
}