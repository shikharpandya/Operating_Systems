n1=0
n2=1
ch=1
while [ $ch -ne 0 ]
do
	((n1=n1+n2))
	((n2=n2+n1))
	echo $n1
	echo $n2
	echo "Do you want to continue?(yes=1/no=0)"
	read ch	
done
