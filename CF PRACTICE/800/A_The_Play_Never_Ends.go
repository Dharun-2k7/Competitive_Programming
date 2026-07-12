package main

import "fmt"

func main() {
	var t, k int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&k)

		if k%3 == 1 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
