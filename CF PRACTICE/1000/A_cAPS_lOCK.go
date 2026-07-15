package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	fmt.Scan(&s)
	a := true
	for i := 0; i < len(s); i++ {
		if s[i] >= 'a' && s[i] <= 'z' {
			a = false
			break
		}
	}

	b := true
	if s[0] >= 'A' && s[0] <= 'Z' {
		b = false
	} else {
		for i := 1; i < len(s); i++ {
			if s[i] >= 'a' && s[i] <= 'z' {
				b = false
				break
			}
		}
	}

	if a || b {
		s = strings.ToLower(s)
		s = strings.ToUpper(string(s[0])) + s[1:]
	}

	fmt.Println(s)
}
