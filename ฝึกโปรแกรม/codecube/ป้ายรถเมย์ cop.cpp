#include<stdio.h>

main()
{
	long long int t[100000],lcm,ti,x,y,z,n,a,d,m,count=0;
	scanf("%lld",&n);

	for(a=1;a<=n;a++)
	{
		scanf("%lld",&t[a]);
	}
	y = t[1];
	z = t[2];

	for(a=1;a<n;a++)
	{		
			count++;
			if(count>1)
			{	
				z=t[a+1];
			}
			count--;
		while(t[a+1]!=0) 				//find gcd
		{
			x=t[a+1];
		//	printf("\n\t%lld \t%lld",t[a],t[a+1]);
			t[a+1]=t[a]%t[a+1];
			t[a]=x;
		}
			d=t[a];
			t[a+1]=d;	
		//	printf("\n\td=%lld\n",d);
			count++;
		//	printf("\n\tcount=%lld\n",count);
		if(count>1)
		{
			y=lcm;
	
		}
		//	printf("\n\tz=%lld\n",z);
			m =y*z;
					
			lcm=m/d;
		//	printf("\n\tm=%lld\n",m);
		//	printf("\n\td=%lld\n",d);
		//	printf("\n\tlcm=%lld\n",lcm);
			t[a+1]=lcm;	
		//	printf("-----------------\n");
				
			
	//	lcm=y/d;
	//	t[a]=lcm;
			
	}
	printf("%lld",lcm);
	
}
