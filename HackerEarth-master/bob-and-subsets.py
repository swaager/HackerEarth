s=input()
s=s.split()
n=int(s[0])
k=int(s[1])
s=input()
a=[]
s=s.split()
for i in range(n):
    a.append(int(s[i]))
bin=[]
kd=a
dr=[0]*2049
for i in a:
    dr[i]=1
    if k>=2:
        for j in a[i+1:]:
            temp=i | j
            dr[temp]=1
for i in range(n):
    c=10
    t=[0]*11
    while kd[i]!=0:
        t[c]=(kd[i]%2)
        kd[i]//=2
        c-=1
    bin.append(t)
ans=0
if k<=11:
    for i in range(1,2048):
        if dr[i]==1:
            ans+=1
            continue
        comp=[0]*11
        j=i
        c=10
        while j!=0:
            comp[c]=j%2
            c-=1
            j//=2
        sr=comp[:]
        for l in range(k):
            if l>11:
                break
            max=0
            kr=[0]*11
            for d in bin:
                c=0
                for ss in range(len(d)):
                    if sr[ss]==0:
                        if d[ss]==1:
                            c=0
                            break
                    if comp[ss]==1:
                        if d[ss]==1:
                            c+=1
                if c>max:
                    max=c
                    kr=d
            f=0
            for d in range(0,11):
                comp[d]=comp[d]-kr[d]
                if comp[d]<=0:
                    f+=1
            if f==11:
                ans+=1
                break
else:
    for i in range(1,2048):
        comp=[0]*11
        j=i
        c=10
        while j!=0:
            comp[c]=j%2
            c-=1
            j//=2
        sr=comp[:]
        max=0
        kr=[0]*11
        for d in bin:
            c=0
            for ss in range(len(d)):
                if sr[ss]==0:
                    if d[ss]==1:
                        c=0
                        break
                if comp[ss]==1:
                    if d[ss]==1:
                        c+=1
            if c!=0:
                f=0
                for ss in range(0,11):
                    comp[ss]=comp[ss]-d[ss]
                    if comp[ss]<=0:
                        f+=1
                if f==11:
                    ans+=1
                    break
print(ans)
