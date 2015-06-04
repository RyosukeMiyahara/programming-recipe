package main

import (
	"fmt"
	"strings"
)

func main() {
	// Target string
	str := "dog cat dog"

	// Show original string
	fmt.Println(str)

	// Replace one dog to panda
	fmt.Println(strings.Replace(str, "dog", "panda", 1))

	// Replace two dogs to panda
	fmt.Println(strings.Replace(str, "dog", "panda", 2))

	// Replace no dog
	fmt.Println(strings.Replace(str, "dog", "panda", 0))

	// Replace dog to panda infinitely
	fmt.Println(strings.Replace(str, "dog", "panda", -1))
}
