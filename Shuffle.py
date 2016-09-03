def Shuffle(a,n):
    b=[]
    for i in range(n):
       b.append(a[i])
       b.append(a[n+i])
    return b

T=input()
for i in range(T):
    args=raw_input().split(' ')
    n=int(args[0])
    k=int(args[1])
    card=raw_input().split(' ')
    for j in range(k):
        card=Shuffle(card,n)
    print card
