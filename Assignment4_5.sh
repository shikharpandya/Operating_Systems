#!/bin/bash
#HRA=40% of basic

echo Enter your Basic Salary amount
read basic
(( HRA = 40 \* $basic))
((HRA = $HRA / 100 ))
echo "Your HRA is "
echo $HRA


