#include<stdio.h>
int main(){
int n,i,j,k=0,sum=0;
int a[100000]={0};
printf("�п�J���X�ӽu�q\n");
scanf("%d",&n);
int b[n][2];
printf("�п�J�u�q���}�l���I�y�лP�������I�y��\n");
for(i=0;i<n;i++)scanf("%d%d",&b[i][0],&b[i][1]);
for(i=0;i<n;i++){
  for(j=b[i][0];j<b[i][1];j++){
  	a[j]=1;
  }	
}
while(k<100000){
	sum+=a[k];
	k++;
}
printf("�`�л\�����׬�%d",sum); 
return 0;
} 
