import java.io.*; // which classes are here?
import java.util.*; // which classes are here?

class MyInput {
    static private StringTokenizer stok;
    static private BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static int readInt() {
        int i = 0;
        try {
            String str = br.readLine();
            StringTokenizer stok = new StringTokenizer(str);
            i = Integer.parseInt(stok.nextToken()); // Updated to use Integer.parseInt
        } catch (IOException e) {
            System.out.println(e);
        }
        return i;
    }

    public static double readDouble() {
        double d = 0;
        try {
            String str = br.readLine();
            stok = new StringTokenizer(str);
            d = Double.parseDouble(stok.nextToken()); // Updated to use Double.parseDouble
        } catch (IOException e) {
            System.out.println(e);
        }
        return d;
    }
}
