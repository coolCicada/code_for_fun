package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for t > 0 {
		solve()
		t --
	}
}

func solve() {
	var n, k int64
	fmt.Scan(&n, &k)

	cf := (n + k - 1) / k
	t := cf * k
	fmt.Println((t + n - 1) / n)
}