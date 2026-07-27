#include<iostream>
using namespace std;

int GetLen(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

char* rev(char name[]){
    int start=0;
    int end=GetLen(name)-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
    return name;
}

int main(){
    char name[20];
    cout<<"Enter your name bro! ";
    cin>>name;
    int size=GetLen(name)-1;
   
  cout<< "length is " << GetLen(name)<<endl;
  cout<<"reverse is " << rev(name)<<endl;

return 0;

}




