#include<stdio.h>
#include<math.h>

#include"simple_vector.h"


int main()
{
	simple_vector_t a = { 2.0, 4.0, 8.0 };
	simple_vector_t b = { 16.0, 32.0, 64.0 };
	simple_vector_t c = { 0,0,0};

	c = sub(a, b);
	printf("c.x: %f\nc.y: %f\nc.z: %f\n", c.x, c.y, c.z);
}
