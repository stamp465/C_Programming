#include<cstdio>
int N;
int main() {
	scanf("%d",&N);
	int be_w=0,be_b=0,be_e=0;
	for(int i=0;i<N;i++){
	int water,bread,egg;
	scanf("%d %d %d",&water,&bread,&egg);
	water+=be_w;	bread+=be_b;	egg+=be_e;
	int w=water/3,b=bread/4,e=egg/2;
	if(bread-(4*w)>=0&&egg-(2*w)>=0) {
		printf("%d %d %d %d\n",w,water-(3*w),bread-(4*w),egg-(2*w));
		be_w = water-(3*w); be_b = bread-(4*w); be_e = egg-(2*w);
	} else if(water-(3*b)>=0&&egg-(2*b)>=0) {
		printf("%d %d %d %d\n",b,water-(3*b),bread-(4*b),egg-(2*b));
		be_w = water-(3*b); be_b = bread-(4*b); be_e = egg-(2*b);
	} else if(bread-(4*e)>=0&&water-(3*e)>=0) {
		printf("%d %d %d %d\n",e,water-(3*e),bread-(4*e),egg-(2*e));
		be_w = water-(3*e); be_b = bread-(4*e); be_e = egg-(2*e);
	}
}
}



