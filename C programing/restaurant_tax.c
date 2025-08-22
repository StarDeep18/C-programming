//CH.SC.U4CSE24022
#include <stdio.h>
int main(){
    int billwt;
    float tax,tip,totaltax,totaltip,totalbill;
    scanf("%d",&billwt);
    tax = 0.18*billwt;
    tip = 0.05*billwt;
    totalbill = (float)tax+tip+billwt;
    printf("The Tax is %.2f\n",tax);
    printf("The Tip is %.2f\n",tip);
    printf("Total BIll WIth Tax and Tip is %.2f",totalbill);
}
