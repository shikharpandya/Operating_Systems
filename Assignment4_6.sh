time=""
time=`echo $(date +"%H")`
if [ $time -le 12 ]
then 
	echo Good Morning
elif [ $time -le 17 ]
then
	echo Good Afternoon
elif [ $time -le 7 ]
then
	echo Good Evening
fi
