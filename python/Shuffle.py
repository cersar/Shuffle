def Shuffle(a,n,k):
    while(k>0):
        k-=1
        b=[]
        for i in range(2*n):
            b.append(a[i])
        for i in range(n):
            a[2*i]=b[i]
            a[2*i+1]=b[n+i]

T=input()
for i in range(T):
    args=raw_input().split(' ')
    n=int(args[0])
    k=int(args[1])
    card=raw_input().split(' ')
    Shuffle(card,n,k)
    print card
