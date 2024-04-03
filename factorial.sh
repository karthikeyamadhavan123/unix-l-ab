read -p "enter the value of n:" N 
fact=1;
for((i=1;i<=N;i++))
do
fact=$((fact*i))
done
echo "the factorial of $n is:$fact"
