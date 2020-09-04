#include <iostream>
#include <math.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;

int main() {
int n=16;
fstream output;
const char* temp[14]={"16.txt","32.txt","64.txt","128.txt","256.txt","512.txt","1024.txt","2048.txt","4096.txt","8192.txt","16384.txt","32768.txt","65536.txt","131072.txt"};
for(int x=0;n<=32768;x++){cout<<"starting "<<temp[x]<<"\n";
output.open(temp[x],ios::out);
int d=0;
char edges[n][n];
  srand((int) time(0));
  for (int i = 0; i < n; i++) {
    for (int c = 0; c < i; c++) {
	char temp=(rand() %2);
	if (temp==0){
    edges[i][c]='1';
    edges[c][i]='1';}

	else{

    edges[i][c]='0';
    edges[c][i]='0';
}
    } 
  }
  
  
  for (int i = 0; i < n; i++) {
  edges[i][i]='0';
  }
  
  int count =0;
  for (int i = 0; i < n; i++) {
    for (int c = 0; c < n; c++) {
    count+= edges[i][c]-'0';
    
    }
    if (count>d)
    {
    d=count;
    }
    count=0;
    }
    output<<n<< " "<<d<<"\n";
    cout<<n<< " "<<d<<"\n";
    
    
  for (int i = 0; i < n; i++) {
    for (int c = 0; c < n; c++) {
    output<<edges[i][c]<<" ";}
    output<<"\n";
    }output.close();
n*=2;
}
return 0;
}
