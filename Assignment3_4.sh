echo Enter 1st number
read num1
echo 2nd number
read num2

if [ $num1 -gt $num2 ]
then 
	echo first number is greater
elif [ $num1 -eq $num2 ]
then
	echo both are equal
else
	echo 2nd number is greater
fi	
