//CH.SC.U4CSE24015
#include <stdio.h>
/*int main(){
	int i;
	for(i=1;i<=10;i++){
		if(i==3){
			continue;
		}
		if(i==7){
			break;
		}
		printf("%d\t",i);
	}
	return 1;
}
*/


//WAP to print a number 1 to 100 without loop
/*
int main(){
	int i = 1;
	loop:
		printf("%d\t",i);
		i++;
		if(i<=100){
			goto loop;
		}
	return 1;
}
*/


/*
int main(){
	int num,i,sum=0;
	for(i = 1;i<=5;i++){
		printf("Enter number : ");
		scanf("%d",&num);
		sum+=num;		
	}
	printf("Sum : %d",sum);
	return 1;
}
*/

/*
int main(){
	int i,n,arr[n];
	printf("Enter the size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the elements : ");
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(i=0;i<=n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("The maximum element is : %d",max);
	return 1;
}
*/

int main(){
	int i,n,arr[n];
	printf("Enter the size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the elements : ");
		scanf("%d",&arr[i]);
	}
	int fmax = arr[0];
	int smax = arr[0];
	for(i=0;i<n;i++){
		if(fmax < arr[i]){
			smax = fmax;
			fmax = arr[i];
		}
		if(arr[i] > smax && arr[i] < fmax){
			smax = arr[i];
		}
	}
	printf("Second max is : %d",smax);
	return 1;
}

