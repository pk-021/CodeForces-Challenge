def count_distinct_substrings(s):
    n = len(s)
    seen = set()
    for i in range(n):
        hash_value = 0
        for j in range(i, n):
            hash_value = hash_value * 31 + ord(s[j])
            seen.add(hash_value)
    return len(seen)

def solve(s):
    n = len(s)
    
    if n < 2:
        return "-1"
    
    # Check for repeated adjacent character
    for i in range(n-1):
        if s[i] == s[i+1]:
            return s[i]*2
    
    # Search for substring with even distinct substrings
    for i in range(n): 
        for j in range(i+1, n+1):
            substring = s[i:j]
            if count_distinct_substrings(substring) % 2 == 0:
                return substring
    
    return "-1"

# Input processing
import sys
input = sys.stdin.read
data = input().split()

t = int(data[0])
results = [solve(data[i]) for i in range(1, t+1)]
print('\n'.join(results))