city=["ac","ab","bd","cd","ad"]
citys={"ac":2,"ab":3,"bd":4,"cd":1,"ad":5}
lines=0
sum=0
while lines<4:
	lines=lines+1
	min=100
	print(lines)
	for line in city:     n*(n-1)/2
		if citys[line]<min:
		    min=citys[line]
		    cn=line
		    print(cn)
	sum=sum+citys[cn]
	city.remove(cn)
print(sum)
