#include<iostream>
using namespace std;


struct Student{

   string id;
   int cgpa;
   int credit;

};

int main(){

int a=10;

Student info[a];

for(int i=0;i<a;i++){
    cout<<"INFO OF NUMBER "<<i+1<<" STUDENT: "<<endl;
    cout<<"Enter the ID: ";
    cin>>info[i].id;
    cout<<"Enter completed Credit: ";
    cin>>info[i].credit;
    cout<<"Enter the CGPA: "  ;
    cin>>info[i].cgpa;

}
cout<<"Student id with CGPA more than 3.75 and credit completed more than 50: "<<endl;
for(int i=0;i<a;i++){
    if(info[i].cgpa>3.75 && info[i].credit<50){
    cout<<info[i].id<<endl;

}
}
}







