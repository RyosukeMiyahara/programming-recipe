package main

import (
	"fmt"
	"os/exec"
)

func main() {
	cmd := exec.Command("touch", "panda.txt")
	err := cmd.Run()
	if err != nil {
		fmt.Printf("Error occurs")
	}
}
