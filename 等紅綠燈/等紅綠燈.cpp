#include<stdio.h>
int main(){
 int a,b,n,i,sum=0;
 printf("�Ф��O��J��O�B���O�һݬ��\n");
 scanf("%d %d",&a,&b);
 printf("�п�J�H��\n");
 scanf("%d",&n);
 int t[n];
 for(i=0;i<n;i++){
 	scanf("%d",&t[i]);
 	if(t[i]%(a+b)>=a){
 		sum+=a+b-t[i]%(a+b);
	 }
 }
 printf("�@�ݭn���� %d ��",sum);
  return 0;
} 
