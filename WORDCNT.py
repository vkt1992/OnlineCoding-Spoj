tc=int(raw_input())
while(tc):
	s=raw_input().split()
	count=0
	prevlen=0
	strlen=0
	max_value=-1
	templen=0
	for i in xrange(0,len(s)):
		if(i==0):
			count=1;
			strlen=len(s[i]);
			prevlen=strlen
			max_value=count
		else:
			templen=len(s[i])
			if(templen==prevlen):
				count=count+1
				if(max_value < count):
					max_value=count
					strlen=templen
				prevlen=templen
			else:
				count=1
				prevlen=templen
				if(max_value < count):
					max_value=count
					strlen=templen
				prevlen=templen
	print max_value
	tc-=1