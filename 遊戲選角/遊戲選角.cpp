#include<stdio.h>
int main(){
	int n,x,i=0,sum=0;
	printf("�п�J���h�֭Ө���\n");
	scanf("%d",&n);
	int a[n][2];
	for(i=0;i<n;i++){
	 scanf("%d%d",&a[i][0],&a[i][1]);
	 if(a[i][0]*a[i][0]+a[i][1]*a[i][1]>sum){
	 sum=a[i][0]*a[i][0]+a[i][1]*a[i][1];
	 x=i;
    }}
	a[x][0]=0;
	a[x][1]=0;
	sum=0;
	for(i=0;i<n;i++){
	 if(a[i][0]*a[i][0]+a[i][1]*a[i][1]>sum){
	 sum=a[i][0]*a[i][0]+a[i][1]*a[i][1];
	 x=i;
    }}
    printf("��O�ȲĤG�j�����⪺�����O�M���m�O��%d %d",a[x][0],a[x][1]);
	return 0;
} 
