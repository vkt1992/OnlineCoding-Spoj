import sys

def main():
	t=input()

	while(t!=0):
		r=raw_input()
		arr=raw_input().split()
		flag=0
		a=int(arr[0])
		pos=1
		opr=0
		while(flag!=1):
			if(arr[pos]=='='):	flag=1

			else:
				take=arr[pos]
				
				if(take=='+'):
					opr=1
				elif(take=='-'):
					opr=2
				elif(take=='*'):
					opr=3
				elif(take=='/'):
					opr=4

				else:
					take=int(arr[pos])
					if(opr==1):
						a=a+take	
					elif(opr==2):
						a=a-take
					elif(opr==3):
						a=a*take
					elif(opr==4):
						a=a/take

			pos=pos+1

			

		print a
		t=t-1
			

main()
sys.exit(0)				