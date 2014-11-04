import sys

data={}
for line in sys.stdin:
	line = line.translate(None, "{}\"")
	a=line.split(',')
	for val in a:
		x=val.split(':')
		#data[x[0]]
		print x
	#print line	
