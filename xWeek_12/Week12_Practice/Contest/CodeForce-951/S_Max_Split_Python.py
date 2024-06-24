#  /* _Coder   : anmamun0
#      _Created : 06 June 2024 ||  23:22:47
#      _File    : S_Max_Split.cpp 
 
#     بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */

def slove(s:str):
    cnt = 0 ; l = 0; r = 0
    v = []
    sv = "";
    for c in s:
        sv +=c;
        if(c=='L'): l+=1
        else: r +=1
        if(l==r):
            l = 0; r = 0
            v.append(sv)
            sv = ""
            cnt +=1;
    return cnt , v

s = str(input())
cnt , all_str = slove(s)

print(cnt)
for c in all_str:
    print(c)