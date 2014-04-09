#!/bin/bash
# GNU bash, version 4.2.45(1)-release (x86_64-pc-linux-gnu)

for n in {1..100}
do
	if [[ $n%15 -eq 0 ]]; then
		echo "FizzBuzz"
	elif [[ $n%3 -eq 0 ]]; then
		echo "Fizz"
	elif [[ $n%5 -eq 0 ]]; then
		echo "Buzz"
	else
		echo "$n"
	fi
done