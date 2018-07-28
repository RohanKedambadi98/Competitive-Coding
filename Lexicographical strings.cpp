#include<stdio.h>
#include<string.h>

 
 int main()
 {
 	
 	char a[100][100],t[100];
 	int i=0,n,j=0;
 	
 	printf("enter the number of strings :");
 	
    scanf("%d",&n);

 	for(i=0;i<n;i++)
 	{
 	scanf("%s[^\n]",a[i]);  //for indicating the encounter of newline charecter
	 }

	
 	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		if(strcmp(a[i],a[j])>0)
 		{
 			strcpy(t,a[i]);
 			strcpy(a[i],a[j]);
 			strcpy(a[j],t);
		}
	 }
	 printf("the sorted strings are :\n");
	 	 	for(i=0;i<n;i++)
 	{
 		printf("%s\n",a[i]);
	 }
 	
 
 	
 	return 0;
 }
 
