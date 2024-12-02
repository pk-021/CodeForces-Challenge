""" B. Sakurako and Water
time limit per test2 seconds
memory limit per test256 megabytes
During her journey with Kosuke, Sakurako and Kosuke found a valley that can be represented as a matrix of size n×n
, where at the intersection of the i
-th row and the j
-th column is a mountain with a height of ai,j
. If ai,j<0
, then there is a lake there.

Kosuke is very afraid of water, so Sakurako needs to help him:

With her magic, she can select a square area of mountains and increase the height of each mountain on the main diagonal of that area by exactly one.
More formally, she can choose a submatrix with the upper left corner located at (i,j)
 and the lower right corner at (p,q)
, such that p−i=q−j
. She can then add one to each element at the intersection of the (i+k)
-th row and the (j+k)
-th column, for all k
 such that 0≤k≤p−i
.

Determine the minimum number of times Sakurako must use her magic so that there are no lakes.

Input
The first line contains a single integer t
 (1≤t≤200
) — the number of test cases.

Each test case is described as follows:

The first line of each test case consists of a single number n
 (1≤n≤500
).
Each of the following n
 lines consists of n
 integers separated by spaces, which correspond to the heights of the mountains in the valley a
 (−105≤ai,j≤105
).
It is guaranteed that the sum of n
 across all test cases does not exceed 1000
.

Output
For each test case, output the minimum number of times Sakurako will have to use her magic so that all lakes disappear.
"""



test_cases = int(input(""))

for i in range(test_cases):
    numMagic = 0
    n = int(input())
    ary = [[int(x) for x in input().strip().split()] for y in range(n)]
    
    for i in range(n):
        x,y = 0,i
        minm = 0
        while(y<n):
            if(ary[x][y]<minm):
                minm = ary[x][y]
            x+= 1
            y += 1
        
        numMagic += abs(minm)
        
    for i in range(1,n):
        x,y = i,0
        minm = 0
        while(x<n):
            if(ary[x][y]<minm):
                minm = ary[x][y]
            x+= 1
            y += 1
        numMagic += abs(minm)

    print(numMagic)