public class Command {
    public static void main(String[] args) {
        try {
            Process process = Runtime.getRuntime().exec("touch panda.txt");
        } catch (java.io.IOException e) {
            e.printStackTrace();
        }
    }
}
