package main

import (
	"fmt"
	"strconv"
)

func main() {
	fmt.Println("for int,     use Itoa: " + strconv.Itoa(100))
	fmt.Println("for bool,    use FormatBool: " + strconv.FormatBool(true))
	fmt.Println("for int64,   use FormatInt: " + strconv.FormatInt(100, 10))
	fmt.Println("for float64, use FormatFloat: " + strconv.FormatFloat(100.001, 'e', 2, 64))
	fmt.Println("for FormatInt, we can specify base: " + strconv.FormatInt(100, 2))
	fmt.Println("FormatUint also available: " + strconv.FormatUint(100, 10))

	fmt.Println("")
	fmt.Println("If you don't know type of number, you can use fmt.Sprint()")
	fmt.Println("Sprint with Integer: " + fmt.Sprint(100))
	fmt.Println("Sprint with float:   " + fmt.Sprint(100.1))
}
