//CH.SC.U4CSE24022
#include <stdio.h>
int main(){
    int hour;
    double salaryperday,totsalary;
    scanf("%d",&hour);
    scanf("%lf",&salaryperday);
    totsalary = (double)hour*salaryperday;
    printf("%.2lf",totsalary);
    return 0;
}
