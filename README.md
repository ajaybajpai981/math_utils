# Math Utils Submodule

A lightweight, standalone C math and geometry utility library designed to be included as a submodule in parent applications.

## Features
- **Basic Arithmetic**: Addition, subtraction, multiplication, safe division with error reporting.
- **Advanced Math**: Factorials, power calculation, prime number validation.
- **Geometry**: Safe area calculation for circles and rectangles.

## Building and Usage
Include `math_utils.h` in your project and compile `math_utils.c` alongside your source files:

```bash
gcc -I./submodules/math_utils main.c submodules/math_utils/math_utils.c -o app
```
