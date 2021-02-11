#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i=0,j=0,n;
    scanf("%d",&n);
    char before[n+1],after[n+1],dif[n+1];
    scanf("%s",before);
    scanf("%s",after);
	for(i=0;i<n;i++){
    	if (before[i]<after[i]){
    		dif[i]=-1;
		}
		if (before[i]==after[i]){
    		dif[i]=0;
		}
		if (before[i]>after[i]){
    		dif[i]=1;
		}
	}
	for(i = 0; i < n-1; i++){
        if (dif[i] != 0){
            if(dif[i] + dif[i+1] == 0)
                dif[i+1] = 0;
            j++;
        }
	}
   		if(dif[n-1]!=0)
        	j++;
    
    printf("%d",j);
}

