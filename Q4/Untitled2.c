#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int func(int (r)){
	int k,final=0;
	for(k=0;k<r;k++){
		final+=(r*pow(10,k));
	}
	return final;
	}

int main(){
	int num,number,i=0,j=0;
	scanf("%d",&number);
	num=number;
	while(number>0){
		number/=10;
		i++;
	}
	int digits[i];
	for (j=i-1;j>=0;j--){
			digits[j]=num%10;
			num=num/10;
		}
	for (j=0;j<i;j++){
		if (digits[j]==0){
		printf("%d:\n",digits[j]);
	}
	else {
		printf("%d: %d\n",digits[j],func(digits[j]));
	}
}
}
