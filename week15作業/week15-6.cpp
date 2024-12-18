#include <stdio.h>
int MYPOWER(int a,int b){
	int i,s=1;
	for(i=1;i<=b;i++){
		s=s*a;
	}
	return s;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
