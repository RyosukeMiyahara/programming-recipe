package main

import "fmt"

// one line comment

func main() {
	// one line comment

	fmt.Println("one line comment can write after statement") // one line comment

	/* This comment style can be written in multi lines like the following */
	/*
	   line 1
	   line 2
	*/
	/* This comment style can be embedded in statement */
	fmt.Println("This Println() statement line includes " + /* comment */ "comment")
}
