tc=raw_input('')
tc=int(tc)
for ch in range(0,tc):
	countfin=0
	count=0
	n,x=raw_input('').split()
	n=int(n)
	x=int(x)
	ls=raw_input('').split()
	ls.sort()
	for p in ls:
		if count==n-1:
			break
		elif p!=ls[count+1]:
			countfin+=1
		count+=1
	count=0
	if ls[n-1]!=ls[n-2]:
		countfin+=1
	if(countfin==x):
		print 'Perfect husband'
	elif(countfin<x):
		print 'Bad husband'
	else:
		print 'Lame husband'
	countfin=0
	
		
