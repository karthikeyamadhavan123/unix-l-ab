x=`echo "12+5" | bc `
echo $x
echo "var=10;var" | bc
echo "var=10;++var" | bc
echo "10>5" | bc
pi= `echo "h=10;4*a(1)" | bc -l`
echo $pi
echo "c($pi/3)" | bc -l
echo 'n=8;m=10;if(n>m) print "n is greater" else print "m is greater" ' | bc -l
echo "for(i=1;i<=10;i++) {i;} | bc"
