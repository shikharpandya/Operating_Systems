if [ $# -ne 3 ]
then
	echo 'Usage filename x op y' 
	echo 'where x and y are numbers and op is operation'
	exit 1
else
	echo "Output is `expr $1 $2 $3`"
fi
