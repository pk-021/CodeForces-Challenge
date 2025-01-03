"""Tina has a square grid with n
 rows and n
 columns. Each cell in the grid is either 0
 or 1
.

Tina wants to reduce the grid by a factor of k
 (k
 is a divisor of n
). To do this, Tina splits the grid into k×k
 nonoverlapping blocks of cells such that every cell belongs to exactly one block.

Tina then replaces each block of cells with a single cell equal to the value of the cells in the block.
It is guaranteed that every cell in the same block has the same value.
Input
The first line contains t
 (1≤t≤100
) – the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤n≤1000
, 1≤k≤n
, k
 is a divisor of n
) — the number of rows and columns of the grid, and the factor that Tina wants to reduce the grid by.

Each of the following n
 lines contain n
 characters describing the cells of the grid. Each character is either 0
 or 1
. It is guaranteed every k
 by k
 block has the same value.

It is guaranteed the sum of n
 over all test cases does not exceed 1000
.

Output
For each test case, output the grid reduced by a factor of k
 on a new line."""

test_cases =0

def get_input():
    array = []
    n,k = (input("")).split(" ")  
    n,k = int(n), int(k)  
    for i in range(n):
        array.append([int(digit) for digit in str(input())])
    return array, n, k

def reduce(array,n, k ):
    output =  [ [0 for x in range(int(n/k))] for x in range(int(n/k))]
    for i in range(int(n/k)):
        for j in range(int(n/k)):
            output[i][j] = array[i*k][j*k]
    return output


n_tests = int(input(""))
for m in range(n_tests):
    inputArray, n,k = get_input()
    output = reduce(inputArray,n,k)
    output = [''.join(map(str, row)) for row in output]
    for x in output:
        print(x)
       




