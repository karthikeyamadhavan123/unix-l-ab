N=6
a=0
b=1
echo "the fibonacci series is:"
for((i=0;i<N;i++))
do
echo -n "$a"
fn=$((a+b))
a=$b
b=$fn
done

