# cook your dish here
T = int(input())
for _ in range(T):
    
    n = int(input())
    s = list(input())
    length = len(s)
    
    if length%2 == 1:
        length -= 1
    for i in range(0, length, 2):
        s[i], s[i+1] = s[i+1], s[i]
    s = "".join(s)
    for character in s:
        convertedChar = chr(ord('z') + ord('a') - ord(character))
        print(convertedChar, end = "")
    print()