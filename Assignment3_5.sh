i=0
sqr=0
ch=1
while [ $ch -ne 0 ]
do
echo Enter first number
read n1
echo Enter second number
read n2

	if [ $n1 -gt 50 ] || [ $n2 -gt 50 ]
	then 
		echo 'Enter numbers less than 50'
		exit 1 
	else
		echo "The output is `expr $n1 \* $n1`"
		echo "The output is `expr $n2 \* $n2`"
	fi
echo "Do You want to continue?(yes=1/n=0)" 
read ch
done
