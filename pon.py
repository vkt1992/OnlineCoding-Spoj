import sys
def is_prime(n):
  if n == 2 or n == 3: return True
  if n < 2 or n%2 == 0: return False
  if n < 9: return True
  if n%3 == 0: return False
  r = int(n**0.5)
  f = 5
  while f <= r:
    if n%f == 0: return False
    if n%(f+2) == 0: return False
    f +=6
  return True   

def main():
  t=input()
  while(t!=0):
    n=input()
    chck=is_prime(n)
    if(chck==True):  print "YES"
    else: print "NO"
    t=t-1

main()
sys.exit(0)