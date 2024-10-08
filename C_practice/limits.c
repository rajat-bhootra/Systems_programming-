#include<limits.h>
#include<float.h>
#include<stdio.h>

//reference: https://learn.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170
int main(){
	printf("sizeof char=%d  minval=%d r maxval=%d \n\n",CHAR_BIT, SCHAR_MIN, SCHAR_MAX);
	printf("sizeof unsigned char=%d  minval=%d  maxval=%d \n \n",CHAR_BIT, 0, UCHAR_MAX);
	printf("sizeof short=%ld  minval=%d  maxval=%d \n",sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("sizeof usngined short=%ld  minval=%d  maxval=%d \n",sizeof(unsigned short), 0, USHRT_MAX);
	printf("sizeof int=%ld  minval=%d  maxval=%d \n",sizeof(int), INT_MIN, INT_MAX);
	printf("sizeof usngined int=%ld  minval=%d  maxval=%u \n",sizeof(unsigned int), 0, UINT_MAX);
	printf("sizeof float=%ld maxfloat=%f\n", sizeof(float), FLT_MAX);
	printf("sizeof float=%ld maxfloat=%e\n", sizeof(float), FLT_MAX);
	printf("sizeof float=%ld minfloat=%e\n", sizeof(float), FLT_MIN);
	return 0;
}
