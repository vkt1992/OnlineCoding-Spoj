import sys

def main():
	n=input()

	summie=0
	i=1
	while(i!=(n/2)):

		if(i!=1):
			if(i*i <= n):
				summie=summie+1

			if(n%i==0):
				summie=summie+1

		else:
			summie=summie+n	
		i=i+1

	print summie

main()
sys.exit(0)
