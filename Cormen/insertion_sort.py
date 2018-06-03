a = [2,4,6,8,1,5,15]

for j in a[1:]:
    key = j
    i = a.index(j)-1
    while i>=0 and a[i]>key:
		  a[i+1]=a[i]
		  i=i-1
    a[i+1]=key
print (a)
