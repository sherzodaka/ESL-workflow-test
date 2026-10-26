#include<stdio.h>
#include<math.h>

#include"simple_vector.h"


int main()
{
	simple_vector_t a = { 6.4, 421.2, 3.2 };
	simple_vector_t b = { 16.0, 32.0, 64.0 };
	simple_vector_t c = cross(a, b);

	printf("c.x: %f\nc.y: %f\nc.z: %f\n", c.x, c.y, c.z);
}