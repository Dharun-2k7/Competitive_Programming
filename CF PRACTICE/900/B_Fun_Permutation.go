package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for ; t > 0; t-- {
		var n int
		fmt.Scan(&n)

		p := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Scan(&p[i])
		}

		for i := 0; i < n; i++ {
			q := n + 1 - p[i]

			if i > 0 {
				fmt.Print(" ")
			}
			fmt.Print(q)
		}
		fmt.Println()
	}
}
