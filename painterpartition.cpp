#include<iostream>
bool isPossible(vector<int> &boards,int size,int painters,int mid){
    int paint=1;
    int bor=0;
    for(int i=0;i<size;i++){
        if(boards[i]>mid){
            return false;
        }
        if(bor+boards[i]<=mid){
            bor+=boards[i];
        }
        else{
            paint++;
            bor=boards[i];
        }
    }
    if(paint<=painters){
        return true;
    }
    else {
        return false;
    }




}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int start=0;
    int end=-1;
    int bs=boards.size();
    int sum=0;
    int ans=-1;
    for(int i=0;i<bs;i++){
        sum+=boards[i];
    }
    end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(boards,bs,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}