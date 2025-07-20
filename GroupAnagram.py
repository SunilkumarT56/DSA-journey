strs = ["bdddddddddd","bbbbbbbbbbc"]
hashMap = {};
for s in strs:
    count = [0 for x in range(1,27)];
    for i in range(0,len(s)):
        count[ord(s[i]) - ord('a')]+=1
    data = tuple(count)
    print(data)
    if data in hashMap:
        hashMap[data].append(s)
    else:
        hashMap[data] = [s]                            #''.join(str(num) for num in count)
        
result = []
for value in hashMap.values():
    result.append(value)
print(result)

    
