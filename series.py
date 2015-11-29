import sys

def main():
	t=input()

	myres=[]
	frt=2
	snd=1
	for i in range(1,100010):
		if i==1:
			myres.append(1)
		else:
			myres.append(((frt*i)-snd)%1000000007)
			snd=frt+snd+snd
			frt=frt*2

	for x in range(1,t+1):

		n=input()
		res=myres[n];
		print "Case ",x,": ",res

		
main()
sys.exit(0)