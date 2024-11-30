"""
Monocarp is waiting for a bus at the bus stop. Unfortunately, there are many people who want to ride a bus too.

You are given a list of events of two types:

B bi
 — a bus with bi
 free seats arrives at the stop;
P pi
 — pi
 people arrive at the stop.
These events are listed in a chronological order.

When a bus arrives, the following happens. All people at the bus stop (except for Monocarp) try to enter the bus. If there are enough free seats for all of them, then they all enter the bus. Otherwise, some people remain at the bus stop (the number of people who enter the bus is equal to the number of free seats).

If there is still at least one free seat after all people (except for Monocarp) enter the bus, then Monocarp can decide to enter this bus as well (but he might choose to wait for another bus). For each bus, you have to determine if it is possible for Monocarp to take that bus.

Input
The first line contains one integer n
 (1≤n≤103)
 — the number of events.

Then, n
 lines follow. The i
-th of them contains the description of the i
-th event in one of the two following formats:

B bi
 (1≤bi≤106
) — a bus with bi
 free seats arrives at the stop;
P pi
 (1≤pi≤106
) — pi
 people arrive at the stop.
Additional constraint on the input: there is at least one event of type B.

Output
For each event of type B, print YES if it is possible for Monocarp to take the corresponding bus, or NO otherwise (case-insensitive).
"""



people = 0
numEvents = int(input())

for i in range(numEvents):
    event, val = input().strip().split(" ")
    val = int(val)
    
    if(event =="P"):
        people += val
    
    elif (event == "B"):
        if(people>val):
            people -= val
            print("NO")
            
        elif(people<val):
            print("YES")
            people = 0
        else:
            print("NO")
            people = 0
        
    
    else:
        print("Invalid input")
        exit()
