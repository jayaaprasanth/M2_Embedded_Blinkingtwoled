# INTRODUCTION

- A calculator using infix expression evaluation algorithm on ATmega328p using LCD and Keypad with the AVR toolchain without the Arduino IDE.

# SWOT ANALYSIS

## STRENGTH
 - The ultimate strength of Calculators is its innovative and user-friendly products
 - they have a huge loyal customer base all over the world.
 - Workforce with more than 10000 people and powerful marketing has made it a market giant among tech-based businesses.
 
 ## WEEKNESS
 - They has many other wonderful product lines other than calculators
 
 ## OPPURTUNITY
 - The tech-based market has a huge opportunities in capturing the youth market.
 - Comparatively already one step ahead than other companies. Because since the beginning of childhood,
 
 ## TREATS
 - other tech-product lines as there’re already many strong brands are ruling.

# 4W & 1H

## WHAT
- A calculator is a device that performs arithmetic operations on numbers.
- The simplest calculators can do only addition, subtraction, multiplication, and division.

## WHO
- Any one can acess this for any calculations they need .

## WHY
- The purpose of a calculator is to do correct calculations, and to do so efficiently
- It is clear that a calculator should relieve the user of the need to do mental operations and of the need to rely on paper, so far as possible.

## WHEN
- n 1642, the first true “calculator” was invented: one that performed calculations through a clockwork-type of mechanism.

## HOW
- Thus, when you input numbers into a calculator, the integrated circuit converts those numbers.
 
# components
- Arduino Uno with the Atmel ATmega328p microcontroller.
- 16x2 LCD
- 4x4 Keypad

 # REQUIREMENTS
 
 ## HIGH LEVEL REQUIREMENTS
| TEST ID |	DESCRIPTION |
| ------- | ----------- |
| H_01 |	The  calculator has  the  following  keys:  0..9, ., +, -, *, /,  ±, = |
| H_02	|  In any  situation  the  calculator has  to  produce  a  correct  result  defined  by  the  well  known arithmetic  rules. |
| H_03	| If the  calculations  is  impossible  the  calculator has  to display  information helping the  user to resolve  the  erroneous  situation |

## LOW LEVEL REQUIREMENTS

| TEST ID | DESCRIPTION |
| ------- | ----------- |
| L_01 |	 On encountering a  division by  0 the  display  should read  "Cannot  divide  by  0" and  typing the key  “R”  should reset  the  calculator.. |
| L_02	|  On  calculating the  square  root  value  of a  negative  operand the  display  should  read "Wrong operand" |
| L_03	| The function that performs arithmetic operations |
