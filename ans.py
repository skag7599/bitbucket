a=[]
for i in range(1000000):
 a.append(0)

least_prime=[]
for i in range(1000000):
 least_prime.append(i)
 
for i in range(2,1000000):
 if a[i]==0:
     for j in range(2*i,1000000,i):
         a[j]=1
         if i<least_prime[j]:
          least_prime[j]=i
          
tc=int(raw_input())
for i in range(tc):
 n=int(raw_input())
 print "%d %d" % (n-least_prime[n],least_prime[n])