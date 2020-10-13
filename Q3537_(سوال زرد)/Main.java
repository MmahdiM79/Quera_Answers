import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        


        int n = in.nextInt();

        String output = "W";
        for (; n > 0; output += "o", n--);

        System.out.println(output + "w!");
    }
}