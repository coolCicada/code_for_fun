package main

import "fmt"

func solve() {
	var n, k int
	fmt.Scan(&n, &k)

	re := n - k
	if re >= 0 && re % 2 == 0 {
		fmt.Println("YES")
		for i := 0; i < k - 1; i ++ {
			fmt.Print("1 ")
		}
		fmt.Println(1 + re)
		return
	}

	re2 := n - 2 * k
	if re2 >= 0 && re2 % 2 == 0 {
		fmt.Println("YES")
		for i := 0; i < k - 1; i ++ {
			fmt.Print("2 ")
		}
		fmt.Println(2 + re2)
		return
	}

	fmt.Println("NO")
}

func main() {
	var t int
	fmt.Scan(&t)

	for t > 0 {
		solve()
		t --
	}
}