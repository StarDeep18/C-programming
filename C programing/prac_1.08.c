//CH.SC.U4CSE24015
#include <stdio.h>
int i,even,odd,n;
void fun(int n){
    for(i=1;i<=n;i++){
        if(i%2==0){
            even = i-1;
            printf("%d\t",even);
        }
        else{
            odd = i+1;
            printf("%d\t",odd);
        }
    }
}
int main(){
    n=10;
    fun(n);
    return 1;
}
