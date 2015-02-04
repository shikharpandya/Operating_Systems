declare -a Numbers=(1 2 3 4 5 6 7 8 9 10)
#echo ${Numbers[@]}

echo Enter a number
read num
echo num
i=0
#for (( i=1; i <= 10; i++ ))
while [ $i -le 10 ]
do
	#echo ${Numbers[$i]}
	if [ $num -eq ${Numbers[$i]} ]
	then
		echo "yes it is present at location:"
		echo `expr $i + 1`
		break
	else
		#echo Element not present
		#continue
		if [ $i -eq 9 ]
		then
			echo "element not present in the list"
		fi
	fi
	((i++))
done
