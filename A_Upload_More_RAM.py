nTests = int(input())

for i in range(nTests):
    ram, k = input().strip().split()
    ram, k = int(ram), int(k)
    
    if(ram==1):
        print("1")
    elif(ram>1):
        print((ram-1)*k+1)
    else:
        print("Invalid input received, terminating!")
        exit()
        
    