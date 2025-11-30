# Math-Assignment-207

## Skew Symmetric Matrix Checker (C++)

This program checks whether a given square matrix is skew symmetric.
A matrix A is skew symmetric if:

A = -A^T

Which means:

a_{ij} = -a_{ji}

⸻

📌 Features
	•	Takes matrix dimensions and elements as input
	•	Validates whether the matrix is square
	•	Checks skew symmetry condition
	•	Displays the matrix if it is skew symmetric
	•	Outputs proper messages for both cases

⸻

📥 Input Format
	1.	Enter the number of rows m
	2.	Enter the number of columns n
	3.	Enter the matrix elements
📤 Output Format
	•	"Skew symmetric" followed by the matrix
	•	Or "not skew symmetric"



## Matrix Symmetry Checker (C++)

This program checks whether a given square matrix is symmetric.
A matrix A is symmetric if:

A = A^T

Which means:

a_{ij} = a_{ji}

⸻

📌 Features
	•	Reads matrix dimensions and elements
	•	Ensures the matrix is square (m == n)
	•	Checks symmetry condition
	•	Prints the matrix if it is symmetric
	•	Displays proper messages for both symmetric and non-symmetric cases

⸻

📥 Input Format
	1.	Enter the number of rows m
	2.	Enter the number of columns n
	3.	Enter the matrix elements
📤 Output Format
	•	"symmetric" followed by the matrix
	•	Or "not symmetric"

⸻

🧠 Program Logic
	1.	Check if matrix is square.
	2.	Read all elements.
	3.	Compare each element arr[i][j] with its transpose arr[j][i].
	4.	Count how many positions match.
	5.	If all m*m entries satisfy the condition → matrix is symmetric.



## Matrix Type Identifier & Transpose Generator (C++)

This C++ program identifies whether a matrix is square or rectangular.
	•	If it is rectangular, it prints the matrix and its transpose.
	•	If it is square, it reads the matrix and prints it (future operations can be added).

⸻

📌 Features

✔ Identifies matrix type
	•	If m != n → rectangular
	•	If m == n → square

✔ Rectangular Matrix
	•	Reads matrix arr1[m][n]
	•	Computes transpose arr2[n][m]
	•	Prints both matrices

✔ Square Matrix
	•	Reads matrix arr[m][m]
	•	Prints the matrix
📤 Output Format
	•	"rectangular matrix" → original + transpose
	•	"square matrix" → original matrix printed

⸻

🧠 Program Logic Summary
	1.	Take dimensions m and n.
	2.	If rectangular:
	•	Input matrix
	•	Generate transpose
	•	Print both
	3.	If square:
	•	Input matrix
	•	Print matrix



## Matrix Addition Program (C++)

This C++ program performs matrix addition of two matrices.
It reads the dimensions and elements of two matrices, checks if they are compatible, and then prints:
	•	Matrix 1
	•	Matrix 2
	•	Their sum (Matrix 1 + Matrix 2)

⸻

📌 Features
	•	Accepts dimensions of two matrices
	•	Validates whether addition is possible
	•	Reads both matrices from input
	•	Displays original matrices
	•	Computes and prints the resulting matrix

⸻

📥 Input Format

The program expects:
m n o p
<elements of matrix 1>
<elements of matrix 2>
Meaning:
	•	m x n → size of 1st matrix
	•	o x p → size of 2nd matrix

Matrices can be added only if:

m = o 
n = p

⸻

📤 Output Format
	•	Prints Matrix 1
	•	Prints Matrix 2
	•	Prints the sum of matrices
	•	Prints invalid if dimensions don’t match

⸻

🧠 Logic Summary
	1.	Read matrix sizes
	2.	Check if sizes match
	3.	Input elements of both matrices
	4.	Print both matrices
	5.	Add them element-wise
	6.	Print the sum



## Matrix Subtraction Program (C++)

This C++ program performs matrix subtraction of two matrices.
It reads the dimensions and elements of two matrices, verifies if subtraction is valid, and prints:
	•	Matrix 1
	•	Matrix 2
	•	Their difference (Matrix 1 − Matrix 2)

⸻

📌 Features
	•	Accepts dimensions of both matrices
	•	Validates subtraction compatibility
	•	Reads input for both matrices
	•	Displays Matrix 1 and Matrix 2
	•	Computes and prints the subtraction result

⸻

✔ When is subtraction valid?

Matrix subtraction is only possible if:

m = o 
 n = p

Where:
	•	m x n → size of Matrix 1
	•	o x p → size of Matrix 2

⸻

📥 Input Format
m n o p
<elements of matrix 1>
<elements of matrix 2>
📤 Output Format
	•	Prints Matrix 1
	•	Prints Matrix 2
	•	Prints result of Matrix 1 − Matrix 2
	•	Prints "invalid" if dimensions mismatch



## Matrix Multiplication Program (C++)

This C++ program performs matrix multiplication of two matrices.
It checks if multiplication is possible, reads the matrices, displays them, and prints the resulting product matrix.

⸻

📌 Matrix Multiplication Rule

Two matrices A (m × n) and B (o × p) can be multiplied only if:

n = o

The output matrix C will have size:

m \times p

Each element is computed as:

C[i][j] = \sum_{k=0}^{n-1} A[i][k] \times B[k][j]

⸻

📥 Input Format
m n o p
<elements of matrix 1>
<elements of matrix 2>
Where:
	•	m x n → size of Matrix 1
	•	o x p → size of Matrix 2

⸻

📤 Output Format
	•	Prints Matrix 1
	•	Prints Matrix 2
	•	Prints Result Matrix (Matrix1 × Matrix2)
	•	Prints "invalid" if multiplication is not possible
