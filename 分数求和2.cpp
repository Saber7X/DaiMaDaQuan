#include<bits/stdc++.h>
using namespace std;
struct name{
	int a;
	int b;
	int d;
}num[1000];
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
	int n;int i,j,k;int t; int s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d/%d",&num[i].a,&num[i].b);
	}
	for(i=0;i<n-1;i++)
	{
		t=gcd(num[i].b,num[i+1].b);//最大公约数 
	}
	for(i=0;i<n-1;i++)
	{
		s=num[i].b*num[i+1].b/t;//最小公倍数 
	}
	printf("%d %d",t,s);

	for(i=0;i<n;i++)//通分 
	{
		num[i].a=num[i].a*(s/(num[i].b));
		num[i].b=s;
		printf("%d/%d\n",num[i].a,num[i].b);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=num[i].a;
	}
	printf("sum=%d",sum);
	int l;//相加后分数的最大公约数 
	l=gcd(sum,s);//约分 
	printf("%d",l);
	sum/=l;
	s/=l;
	printf("%d %d",sum,s);
	/*if(sum/s>0)
	{
		if(sum-s*sum/s!=0)
		{
			printf("%d %d/%d",sum/s,sum-s*sum/s,s);
		}  
		else
		{
			printf("%d",sum/s);
		}
		
	}
	else
	{
		printf("%d/%d",sum,s);
	}*/
	return 0;
	

	
	
}
