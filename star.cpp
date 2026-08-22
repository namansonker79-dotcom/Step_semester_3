#include<iostream>
using namespace std;
int main(){
      int n;
      int i,j;
      cout<<"Enter the number";
      cin>>n;
      for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<'*';
        }
        cout<<endl;
      }   
}