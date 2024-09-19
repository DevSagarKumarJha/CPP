#include <bits/stdc++.h>

using namespace std;

bool issorted(int *arr){
    int size = sizeof(arr)/sizeof(arr[0]);

 
    for(int i= 1;i<size; i++){
        if(arr[i]>arr[i-1]){
            return false;
        }
    }
    return true;

}

int main()
{
    int n;
    cin>>n;

    int arr[n] ;


    return 0;
}