#include<stdio.h>
#include<math.h>

#include"simple_vector.h"


int main()
{
	simple_vector_t a = { 2.0, 4.0, 8.0 };
	simple_vector_t b = { 16.0, 32.0, 64.0 };
	
	simple_vector_t c = cross(a, b);
	printf("c.x: %f\nc.y: %f\nc.z: %f\n\n", c.x, c.y, c.z);
	
	simple_vector_t sm = sum(a, b);
	printf("sm.x: %f\nsm.y: %f\nsm.z: %f\n\n", sm.x, sm.y, sm.z);

	simple_vector_t sb = sub(a, b);
	printf("sb.x: %f\nsb.y: %f\nsb.z: %f\n\n", sb.x, sb.y, sb.z);
	
	double d = dot(a, b);
	printf("dot: %f\n", d);
}
