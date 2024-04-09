# Ice Cream Shop

This repository contains a simple C++ program that calculates the maximum number of ice creams that can be bought with a given amount of coins.

## Table of Contents
- [Introduction](#introduction)
- [How to Use](#how-to-use)
- [Functionality](#functionality)

## Introduction
This C++ program is designed to help determine the maximum number of ice creams that can be purchased with a certain amount of coins. It sorts the costs of the ice creams and iterates through them, subtracting the cost from the total coins available until it is not possible to buy more ice creams.

## How to Use
To use this program, you will need a C++ compiler installed on your system. Follow these steps:
1. Clone this repository to your local machine.
2. Navigate to the directory where the code is located.
3. Compile the code using a C++ compiler. For example, using g++:
4. Run the compiled executable:
5. Enter the number of coins available.
6. Enter the cost of each ice cream.
7. Enter the total price of the ice creams you want to buy.
8. The program will output the maximum number of ice creams that can be purchased.

## Functionality
The `maxIceCream` function takes a vector of integers representing the costs of ice creams and an integer representing the total coins available. It sorts the costs in ascending order and iterates through them, subtracting each cost from the total coins until it is not possible to buy more ice creams. Then, it returns the maximum number of ice creams that can be purchased.

