#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){

    int arr[26]={0};

    for(int i=0;i<s.length(); i++){
        char ch=s[i];
        int number=0;
            if(ch>='a'&&ch<='z'){
                number=ch-'a';
            }
            else{
                number=ch-'A';
            }
            arr[number]++;
    }

    int maxi=-1,ans=0;
    for(int i=0;i<s.length();i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
    }

    char finalAns='a'+ans;
    return finalAns;



}









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




