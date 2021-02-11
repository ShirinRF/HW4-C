#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
   char string[1000][1000];
   int i,j,n;
   char space=32;
   char cnew;
   scanf("%d",&n);
   for (i=0;i<n+1;i++){
   	gets(string[i]);
   }
   for(i=0;i<n+1;i++){
   		for (j=0;j<1000;j++){
   				string[i][j]= tolower((string)[i][j]);
   			}
		}
   for(i=0;i<n+1;i++){
   	string[i][0]= toupper((string)[i][0]);
   }
   for(i=0;i<n+1;i++){
   		for (j=0;j<1000;j++){
   			if (string[i][j]==space){
   				string[i][j+1]= toupper((string)[i][j+1]);
   			}
		}
	}
   for(i=0;i<n+1;i++){
   	printf("%s\n",string[i]);
   }
   return 0;
}
   
  
