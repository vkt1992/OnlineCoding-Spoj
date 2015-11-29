import sys
def main():
	t=1024
	while(t!=0):
		n=input()
		n=int(n)

		if(n==1):
			print 1
		else:
			res=n + (n-2)
			print res
		t=t-1

main()
sys.exit(0)			