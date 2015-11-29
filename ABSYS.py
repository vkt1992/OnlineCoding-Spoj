import sys

def main():
	t=input()
	
	while(t!=0):

		r=raw_input()
		arr=raw_input().split()
		num1=arr[0]
		num2=arr[2]
		num3=arr[4]
		mystr='machula'
		if(mystr in num1):
			num1=int(num3)-int(num2)

		elif(mystr in num2):
			num2=int(num3)-int(num1)

		elif(mystr in num3):
			num3=int(num1)+int(num2)

		print num1,'+',num2,'=',num3

		t=t-1

	


main()
sys.exit(0)