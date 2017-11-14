package main

import "fmt"

func main() {

	fmt.Println("normal for loop")
	for i := 0; i < 3; i++ {
		fmt.Printf("%d\n", i)
	}
	fmt.Println("")

	fmt.Println("for loop like foreach, using range")
	for index, value := range []int{10, 20, 30} {
		fmt.Printf("index:%d, value:%d\n", index, value)
	}
	fmt.Println("")

	fmt.Println("for loop like while loop")
	j := 0
	for j < 3 {
		fmt.Printf("%d\n", j)
		j++
	}
	fmt.Println("")

	fmt.Println("infinite for loop")
	k := 0
	for {
		fmt.Printf("%d\n", k)
		k++
		if k == 3 {
			break
		}
	}
	fmt.Println("")
}
