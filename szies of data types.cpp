/* Mazhar Hussain   registration : 20MDELE098
email:20Mdele098@uetmardan.edu.pk  */
//program for finding size  of data types using size functions //
#include<stdio.h>
void sizef(int a,float b,char c,double d,long int e,long double x){
	printf("size of a %ld bytes\n",sizeof(a));
	printf("size of b %ld bytes\n",sizeof(b));
	printf("size of c %ld bytes\n",sizeof(c));
	printf("size of d %ld bytes\n",sizeof(d));
	printf("size of e %ld bytes\n",sizeof(e));
	printf("size of x %ld bytes\n",sizeof(x));
}
int main()
{
	//declaring variables//
	int a;
	float b;
	char c;
	double d;
	long int e;
	long double x;
   sizef(a,b,c,d,e,x);
	return 0;
}
