#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#ifdef __cplusplus
extern "C" {
#endif

// Error codes for mathematical operations
#define MATH_SUCCESS            0
#define MATH_ERR_DIV_BY_ZERO   -1
#define MATH_ERR_NEGATIVE_VAL  -2

// Basic arithmetic operations
int math_add(int a, int b);
int math_subtract(int a, int b);
int math_multiply(int a, int b);
double math_divide(double a, double b, int *status);

// Advanced mathematical functions
long long math_factorial(int n, int *status);
double math_power(double base, int exponent);
int math_is_prime(int n);

// Geometry utilities
double math_circle_area(double radius, int *status);
double math_rectangle_area(double width, double height, int *status);

#ifdef __cplusplus
}
#endif

#endif // MATH_UTILS_H
