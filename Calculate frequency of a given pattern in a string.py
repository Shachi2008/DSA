s="abcabcbabc"
pat="abc"
temp=""
k=3
wend=0
wstart=0
cnt=0
res=""
while wend<len(s):
    temp+=s[wend]
    if(wend-wstart+1==k):
        if pat==temp:
            cnt+=1
        res=temp[1:]
        wstart+=1
        temp=res
    wend+=1
print(cnt)
       
    
