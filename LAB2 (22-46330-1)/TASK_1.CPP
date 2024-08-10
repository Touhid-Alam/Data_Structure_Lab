#include<iostream>
using namespace std;

int main(){
int arrmerge[100];
int arrmerge2[100];
int a,b;
cout<<"How many elements are in first array: ";
cin>>a;
int arrOne[a];
cout<<"Input the elements of first array: ";

for(int i =0;i<a;i++){
    cin>>arrOne[i];
    arrmerge[i]=arrOne[i];
}
cout<<endl;
cout<<"How many elements are in second array: ";
cin>>b;
int arrTwo[b];
cout<<"Input the elements of second array: ";
for(int i=0;i<b;i++)
{
    cin>>arrTwo[i];
    arrmerge[a+i-1]=arrTwo[i];
}
cout<<endl;
cout<<"Elements in reverse order: ";

for(int i=9;i>0;i--){
  cout<<arrmerge[i]<<" ";
}


}
