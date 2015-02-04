read n1
read n2
echo n1 is $n1 and n2 is $n2 
echo 'Enter what operation you want to perform: 1-addition; 2-subtraction; 3-multiplication; 4-division; 5-modulo' 
read ch
if [ $ch = 1 ]
then 
echo `expr $n1 + $n2`
fi
if [ $ch = 2 ]
then 
echo `expr $n1 - $n2`
fi
if [ $ch = 3 ]
then 
echo `expr $n1 \* $n2`
fi
if [ $ch = 4 ]
then 
if [ $n2 != 0 ]
then
echo `expr $n1 \/ $n2`
fi
fi
if [ $ch = 5 ]
then 
echo `expr $n1 \% $n2`
fi
