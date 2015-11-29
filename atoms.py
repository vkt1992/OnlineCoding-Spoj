tc=int(raw_input())
while(tc):
	s=raw_input().split()
	n=int(s[0])
	k=int(s[1])
	m=int(s[2])

	d=0
	while(1):
		n=n*k
		d=d+1
		if(n > m):
			d=d-1
			break
	print d
	tc-=1
