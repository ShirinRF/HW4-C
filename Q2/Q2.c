#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void func(int tedad,int ragham){
	int i,j,k=0,no=0,number,lower,upper,voroodi,m;
	float kfloat,tedadfloat; 
	upper=pow(10,ragham)-1;
	lower=pow(10,ragham-1);
	int x[tedad];
	srand(time(0));
	for (m=1;m<=5;m++){
	for (i=0;i<tedad;i++){
		x[i]=(rand()%(upper - lower + 1)) + lower;
		printf("%d ",x[i]);
	}
	printf("\n");
	for (j=0;j<tedad;j++){
			scanf("%d",&voroodi);
		for (i=0;i<tedad;i++){
			if (x[i]==voroodi){
			printf("Correct :) :D\n");
			k++;
			break;
			}
		}
		for (i=0;i<tedad;i++){
			if (x[i]!=voroodi){
			no++;
			}	
		}
		if (no!=(tedad-1)){
			printf("Incorrect :( :P\n");
		}
			no=0;
	}
	kfloat=k;
	tedadfloat=tedad; 
	if (k==tedad){
		printf("1\n");
	} 
	if (k==0){
		printf("0\n");
	}
	if (k>0&&k<tedad){
	printf("%f\n",(kfloat/tedadfloat));
	}
	k=0;
	}
	printf("1)Continue\n");
	printf("2)Increase numbers\n");
	printf("3)Increase digits\n");
	printf("4)End\n");
}
int main(){
	int i,tedad,ragham,pressnumber;
	scanf("%d",&tedad);
	scanf("%d",&ragham);
	func(tedad,ragham);
	scanf("%d",&pressnumber);
	while (pressnumber!=4){
	if (pressnumber==1){
		func(tedad,ragham);
	}
	if (pressnumber==2){
		tedad=tedad+1;
		func(tedad,ragham);
	}
	if (pressnumber==3){
		ragham=ragham+1;
		func(tedad,ragham);
	}
	scanf("%d",&pressnumber);
}
	if (pressnumber==4){
		return 0;
	}
}
