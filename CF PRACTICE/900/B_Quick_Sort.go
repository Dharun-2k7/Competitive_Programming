package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for t > 0 {
		t--

		var n, k int
		fmt.Scan(&n, &k)

		p := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Scan(&p[i])
		}

		cnt := 1

		for i := 0; i < n; i++ {
			if p[i] == cnt {
				cnt++
			}
		}

		rem := n - (cnt - 1)
		fmt.Println((rem + k - 1) / k)
	}
}
