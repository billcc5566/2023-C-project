#include<stdio.h>
int main(){
	int i=0,j,n,D,price,have=1,sum;
	printf("�п�Jn�PD\n");
	scanf("%d%d",&n,&D);
	int a[n];
	printf("�п�J���v����\n");
	for(j=0;j<n;j++){
	scanf("%d",&a[j]);
	 }
	price=a[0];
	while(i<n){
		if(have==1){
		if(a[i]>=price+D){
			sum=sum+a[i]-price;
			have=0;
			price=a[i];
		}	
		i++;
		}
		else{
		if(a[i]<=price-D){
			have=1;
			price=a[i];
		}	
		i++;
		}
		
	}
	printf("�`�Q��%d",sum);
	return 0;
}
 
