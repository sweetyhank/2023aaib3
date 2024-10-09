#week05-1.py
a=input()
for c in a:
	if c.islower():c=c.upper()
	elif c.isupper(): c=c.lower()
	print( c , end='')
print()