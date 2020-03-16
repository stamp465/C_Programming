#include<cstdio>

int main() {
	int N,be=0,countodd=0,counteven=0,count=0,ch=0;
	while(1) {
		scanf("%d",&N);
		if(N<=0)	break;
		else if(be!=0) {
			bool check = false;
			if(N%2==0) {
				if(ch==1)	counteven = 0;
				ch=1;
				//printf("|odd %d|",countodd);
				if(be%2==1) {
					check = true;
					countodd++;
					//printf("|->%d|\n",countodd);
				} else {
					countodd = 0;
					//printf("|->%d|\n",countodd);
				}
			}
			if(N%2==1) {
				if(ch==2)	countodd = 0;
				ch=2;
				//printf("|even %d|",counteven);
				if(be%2==0) {
					check = true;
					counteven++;
					//printf("|->%d|\n",counteven);
				} else {
					counteven = 0;
					//printf("|->%d|\n",counteven);
				}
			}
			if(check == true) {
				if(counteven>count)	count = counteven;
				if(countodd>count)	count = countodd;
			}
		}
		be = N;
	}
	printf("%d",count);
}
