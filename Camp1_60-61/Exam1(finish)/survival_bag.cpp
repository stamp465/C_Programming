#include<cstdio>
int main() {
	int water,bread,egg;
	scanf("%d %d %d",&water,&bread,&egg);
	int w=water/3,b=bread/4,e=egg/2;
	if(bread-(4*w)>=0&&egg-(2*w)>=0) {
		printf("%d %d %d %d",w,water-(3*w),bread-(4*w),egg-(2*w));
	} else if(water-(3*b)>=0&&egg-(2*b)>=0) {
		printf("%d %d %d %d",b,water-(3*b),bread-(4*b),egg-(2*b));
	} else if(bread-(4*e)>=0&&water-(3*e)>=0) {
		printf("%d %d %d %d",e,water-(3*e),bread-(4*e),egg-(2*e));
	}
}


