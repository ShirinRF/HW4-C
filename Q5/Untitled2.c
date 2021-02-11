#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//calculating value of n! % p 
void modFact(long n, long p){
	int i;
    long result=1;
    for (i = 1; i <= n; i++) {
        result = (result * i) % p; 
    }
    printf("%ld",result);
} 
int main(){ 
	long n,p;
   	scanf("%ld",&n);
   	scanf("%ld",&p);
    modFact(n+1,p); 
    return 0; 
} 

