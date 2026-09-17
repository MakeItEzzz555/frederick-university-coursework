import java.io.*; // imports the io package

class MinMaxBuffer {
    public static void main(String[] args) throws IOException {
        int max = Integer.MIN_VALUE; // the largest number found
        int min = Integer.MAX_VALUE; // the smallest number found

        BufferedReader input = new BufferedReader(new InputStreamReader(System.in)); // prepares the input
        int i = 0; // loop counter
        final int n = 3; // n is a constant

        while (i < n) { // loop n times
            String s = input.readLine(); // reads numbers from the keyboard
            s = s.trim(); // trim white space at ends
            int next = Integer.parseInt(s); // convert to int

            if (next < min) // found something smaller?
                min = next; // if so, save it
            if (next > max) // found something bigger?
                max = next; // if so, save it

            i = i + 1; // increment loop counter
        } // end of while (i < n)

        System.out.println("The maximum found is " + max);
        System.out.println("The minimum found is " + min);
    }
}
