package main

import "fmt"

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	var t int
	fmt.Scan(&t)

	for ; t > 0; t-- {
		var L, R string
		fmt.Scan(&L, &R)

		for len(L) < len(R) {
			L = "0" + L
		}

		n := len(R)
		ans := 0
		found := false

		for i := 0; i < n; i++ {
			if !found {
				if L[i] != R[i] {
					ans += int(R[i]-'0') - int(L[i]-'0')
					ans += 9 * (n - i - 1)
					found = true
				}
			}
		}

		fmt.Println(ans)
	}
}
