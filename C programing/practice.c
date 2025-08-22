//CH.SC.U4CSE24015
#include <stdio.h>
int main(){
int count = 0;
int n = 5;
int marks;
for(int i = 0;i<n;i++){
    printf("Enter the marks : ");
    scanf("%d",&marks);

    if(marks >= 40){
    count+=1;
}
}
printf("Count is : %i",count);
return 1;
}
