#include <iostream>
#include <stdio.h>
#include<cstring>
#include <cassert>
using namespace std;
int main(int argc,char *argv[]){

string layout=" ..........\n  .........\n   .......\n";
if (argc>1)
{
string keys=argv[1];

for (int i=0; i<keys.length() ;i++)
{
char key=keys[i];
layout[1]=(key=='q') ? 'o':layout[1];
layout[2]=(key=='w') ? 'o':layout[2];
layout[3]=(key=='e') ? 'o':layout[3];
layout[4]=(key=='r') ? 'o':layout[4];
layout[5]=(key=='t') ? 'o':layout[5];
layout[6]=(key=='y') ? 'o':layout[6];
layout[7]=(key=='u') ? 'o':layout[7];
layout[8]=(key=='i') ? 'o':layout[8];
layout[9]=(key=='o') ? 'o':layout[9];
layout[10]=(key=='p') ? 'o':layout[10];
layout[14]=(key=='a') ? 'o':layout[14];
layout[15]=(key=='s') ? 'o':layout[15];
layout[16]=(key=='d') ? 'o':layout[16];
layout[17]=(key=='f') ? 'o':layout[17];
layout[18]=(key=='g') ? 'o':layout[18];
layout[19]=(key=='h') ? 'o':layout[19];
layout[20]=(key=='j') ? 'o':layout[20];
layout[21]=(key=='k') ? 'o':layout[21];
layout[22]=(key=='l') ? 'o':layout[22];
layout[27]=(key=='z') ? 'o':layout[27];
layout[28]=(key=='x') ? 'o':layout[28];
layout[29]=(key=='c') ? 'o':layout[29];
layout[30]=(key=='v') ? 'o':layout[30];
layout[31]=(key=='b') ? 'o':layout[31];
layout[32]=(key=='n') ? 'o':layout[32];
layout[33]=(key=='m') ? 'o':layout[33];



}
cout<<layout;

}
else{

cout<< "Invalid Input"<<endl;

}
return 0;

}