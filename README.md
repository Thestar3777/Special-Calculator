# Special Calculator

A collection of C programs designed to perform various mathematical and utility calculations. This repository includes tools for basic arithmetic, geometry, and temperature conversion.
## Features

* **Basic Calculator:** Performs addition, subtraction, multiplication, and division.
* **Circle Calculator:** Calculates the circumference and area of a circle based on a radius.
* **Hypotenuse Calculator:** Finds the hypotenuse of a right triangle using the Pythagorean theorem.
* **Temperature Converter:** Converts temperatures between Fahrenheit and Celsius.

## Installation

### Prerequisites
You need a C compiler (like GCC) to build these programs.

### Compilation
Run the following commands in your terminal:

```bash
gcc calculator.c -o calculator
gcc circuncerence.c -o circuncerence
gcc HypotenuseCalc.c -o HypotenuseCalc
gcc Temperature.c -o Temperature
```
## Usage/Examples

### 1. Basic Calculator
**Command:** `./calculator`
**Output:**
```text
Enter an operator: (+, -, * or /): *

Enter number 1: 5

Enter number 2: 5

result: 25.00
```

### 2. Circle Calculator
**Command:** ./circuncerence

**Output:**
```text
Circumference: 314.16
Area: 7853.90
```

### 3. Hypotenuse Calculator

**Command:** ./HypotenuseCalc 

**Output:**

```text
Enter side A: 20
Enter side B: 30
Side C: 36.06
```

### 4. Temperature Converter

**Command:** ./Temperature

**Output:**

```text
Is the temp in F or C? f

Enter the temp in Farenheit: 45

The temp in Celcius is: 7.2
```
