echo Enter 1st number
read num1
echo Enter 2nd number
read num2

echo "Addition: `expr $num1 + $num2`"
echo "Subtraction: `expr $num1 - $num2`"
echo "Multiplication: `expr $num1 \* $num2`"
echo "Division: `expr $num1 / $num2`"
echo "Modulo: `expr $num1 % $num2`"
