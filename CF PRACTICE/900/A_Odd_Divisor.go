package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for ; t > 0; t-- {
		var n int64
		fmt.Scan(&n)

		for n%2 == 0 {
			n /= 2
		}

		if n > 1 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
