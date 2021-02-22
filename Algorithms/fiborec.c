#include<stdio.h>
#include<sys/time.h>
struct timeval diff(struct timeval s,struct timeval e)
{
	struct timeval d;
	if(e.tv_usec<s.tv_usec)
	{
		e.tv_sec=e.tv_sec-1;
		e.tv_usec=e.tv_usec+1000000;
	}
	d.tv_sec=e.tv_sec-s.tv_sec;
	d.tv_usec=e.tv_usec-s.tv_usec;
	return d;
}
int fibo(int n)
{
	if(n<2)
	{
		return n;
	}
//	else if(n==2)
//	{
//		return 1;
//	}
	else
	{
		return((fibo(n-1)+fibo(n-2)));
	}
}
int main()
{
	int n,res,i,c;
	struct timeval start,end, dur;
	struct timeval tz;
	printf("Enter nth value for finding fibonacci\n");
	        scanf("%d",&n);

	gettimeofday(&start,&tz);
	printf("starttime:%dseconds and %d microseconds\n",start.tv_sec,start.tv_usec);
	fibo(n);
	for(i=0;i<n;i++)
	{
	printf("%d\t",fibo(i));
	}
	gettimeofday(&end,&tz);
	dur=diff(start,end);
        printf("Endtime:%dseconds and %d microseconds\n",end.tv_sec,end.tv_usec);
	printf("\nThe Time Taken=%d seconds\n%d microseconds",dur.tv_sec,dur.tv_usec);
	return 0;

}
