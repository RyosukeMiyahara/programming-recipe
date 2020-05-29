using System;

class Comment {
    static void Main() {
        // one line comment
	Console.WriteLine("one line comment can write after statement\n"); // one line comment

	/* This comment style can be written in multi lines like the following */
	/*
	    line 1
	    line 2
	*/
	/* this comment style can be embedded in statement */
	Console.WriteLine("This WriteLine statement line includes " /* comment */ + "comment\n");
	}
}
