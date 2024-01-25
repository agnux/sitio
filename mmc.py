#!/usr/bin/python3
# 2024, jan        Alexandre e Professor Raí
# critérios de divisibilidade 


L1 = []
L2 = []
def mmc(e1, e2, n):
  S = []
  L1 = []
  L2 = []
  for i in range(1, n):
    L1.append( e1 * i)
    L2.append( e2 * i)
  S = set(L1) & set(L2)

# teste de acurácia
Sol = mmc(3, 12, 20)
print(Sol)
