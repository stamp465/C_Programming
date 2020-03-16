#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
	char arr[1000];
	gets(arr);
	printf("NwNnWnWnN");
	int sum=0;
	for(int i=0;i<strlen(arr);i++)
	{
		if(arr[i]=='-') {   printf("NwNnNnWnW");    sum += 36;  }
		if(arr[i]=='$') {   printf("NwNwNwNnN");    sum += 39;  }
		if(arr[i]=='%') {   printf("NnNwNwNwN");    sum += 42;  }
		if(arr[i]==' ') {   printf("NwWnNnWnN");    sum += 38;  }
		if(arr[i]=='.') {   printf("WwNnNnWnN");    sum += 37;  }
		if(arr[i]=='/') {   printf("NwNwNnNwN");    sum += 40;  }
		if(arr[i]=='+') {   printf("NwNnNwNwN");    sum += 41;  }
		if(arr[i]=='0') {   printf("NnNwWnWnN");    sum += 0;   }
		if(arr[i]=='1') {   printf("WnNwNnNnW");    sum += 1;   }
		if(arr[i]=='2') {   printf("NnWwNnNnW");    sum += 2;   }
		if(arr[i]=='3') {   printf("WnWwNnNnN");    sum += 3;   }
		if(arr[i]=='4') {   printf("NnNwWnNnW");    sum += 4;   }
		if(arr[i]=='5') {   printf("WnNwWnNnN");    sum += 5;   }
		if(arr[i]=='6') {   printf("NnWwWnNnN");    sum += 6;   }
		if(arr[i]=='7') {   printf("NnNwNnWnW");    sum += 7;   }
		if(arr[i]=='8') {   printf("WnNwNnWnN");    sum += 8;   }
		if(arr[i]=='9') {   printf("NnWwNnWnN");    sum += 9;   }
		if(arr[i]=='A') {   printf("WnNnNwNnW");    sum += 10;  }
		if(arr[i]=='B') {   printf("NnWnNwNnW");    sum += 11;  }
		if(arr[i]=='C') {   printf("WnWnNwNnN");    sum += 12;  }
		if(arr[i]=='D') {   printf("NnNnWwNnW");    sum += 13;  }
		if(arr[i]=='E') {   printf("WnNnWwNnN");    sum += 14;  }
		if(arr[i]=='F') {   printf("NnWnWwNnN");    sum += 15;  }
		if(arr[i]=='G') {   printf("NnNnNwWnW");    sum += 16;  }
		if(arr[i]=='H') {   printf("WnNnNwWnN");    sum += 17;  }
		if(arr[i]=='I') {   printf("NnWnNwWnN");    sum += 18;  }
		if(arr[i]=='J') {   printf("NnNnWwWnN");    sum += 19;  }
		if(arr[i]=='K') {   printf("WnNnNnNwW");    sum += 20;  }
		if(arr[i]=='L') {   printf("NnWnNnNwW");    sum += 21;  }
		if(arr[i]=='M') {   printf("WnWnNnNwN");    sum += 22;  }
		if(arr[i]=='N') {   printf("NnNnWnNwW");    sum += 23;  }
		if(arr[i]=='O') {   printf("WnNnWnNwN");    sum += 24;  }
		if(arr[i]=='P') {   printf("NnWnWnNwN");    sum += 25;  }
		if(arr[i]=='Q') {   printf("NnNnNnWwW");    sum += 26;  }
		if(arr[i]=='R') {   printf("WnNnNnWwN");    sum += 27;  }
		if(arr[i]=='S') {   printf("NnWnNnWwN");    sum += 28;  }
		if(arr[i]=='T') {   printf("NnNnWnWwN");    sum += 29;  }
		if(arr[i]=='U') {   printf("WwNnNnNnW");    sum += 30;  }
		if(arr[i]=='V') {   printf("NwWnNnNnW");    sum += 31;  }
		if(arr[i]=='W') {   printf("WwWnNnNnN");    sum += 32;  }
		if(arr[i]=='X') {   printf("NwNnWnNnW");    sum += 33;  }
		if(arr[i]=='Y') {   printf("WwNnWnNnN");    sum += 34;  }
		if(arr[i]=='Z') {   printf("NwWnWnNnN");    sum += 35;  }
	}
    if(sum%43==36)  printf("NwNnNnWnW");
    if(sum%43==39)  printf("NwNwNwNnN");
    if(sum%43==42)  printf("NnNwNwNwN");
    if(sum%43==38)  printf("NwWnNnWnN");
    if(sum%43==37)  printf("WwNnNnWnN");
    if(sum%43==40)  printf("NwNwNnNwN");
    if(sum%43==41)  printf("NwNnNwNwN");
    if(sum%43==0)   printf("NnNwWnWnN");
    if(sum%43==1)   printf("WnNwNnNnW");
    if(sum%43==2)   printf("NnWwNnNnW");
    if(sum%43==3)   printf("WnWwNnNnN");
    if(sum%43==4)   printf("NnNwWnNnW");
    if(sum%43==5)   printf("WnNwWnNnN");
    if(sum%43==6)   printf("NnWwWnNnN");
    if(sum%43==7)   printf("NnNwNnWnW");
    if(sum%43==8)   printf("WnNwNnWnN");
    if(sum%43==9)   printf("NnWwNnWnN");
    if(sum%43==10)  printf("WnNnNwNnW");
    if(sum%43==11)  printf("NnWnNwNnW");
    if(sum%43==12)  printf("WnWnNwNnN");
    if(sum%43==13)  printf("NnNnWwNnW");
    if(sum%43==14)  printf("WnNnWwNnN");
    if(sum%43==15)  printf("NnWnWwNnN");
    if(sum%43==16)  printf("NnNnNwWnW");
    if(sum%43==17)  printf("WnNnNwWnN");
    if(sum%43==18)  printf("NnWnNwWnN");
    if(sum%43==19)  printf("NnNnWwWnN");
    if(sum%43==20)  printf("WnNnNnNwW");
    if(sum%43==21)  printf("NnWnNnNwW");
    if(sum%43==22)  printf("WnWnNnNwN");
    if(sum%43==23)  printf("NnNnWnNwW");
    if(sum%43==24)  printf("WnNnWnNwN");
    if(sum%43==25)  printf("NnWnWnNwN");
    if(sum%43==26)  printf("NnNnNnWwW");
    if(sum%43==27)  printf("WnNnNnWwN");
    if(sum%43==28)  printf("NnWnNnWwN");
    if(sum%43==29)  printf("NnNnWnWwN");
    if(sum%43==30)  printf("WwNnNnNnW");
    if(sum%43==31)  printf("NwWnNnNnW");
    if(sum%43==32)  printf("WwWnNnNnN");
    if(sum%43==33)  printf("NwNnWnNnW");
    if(sum%43==34)  printf("WwNnWnNnN");
    if(sum%43==35)  printf("NwWnWnNnN");
	printf("NwNnWnWnN");
}
