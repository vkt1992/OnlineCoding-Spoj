import sys

def main():
	t=1
	while(t!=11):
		n=raw_input()
		n=int(n)
		less=raw_input()
		less=int(less)
		natalia=(n-less)/2
		klaudia=natalia+less
		print klaudia
		print natalia
		t=t+1

main()
sys.exit(0)