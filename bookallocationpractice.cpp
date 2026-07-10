#include<iostream>
using namespace std;

bool isValid(int time[], int n, int books, int mid){
    int d=1,b=0;
    for(int i=0;i<n;i++){         
        if(time[i]>mid){
            return false;
        }
        if(b+time[i]<=mid){
            b+=time[i];
        }
        else{
            d++;
            b=time[i];
        }
    }
    if(d>books){                  
        return false;
    }
    else {
        return true;
    }
}

int main(){
    int time[5]={1,2,2,3,1};
    int start=0;
    int end=-1;
    int sum=0;
    int ans=-1;
    for(int i=0;i<5;i++){
        sum+=time[i];
    }
    end=sum;

    while(start<=end){
        int mid=start+(end-start)/2;   
        if(isValid(time,5,3,mid)){     
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    cout<<ans;
    return 0;
}