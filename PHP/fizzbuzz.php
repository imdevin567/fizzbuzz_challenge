<?php
// PHP 5.5.3-1ubuntu2.3

for($n = 1; $n <= 100; $n++) {
	if ($n%15 == 0) {
		echo "FizzBuzz";
	} elseif ($n%3 == 0) {
		echo "Fizz";
	} elseif ($n%5 == 0) {
		echo "Buzz";
	} else {
		echo $n;
	}

	echo "\n";
}