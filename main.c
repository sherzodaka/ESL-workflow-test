#include<stdio.h>
#include<math.h>


typedef struct {
	double x;
	double y;
	double z;
} simple_vector_t;


simple_vector_t sum(simple_vector_t a, simple_vector_t b)
{
	simple_vector_t sum;
	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	sum.z = a.z + b.z;
	return sum;
}


int main()
{
	simple_vector_t a = { 2.0, 4.0, 8.0 };
	simple_vector_t b = { 16.0, 32.0, 64.0 };
	simple_vector_t c = { 0,0,0};

	c = sum(a, b);
	printf("c.x: %f\nc.y: %f\nc.z: %f\n", c.x, c.y, c.z);

	printf("Hello, World!");


}