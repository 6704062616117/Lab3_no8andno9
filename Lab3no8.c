#include<stdio.h>
int main() {
	int h,m,s,next ;
	
	scanf("%d:%d:%d",&h,&m,&s);
	printf("Hour:%d\nMinute:%d\nSecond:%d\n",h,m,s);
	
	printf("Next minutes:");
	scanf("%d",&next);

	m = m + next ;
	
	h = h + (m/60) ;
	m = m % 60 ;
	
	h = h % 24 ;
	
	printf("Hour:%d\nMinute:%d\nSecond:%d\n",h,m,s);
	
	
	return 0;
}
