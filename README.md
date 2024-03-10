# A-Z Logistics Shipping Calculator

This C program calculates shipping costs for containers based on their contents.

## How it Works

1. The program defines a function `calculateCost` to calculate the shipping cost for a given container string.
2. In the `main()` function:
   - It welcomes the user to A-Z Logistics Shipping and explains the purpose of the program.
   - Prompts the user to enter container strings and calculates the shipping costs for each.
   - Ends the input process when the user enters a period (`.`).
   - Prints the total number of containers entered and the total shipping cost.

## Functions

- `int calculateCost(const char* containerString)`: Calculates the shipping cost for a container based on its contents.

## Notes

- The program calculates shipping costs based on the weight of the container contents and a fixed rate of $2.75 per kilogram.
- Container strings consist of letters (both uppercase and lowercase), where each lowercase letter contributes 0.1 kilograms and each uppercase letter contributes 2.6 kilograms.
- The program demonstrates the use of loops, conditionals, string manipulation, and user input processing.
