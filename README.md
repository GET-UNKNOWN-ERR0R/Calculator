<h2>Advanced Calculator</h2>
This is an advanced calculator program written in C++ that performs basic arithmetic operations. It provides a menu-driven interface with colored text for enhanced user experience. The available operations are addition, subtraction, multiplication, division, and modulus.

<h2>Features</h2>

<h4>Addition:</h4> Adds two numbers.
<h4>Subtraction:</h4> Subtracts the second number from the first.
<h4>Multiplication: </h4>Multiplies two numbers.
<h4>Division:</h4> Divides the first number by the second (checks for division by zero).
<h4>Modulus:</h4> Computes the remainder of the division of two integers (checks for division by zero).
<h4>Input Validation:</h4> Ensures that the user inputs valid numeric values.
<h4>Colored Text:</h4> Enhances the user interface with colored text.
<h2>Requirements</h2>
A C++ compiler that supports C++11 or later.
<h3>How to Compile and Run</h3>

g++ -o ccl.cpp
<h3>Run the executable:</h3>

./ccl or ./a.out or ./a.exe

<h3>Code Overview</h3>
<h3> Functions</h3>
<h4>clearInput():</h4> Clears the input stream in case of an error.
<h4>displayMenu():</h4> Displays the calculator menu with colored text.
<h4>getTwoNumbers(double &num1, double &num2):</h4> Prompts the user to input two numbers and validates the input.
<h3>Main Loop</h3>
The main loop of the program repeatedly displays the menu, processes user input, and performs the selected arithmetic operation until the user chooses to exit.

<h2>OVERVIEW</h2>
<pre>
MADE BY    
        ⤡ 
          GET UNKNOWN ERROR v2.7
===========================
 Advanced Calculator
===========================
Choose an operation:
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Exit
Enter your choice:
</pre>
<h3>Error Handling</h3>
The program handles various input errors, such as non-numeric inputs and division by zero, by displaying appropriate error messages and prompting the user to enter valid values.

<h3>Note</h3>
This program uses ANSI escape codes for colored text. If your terminal does not support ANSI escape codes, the color formatting will not be displayed correctly.
## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
