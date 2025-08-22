//CH.SC.U4CSE25015
#include <stdio.h>
/*int main(){
	int i = 1;
	for(i;i<=5;i++){
		printf("%i\n",i);
	}
	return 1;
} // output : 1 2 3 4 5 (vertical)
*/


/*int main(){
	int a,b,c = 0;
	for(a=0,b=0,c=0;a<2;a++){
		printf("%i\n",a+b+c);
		b+=2;
		c+=3;
	}	
	return 1;
} // output : 0 6 (vertical)
*/


/*int main(){
	int i,j,k = 0;
	for(i=0,j=0,k=0;i<4,j<8,k<10;i++){
		printf("%d%d%d\n",i,j,k);
		j+=2;
		k+=3;
	}
	return 1;
} // output : 0 0 0 , 1 2 3 , 2 4 6 , 3 6 9 (vertical)
*/


/*int main(){
	for(;;){
		printf("Welcome to C programming");
	}
	return 1;
} // output : Infinite loop
*/


/*int main(){
	int i,j;
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<i;j++){
			printf("*");
		}
	}
	return 0;
}
*/


/*
void main(){
	int i,j;
	for(i=1;i<=3;i++){
		printf("Outer loop : %d\n",i);
		for(j=1;j<=2;j++){
			printf("Inner loop : %d\n",j);
		}
	}
} output : 1 1 2 2 1 2 3 1 2 (vertical)
*/


/*
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<i;j++){
			printf("*");
		}
	}
	return 0;
}
*/


/*
void main(){
	int i,j,a,b=1;
	scanf("%d",&a);
	for(i=1;i<a;i++){
		for(j=0;j<i;j++){
			printf("%d\t",b);
			b++;
		}
		printf("\n");
	}
}
*/


/*
int main() {
    int i, j, a;
    scanf("%d", &a);
    for(i = 0 ; i < a ; i++) {
        int b = 1;
        for(j = 0 ; j <= i ; j++) {
            if (j == 0)
                b = 1;
            else
                b = b * (i - j + 1) / j;
            printf("%d ", b);
        }
        printf("\n");
    }
    return 0;
}
*/


/*
void main(){
	int fact=1,num,i,j;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact = fact*i;
	}
	printf(" fact of %d is : %d",num,fact);
}
*/
