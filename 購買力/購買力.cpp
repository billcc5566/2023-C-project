#include<stdio.h>
#include<math.h>
int main(){
int n,d,i,j,a,b,c;
printf("�п�Jn�Ӱӫ~�P����̤j�t��d\n");
scanf("%d%d",&n,&d);
int price[n][3];
for(i=0;i<n;i++){
	printf("�п�J��%d�Ӱӫ~��T�ѻ���\n",i+1);
	for(j=0;j<3;j++){
		scanf("%d",&price[i][j]);
	}
}
j=1;
int sum=0,amount=0;
for(i=0;i<n;i++){
	a=abs(price[i][j-1]-price[i][j]);
	b=abs(price[i][j-1]-price[i][j+1]);
	c=abs(price[i][j]-price[i][j+1]);
	if(a>d||b>d||c>d){
	 for(int k=0;k<3;k++){
	 	sum=price[i][k]+sum;
	 }	
	 amount++;
	}
	}
	sum=sum/3;
	printf("%d\t%d",amount,sum);
	}
