#include "math_utils.h"

#define PI 3.14159265358979323846

int math_add(int a, int b) {
    return a + b;
}

int math_subtract(int a, int b) {
    return a - b;
}

int math_multiply(int a, int b) {
    return a * b;
}

double math_divide(double a, double b, int *status) {
    if (b == 0.0) {
        if (status) *status = MATH_ERR_DIV_BY_ZERO;
        return 0.0;
    }
    if (status) *status = MATH_SUCCESS;
    return a / b;
}

long long math_factorial(int n, int *status) {
    if (n < 0) {
        if (status) *status = MATH_ERR_NEGATIVE_VAL;
        return -1;
    }
    if (status) *status = MATH_SUCCESS;

    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double math_power(double base, int exponent) {
    double result = 1.0;
    int exp = exponent < 0 ? -exponent : exponent;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    if (exponent < 0) {
        return 1.0 / result;
    }
    return result;
}

int math_is_prime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

double math_circle_area(double radius, int *status) {
    if (radius < 0) {
        if (status) *status = MATH_ERR_NEGATIVE_VAL;
        return 0.0;
    }
    if (status) *status = MATH_SUCCESS;
    return PI * radius * radius;
}

double math_rectangle_area(double width, double height, int *status) {
    if (width < 0 || height < 0) {
        if (status) *status = MATH_ERR_NEGATIVE_VAL;
        return 0.0;
    }
    if (status) *status = MATH_SUCCESS;
    return width * height;
}

int math_gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long math_fibonacci(int n, int *status) {
    if (n < 0) {
        if (status) *status = MATH_ERR_NEGATIVE_VAL;
        return -1;
    }
    if (status) *status = MATH_SUCCESS;
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
