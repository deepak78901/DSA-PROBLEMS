// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n],low=0,high=n-1,flag=0,mid,ans;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int key;
        cin>>key;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]==key)
            {
            ans=mid+1;
            flag=1;
            break;
        }
            else if(arr[mid]>key)
            high=mid-1;
            else
            low=mid+1;
            
            
        }
     if(flag==0)
     cout<<"element is not found";
     else
     cout<<"element is present"<<ans;
  
    return 0;
}
