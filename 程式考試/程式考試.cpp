#include<stdio.h> 
int main(){
	int n,i,max=0,time,error=0;
	printf("�п�J�����������\n");
	scanf("%d",&n);
	int a[n][2];
	printf("�п�J�W�Ǯɶ��P����\n");
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
		if(a[i][1]>max){
		time=a[i][0];
		max=a[i][1];	
		}
		if(a[i][1]==-1)error++;
	}
	printf("�`����%d�̰����ɶ��I��%d",max-n-2*error,time);
}
