# Custom atoi() and atof() Implementation

## Project Overview
This project implements custom versions of the standard C library functions `atoi()` and `atof()` without using any built-in conversion functions. The implementation handles whitespace, signs, decimal points, and invalid input similar ways to the library pre-defined functions.

## Features
- Converts numeric strings to integers (`my_atoi`)
- Converts numeric strings to floating-point values (`my_atof`)
- Handles leading spaces and tabs
- Supports positive and negative numbers
- Stops conversion at first invalid character
- Handles decimal points for floating-point conversion

## Functions

### my_atoi(const char *s)
- **Input**: String containing numeric value
- **Output**: Integer value
- **Behavior**: Skips whitespace, handles optional +/-, converts digits until first non-digit

### my_atof(const char *s)
- **Input**: String containing numeric value with optional decimal point
- **Output**: Double floating-point value
- **Behavior**: Skips whitespace, handles sign, converts integer part, processes fractional digits

## Test Cases

### Integer Tests
| Input | Expected Output |
|-------|-----------------|
| "123" | 123 |
| " -456" | -456 |
| "+789" | 789 |
| "\t0" | 0 |
| " 42abc" | 42 |
| "-" | 0 |
| "abc" | 0 |

### Float Tests
| Input | Expected Output |
|-------|-----------------|
| "123.45" | 123.450000 |
| " -67.89" | -67.890000 |
| "+0.123" | 0.123000 |
| "\t000.456" | 0.456000 |
| "3.14159abc" | 3.141590 |
| "-.5" | -0.500000 |
| "." | 0.000000 |
| "abc" | 0.000000 |

## Sample Output
=== my_atoi() tests ===
my_atoi("123") = 123
my_atoi("   -456") = -456
my_atoi("+789") = 789
my_atoi("	0") = 0
my_atoi("   42abc") = 42
my_atoi("-") = 0
my_atoi("+") = 0
my_atoi("abc") = 0

=== my_atof() tests ===
my_atof("123.45") = 123.450000
my_atof("  -67.89") = -67.890000
my_atof("+0.123") = 0.123000
my_atof("	000.456") = 0.456000
my_atof("3.14159abc") = 3.141590
my_atof("-.5") = -0.500000
my_atof(".") = 0.000000
my_atof("abc") = 0.000000