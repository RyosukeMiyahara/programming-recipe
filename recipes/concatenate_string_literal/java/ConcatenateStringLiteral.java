public class ConcatenateStringLiteral {
  public static void main(String[] args) {
    // Concatenate string literal simply
    System.out.println("Panda " + "is " + "cute.");

    // Concatenate string literal with delimiter
    // Stinrg.join() is added since java8
    System.out.println(String.join(", ", "Panda", "Giant panda", "Lesser panda"));

    // As needed, please use StringBuilder
    StringBuilder sb = new StringBuilder("Panda");
    sb.append(" is great!");
    System.out.println(sb);
  }
}
                           
