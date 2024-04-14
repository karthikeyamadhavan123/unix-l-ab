find ./week12 file1.txt
find ./week12 -name *.txt
find ./week12 -empty
find ./week12 -perm 664
find . -type d
find ./ -type f -name "*.txt" -exec grep 'sridhar' {} \;
find . -type f -exec grep -l "sridhar" {}
