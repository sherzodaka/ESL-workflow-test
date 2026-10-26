#ifndef SIMPLE_VECTOR_H
#define SIMPLE_VECTOR_H

typedef struct simple_vector {
	double x;
	double y;
	double z;
} simple_vector_t;

simple_vector_t sum(simple_vector_t a, simple_vector_t b);
simple_vector_t sub(simple_vector_t a, simple_vector_t b);
simple_vector_t cross(simple_vector_t a, simple_vector_t b);
double dot(simple_vector_t a, simple_vector_t b);


#endif
