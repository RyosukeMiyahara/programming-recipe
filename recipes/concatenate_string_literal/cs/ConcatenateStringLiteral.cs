using System;
class ConcatenateStringLiteral {
    static void Main() {
        // Concatenate string literal simply using +
        Console.WriteLine("Panda " + "is " + "cute.");

        // We can use also +=
        string text = "Panda ";
        text += "is ";
        text += "cute.";
        Console.WriteLine(text);

        // We can use also Concat() of String
        text = null;
        text = String.Concat("Panda ", "is ");
        text = String.Concat(text, "cute.");
        Console.WriteLine(text);

        // If performance is important, we should use Append() of StringBuilder
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        sb.Append("Panda ");
        sb.Append("is ");
        sb.Append("cute.");
        Console.WriteLine(sb.ToString());
    }
}
        
