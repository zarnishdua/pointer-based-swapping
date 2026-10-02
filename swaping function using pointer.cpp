#include<iostream>
using namespace std;
void swap(int* x, int* y){
int temp=*x;
*x=*y;
*y=temp;
cout<<*x<<" "<<*y;
}
int main(){
int a;
int b;
cout<<"Enter a number :";
cin>>a;
cout<<"Enter a number :";
cin>>b;
cout<<a<<" "<<b<<endl;
swap(&a,&b);
return 0;
}
