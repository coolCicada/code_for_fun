package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for ; t > 0; t -- {
		var a, b int64
		fmt.Scan(&a, &b)

		if b == 1 {
			fmt.Println("NO")
			continue
		}

		fmt.Println("YES")
		fmt.Println(a, a * b, a * (b + 1))
	}
}