#include <iostream>
#include <stdio.h>
#include<cstring>
#include <cassert>
using namespace std;

bool isPrime ( int m)
{
if (m<=1){return false;}    
if (m==2){
return true;}

if (m%2==0){
    return false;
}
else{
bool flag=true;
for (int i=3;i<m;i++){
if (m%i==0)
{flag=false;}
else{continue;}
}
return flag;
}
}

void goldbach ( int m){
int numbers[2]{0,0};
int sum=0;
/*if (m==2){
cout<<"2 is an invalid input"<<endl;
sum=-1;}*/
if (m%2==0 &&m>2){
for (int i=3;i<m;i+=2)
{
if (isPrime(i)==true){
numbers[0]=i;

for (int j=i;j<m;j+=2)
{

if (isPrime(j)==true){

numbers[1] =j;
sum=i+j;
if (sum==m){
cout<<"The two numbers are "<<i<< " and "<<j<<endl;
break;

}}
else
continue;

}
if (sum==m)
break;
else
continue;
}
else
continue;

}


}

else
throw "Unsupported Number";
if (sum==0)
cout<<"An exception has been found"<<endl;



}

int main(){
int number1;int number2;
cin>>number1;
cin>> number2;
bool checker=isPrime(number1);
(checker==true)? cout<<"Is a Prime Number"<<endl:cout<<"Not a Prime Number"<<endl;
goldbach(number2);

return 0;



}





