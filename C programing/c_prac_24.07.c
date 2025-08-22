//CH.SC.U4CSE24015
#include <stdio.h>;
/*int main(){
	char ch;
	printf("Enter the alphabet : ");
	scanf("%c",&ch);
	if((int)ch >=65 && (int)ch <=65+26){
		printf("Lower case of the alphabet is : %c",ch+32);
	}
	else if((int)ch >=97 && (int)ch <=97+26){
		printf("Upper case of the alphabet is : %c",ch-32);
	}
	else{
		printf("It is not a alphabet...");
	}
	return 0;
}*/

int main(){
	int x,n,i;
	int sum=0;
	printf("Enter the number of terms and the value of x : ");
	scanf("%d%d",&n,&x);
	for(i=0;i<n*2;i){
		if(i%2!=0){
			sum+=i;
		}
	}
	sum*=x;
	printf("The sum of function is : %d",sum);
	return 0;
}



