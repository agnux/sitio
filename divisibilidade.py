#!/usr/bin/python3
# 2023, jan        Alexandre, Donald 
# divisibilidade 
import numpy as np

# n - dividendo
# m - divisor
# i - iterator
def divisibilidade(n, m):
   qr = []

   q = int(n / m)
   r = n % m
   qr.append(q)
   qr.append(r)
   return qr

m = 2 # divisor
n = 10 # dividendo

qrs = []
for i in range(m, n):
   qr = divisibilidade(i, m)
   qrs.append( qr )

print("m=",m,"   n   q    r", )
print(qrs)



