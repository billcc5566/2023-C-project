#include<stdio.h>
int main(){
 int a,b,c,A,B,C,n,i;
 int max=0;	
 printf("�п�J�u�t�@���T�Y��\n");
 scanf("%d%d%d",&a,&b,&c);
 printf("�п�J�u�t�G���T�Y��\n");
 scanf("%d%d%d",&A,&B,&C);
 printf("�п�Jn�ӭ��u\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++){
 	if(a*i*i+b*i+c+A*(n-i)*(n-i)+B*(n-i)+C>max)max=a*i*i+b*i+c+A*(n-i)*(n-i)+B*(n-i)+C;
 }
 printf("%d",max);
 return 0;
} 
