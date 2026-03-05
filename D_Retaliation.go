package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for t > 0 {
		var n int
		fmt.Scan(&n)

		a := make([]int64, n)

		for i := 0; i < n; i++ {
			fmt.Scan(&a[i])
		}

		d := a[1] - a[0]
		ok := true

		for i := 1; i < n; i++ {

			if a[i]-a[i-1] != d {
				ok = false
				break
			}
		}

		if !ok {
			fmt.Println("NO")
			t--
			continue
		}

		num := a[0] - d
		den := int64(n + 1)

		if num%den != 0 {
			fmt.Println("NO")
			t--
			continue
		}

		y := num / den
		x := d + y

		if x >= 0 && y >= 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}

		t--
	}
}
