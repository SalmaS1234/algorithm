#include <bits/stdc++.h>
using namespace std;



int pivot(int arr[],int first,int last){
    int p_index=arr[last];
    int x=first;
    for(int i=first;i<last;i++){
        if(arr[i]<=p_index){
            swap(arr[i],arr[x]);
            x++;
        }
    }
    swap(arr[x],arr[last]);
    return x;
}
void quick_sort(int arr[],int first,int last){
    if(first>=last){
        return;
    }
    else{
        int p=pivot(arr,first,last);
        quick_sort(arr,first,p-1);
        quick_sort(arr,p+1,last);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


