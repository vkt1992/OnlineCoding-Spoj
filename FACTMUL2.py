import sys

def main():
	n=input()
	n=int(n)
	mod=109546051211
	i=1
	result=1
	main_result=1

	if(n > 555555):
		print "0"
	else:
		while(i<=n):
			result=(result*i%mod)%mod
			main_result=(main_result*result)%mod
			i=i+1
		print main_result

main()
sys.exit(0)
