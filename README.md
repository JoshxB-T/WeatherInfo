# Simple Weather Application
## Table of Contents
* [Overview](#overview)
* [Inspiration](#inspiration)
* [Logic](#logic)
* [Usage](#usage)

## Overview
This simple weather application allows users to enter daily weather data like the day of the week, high and low temperatures in Fahrenheit, and inches of rain. Upon termination of the program, it summarizes the entered data in a neat format.

## Inspiration
The inspiration behind this project was to create a straightforward tool for users to keep track of daily weather data. Whether you're planning outdoor activities, monitoring rainfall for gardening, or simply interested in tracking weather trends, this application aims to provide a user-friendly way to input and view daily weather information.

## Logic
The program follows an easy approach to gathering and storing weather data:
1. Input Collection: The user is prompted to enter the day of the week, high and low temperatures, inches of rain, and if another day will be entered.
2. Data Storage: The entered data is stored into a vector using push_back() for later traversal.
3. Summary Generation: Upon termination of the program, a summary of the data is generated in a neat output.

## Usage
1. Input Data:
   * Run the program.
   * Follow the on-screen prompts to enter data.
2. View Summary:
   * After entering data for each day, a vector will hold the weather info to be displayed.
3. Terminate Program:
   * Program terminates when the user enters 'n' and the weather into displays.

Example of output:
```
 Week Day       Hi      Low     Rain
 --------     ----     ----     ----
   Sunday       93       23      0.1
   Monday       87       31      0.3
---------     ----     ----     ----
 Averages     90.0     27.0      0.2

Highest reading: 93 [Sunday]
Lowest reading: 23 [Sunday]
Total rainfall: 0.4"
```
