


L1 = []
L2 = []
def mmc(e1, e2, n):
  S = []
  L1 = []
  L2 = []
  for i in range(1, n):
    L1.append( e1 * i)
    L2.append( e2 * i)
  S = L1 | L2

