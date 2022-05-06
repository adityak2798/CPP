#include <iostream>
#include <stdio.h>
#include<cstring>
#include <cmath>
using namespace std;

/*double Pi1(long nTerm){

if (nTerm>=0){
double finalterm=4*(pow(-1,nTerm)/(2*nTerm+1));
return finalterm+Pi1(nTerm-1);
}
else{

return 0;    
}
}*/

double Pi2(long nTerm){
long i=1;
double sum=3;
while(i<=nTerm){
sum =sum+4*(pow(-1,i-1)/(2*i*(2*i+1)*(2*i+2)));
i++;
}
return sum;
}

double Pi3(long nTerm){
double arctan1=0;
double arctan2=0;
long i=0;
do{
arctan1=arctan1+pow((1.0/5.0),(2*i+1))*pow(-1,i)/(2*i+1);
arctan2=arctan2+pow((1.0/239.0),(2*i+1))*pow(-1,i)/(2*i+1);
i++;
}
while(i<=nTerm);
return 4*(4*arctan1-arctan2);


}


int main(){
long number;
double checker=3.141592653589793238463;
cin>>number;
//cout<<Pi1(number)<<endl;
cout<<Pi2(number)<<endl;
cout<<Pi3(number)<<endl;
return 0;


}    