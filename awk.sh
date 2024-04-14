cat ./file1.txt
awk '{printf} ' file1.txt
awk '{ print $1, $4 }' file1.txt
awk '{ sum+= $4} END { print sum }' file1.txt
awk '{ print $NF }' file1.txt
awk '{ if ($4 > 10) { print "yes"} else { print "No"}}' file1.txt
awk 'function square(x) { return x*x} {print square($4)}' file1.txt
