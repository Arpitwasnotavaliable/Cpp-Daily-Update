#include<iostream>
using namespace std;
int binserch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;




}
int main(){

    int arr[6]={3,4,6,9,19,33};
    
    cout<<"The position of the Desired element is at : "<<binserch(arr,6,19);

}