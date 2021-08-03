#include <iostream>
using namespace std;
 void arr(int ass[],int n){
     for(int i=1;i<n;i++){
         int c=ass[i];
         int j;
         for( j=i-1;j>=0;j--){
             
             if(c<ass[j]){
                
                ass[j+1]=ass[j];//in insertion sort use shifiting instead of swaping
                
             }else{
                 break;
             }
         }
         ass[j+1]=c;
     }
     
 }
 int main(){
    
     int n;
     cout<<"enter the elemnet in array"<<endl;
     cin>>n;
     int ass[100];
     
     for(int i=0;i<n;i++){
         cin>>ass[i];
         
             }        arr(ass,n);
     
     
     for(int i=0;i<n;i++){
         cout<<ass[i]<<" ";
     }
     cout<<endl;
 }