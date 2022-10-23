#include <iostream>
using namespace std;

void concat(int arr[],int first,int last,int mid){
    int findx=first;
    int lindx=mid+1;
    int temp[(last-first)+1];
    int si=(last-first)+1;
    int x=0;
    while(findx<=mid && lindx<=last){
        if(arr[findx]<=arr[lindx]){
            temp[x]=arr[findx];
            findx++;x++;
        }
        else{
            temp[x]=arr[lindx];
            lindx++;x++;
        }
    }
    while(findx<=mid){
        temp[x]=arr[findx];
        findx++;x++;
    }
    while(lindx<=last){
        temp[x]=arr[lindx];
        lindx++;x++;
    }
    for(int i=first,j=0;j<si;i++,j++){
        arr[i]=temp[j];
    }
}



void margeSort(int arr[],int first,int last){
    if(first>=last){
        return;
    }
    else{
        int mid=first+(last-first)/2;
        margeSort(arr,first,mid);
        margeSort(arr,mid+1,last);
        concat(arr,first,last,mid);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    margeSort(arr,0,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }



   return 0;
}
