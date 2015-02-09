echo 'Enter the filename'
read filename
cat $filename | tr -d '\n' | tr -s " " '\n' | wc -l

