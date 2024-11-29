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

