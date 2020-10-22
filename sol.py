def fibonacci(n):
t1 = 0; t2 = 1
for i in range(1, n+1):
nextTerm = t1 + t2
t1 = t2
t2 = nextTerm
print(t1)

def prime(n):
MAX = 1000
count =0
for i in range(2, MAX):
flag = 0
for j in range(2, i):
if(i%j == 0):
flag = 1
break
if (flag == 0):
count = count + 1
if(count == n):
print(i)
break


n = int(input(“Enter the number : “))
if(n%2 == 1):
fibonacci (int(n/2) + 1)
else:
prime(int(n/2))
