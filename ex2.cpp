#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int ans[n-k+1];

    for (int i = 0; i < (n-k+1); i++)
    {
        bool flag = false;
        for (int j = 0; j < k; j++)
        {
            if(arr[i+j] < 0) {
                cout<<arr[i+j]<<" ";
                flag = true;
                break;
            }
        }
        if(!flag) cout<<0<<" ";
    }
    
    

return 0;
}