import sys
import math

def main():
	t=input()
	while(t!=0):
		n=input()
		if n==1 or n==0:
			print "1"
		else:	
			pi=3.1415926535897932384626433
			ee=2.7182818284590452353602874
			prt1=math.log(2*pi*n)/2;
			prt2=n*(math.log(n)-math.log(ee));
			prt3=(prt1+prt2)/math.log(10);
			count=prt3+1;
			print int(count)
		t=t-1

main()
sys.exit(0)

