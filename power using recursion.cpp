#include<stdio.h>
#include<string.h>

using namespace std;
int pow(int n,int i);
 int main()
 {	
 	int n,i; 
 	scanf("%d",&n);
 	scanf("%d",&i);
 	printf("%d",pow(n,i));
 	return 0;
 }
 
 
 int pow(int n,int i)
 {
 	
 if(i==0)
 	return 1;
 else
	return n*pow(n,i-1);
	 		
 }
