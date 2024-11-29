""" You are given a cyclic array a1,a2,…,an

You can perform the following operation on a
 at most n−1
 times:

Let m
 be the current size of a
, you can choose any two adjacent elements where the previous one is no greater than the latter one (In particular, am
 and a1
 are adjacent and am
 is the previous one), and delete exactly one of them. In other words, choose an integer i
 (1≤i≤m
) where ai≤a(imodm)+1
 holds, and delete exactly one of ai
 or a(imodm)+1
 from a
.
Your goal is to find the minimum number of operations needed to make all elements in a
 equal.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — the elements of array a
.

Output
For each test case, output a single line containing an integer: the minimum number of operations needed to make all elements in a
 equal.
"""


def findvalue(test_case):
    toKeep = max(set(test_case), key = test_case.count)

    index = 0
    next = 1
    count = 0
    while len(set(test_case)) > 1:  # Continue until all elements are the same
        
        next = (index + 1) % len(test_case)
        
        if (test_case[index] == toKeep): 
            # Calculate next index in a cyclic way
            if (toKeep<test_case[next]):
                test_case.pop(next)
                if(next==0):
                    index = len(test_case) -1
                count += 1
            else:
                index = next
            
        elif (test_case[next] == toKeep):
            if (test_case[index]<toKeep):
                test_case.pop(index)
                count += 1
                if(next == 0):
                    index = len(test_case) -1
                
            else:
                index = next
        
        else:
            # Calculate next index in a cyclic way
            if(test_case[index] < test_case[next]):
                test_case.pop(next)
                count += 1
                if(next==0):
                    index = len(test_case) -1
            else:
                index = next
            

    return count



numberOfTests = int(input())
test_cases = []
for i in range(numberOfTests):
    test_case = []
    size = int(input())
    
    while(len(test_case) != size):
        test_case =[ int(x) for x in input().strip().split(' ')]
        
    test_cases.append(test_case)

for test_case in test_cases:
    print(findvalue(test_case))

