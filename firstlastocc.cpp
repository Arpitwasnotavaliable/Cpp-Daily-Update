#include<iostream>
using namespace std;

int firstOcc(int Arr[],int size,int key){
        int start=0,end=size-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(Arr[mid]==key){
                ans=mid;
                end=mid-1;
            }
            else if(Arr[mid]<key){
                start=mid+1;
            }
            else if(Arr[mid]>key){
                end=mid-1;
            }
            mid=start+(end-start)/2;
            
        }
        return ans;
}
int lastOcc(int Arr[],int size,int key){
        int start=0,end=size-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(Arr[mid]==key){
                ans=mid;
                start=mid+1;
            }
            else if(Arr[mid]<key){
                start=mid+1;
            }
            else if(Arr[mid]>key){
                end=mid-1;
            }
            mid=start+(end-start)/2;
            
        }
        return ans;
}

int main(){

    int even[5]={1,2,3,3,5};

    cout<<firstOcc(even,5,3)<<endl;
    cout<<lastOcc(even,5,3);



    return 0;
}