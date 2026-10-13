# Infix-to-Postfix-Notation
# Infix to Postfix Conversion Using a Stack

## 1. Project Overview
This project focuses on converting arithmetic expressions from Infix Notation to Postfix Notation using a stack data structure. The algorithm scans the expression from left to right and arranges operators according to precedence, associativity, and parentheses.

## 2. Aim
To design and implement an algorithm that converts infix expressions into postfix expressions using a stack.

## 3. Objectives
- Understand infix and postfix notations.
- Implement stack operations for operator handling.
- Apply operator precedence and associativity correctly.
- Handle parentheses during expression conversion.
- Generate the corresponding postfix expression.

## 4. Algorithm
1. Initialize an empty postfix output string and an empty stack.
2. Scan the infix expression from left to right.
3. If the token is an operand, append it to the output.
4. If the token is an opening parenthesis `(`, push it onto the stack.
5. If the token is a closing parenthesis `)`, pop operators into the output until `(` is found. Discard both parentheses.
6. If the token is an operator, pop operators with higher precedence, or equal precedence when the current operator is left-associative. Then push the current operator.
7. After scanning the entire expression, pop all remaining operators into the output.

## 5. Operator Precedence
Operator precedence determines the order in which operators are processed during conversion.

- `^` – Highest precedence (right-to-left associativity).
- `*`, `/`, `%` – Medium precedence (left-to-right associativity).
- `+`, `-` – Lowest precedence (left-to-right associativity).
- `(`, `)` – Used for grouping expressions.

Parentheses are removed from the final postfix expression.

## 6. Example and Stack Trace

**Infix Expression:** A+B*C

**Step 1:** Scan `A`.
- Stack: Empty
- Output: A

**Step 2:** Scan `+`.
- Stack: +
- Output: A

**Step 3:** Scan `B`.
- Stack: +
- Output: AB

**Step 4:** Scan `*`.
- Stack: + *
- Output: AB

**Step 5:** Scan `C`.
- Stack: + *
- Output: ABC

**Step 6:** End of expression.
- Pop `*` and append it to the output.
- Pop `+` and append it to the output.
- Stack: Empty
- Output: ABC*+

**Final Postfix Expression:** ABC*+

## 7. Applications
- Expression evaluation in calculators.
- Compiler design and expression parsing.
- Syntax processing in programming languages.
- Arithmetic expression processing in software applications.
- Simplifying expression evaluation using stacks.

## 8. Limitations
- Basic implementations may support only single-character operands.
- Unary operators require additional handling.
- Invalid expressions and mismatched parentheses must be handled separately.
- Operator precedence and associativity rules must be implemented correctly.
- Multi-digit numbers and multi-character identifiers require tokenization.

## 9. Conclusion
The Infix to Postfix Conversion algorithm demonstrates the effective use of a stack for processing arithmetic expressions. By applying operator precedence, associativity, and parentheses rules, the algorithm converts infix expressions into postfix notation, making them easier to evaluate and useful in compiler design and expression processing.
