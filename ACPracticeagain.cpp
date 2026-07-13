#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int stalls[],int k,int mid){
    int CowCount=1;
    int lastpos=stalls[0];

    for(int i=1;i<6;i++){
        if(stalls[i]-lastpos >= mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            lastpos=stalls[i];
        }

    }
    return false;
}

int main(){
    int stalls[6]={0, 3 ,4 ,7 ,10 ,9};
    sort(stalls,stalls+6);
    int start=0;
    int end=stalls[5]-stalls[0];
    int mid=start+(end-start)/2;
    int ans=-1;

        while(start<=end){
            if(isPossible(stalls,3,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        cout<<ans;
}