#include<stdio.h>
int main(){
int i,n,w1,w2,h1,h2,A1,A2,hmax=0,v1,v2,sum=0,h;
printf("�n�˴X������\n");
scanf("%d",&n);
printf("�п�Jw1,w2,h1,h2\n");
scanf("%d %d %d %d",&w1,&w2,&h1,&h2);
printf("�п�J�C���˦h�֮e�q����\n");
int v[n];
A1=w1*w1;
A2=w2*w2;
v1=A1*h1;
v2=A2*h2;
for(i=0;i<n;i++){
	scanf("%d",&v[i]);
	if(sum<=v1){  /*�����[�ev1���[��v1��,�[�ev1���[��W�Lv1,�[�e�W�Lv1*/
	sum+=v[i];
	if(sum<=v1){
	h=v[i]/A1;
	if(h>hmax)hmax=h;}
	else{
	h=(v1-(sum-v[i]))/A1+(sum-v1)/A2;
	if(h>hmax)hmax=h;
	}	
	}
	else{
	h=v[i]/A2;
	if(h>hmax)hmax=h;
	}
	
}
printf("�o�X���ˤ����A�W���ܤƶq�̤j�����׬�%d",hmax);
  return 0;
} 
