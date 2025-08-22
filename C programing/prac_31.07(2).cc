#include <stido.h>
int main(){
	int n,id,i,j;
	printf("Number of Students : ");
	scnf("&d",n);
	int s_id[n];
	for(i=0;i<n;i++){
		printf("Enter id of stud %d",i+1);
		scanf("%d",&id);	
	}
	
	return 0;
}
