echo "Enter the two numbers" 
read a b 
echo "1. Addition" 
echo "2. Subtraction" 
echo "3. Multiplication" 
echo "4. Division" 
echo"Enter the choice" 
read ch 
case $ch in 
1)c = 'expr$a + $b';; 
2) c= 'expr $a - $b'; ; 
3) c = 'expr $a \* $b ;; 
4) c= 'expr $a / $b' ;; 
esac 
echo"Output is $c"
