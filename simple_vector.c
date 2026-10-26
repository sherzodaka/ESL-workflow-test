#include "simple_vector.h"



simple_vector_t sum(simple_vector_t a, simple_vector_t b)
{
	simple_vector_t sum;
	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	sum.z = a.z + b.z;
	return sum;
}

simple_vector_t sub(simple_vector_t a, simple_vector_t b)
{
	simple_vector_t sum;
	sum.x = a.x - b.x;
	sum.y = a.y - b.y;
	sum.z = a.z - b.z;
	return sum;
}

simple_vector_t cross(simple_vector_t a, simple_vector_t b) {
	simple_vector_t result;
	result.x = a.y * b.z - a.z * b.y;
	result.y = a.z * b.x - a.x * b.z;
	result.z = a.x * b.y - a.y * b.x;
	return result;
}

double dot(simple_vector_t a, simple_vector_t b) {
	return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}


