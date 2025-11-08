import java.util.*;

public class io { // name of file
  public static void main(String[] args) {
    // --- INPUT ---
    Scanner sc = new Scanner(System.in); // standard input method

    // input an integer N
    int N = sc.nextInt();

    // input an array a of characters of length N
    char[] a = new char[N];
    for (int i = 0; i < N; i++)
      a[i] = sc.next().charAt(0); // sc.next() is String by default

    // input into an ArrayList b of Strings of length N
    List<String> b = new ArrayList<>();
    for (int i = 0; i < N; i++)
      b.add(sc.next());

    // input into a HashSet c of Integers of size N
    Set<Integer> c = new HashSet<>();
    for (int i = 0; i < N; i++)
      c.add(sc.nextInt());

    sc.close(); // close scanner

    // --- OUTPUT ---
    // output N twice, spaced apart, then output a newline
    System.out.println(N + " " + N);

    // output array a of chars (spaced) w/ enhanced & regular forloops
    for (int i = 0; i < N; i++)
      System.out.print(a[i] + " ");

    for (char u : a)
      System.out.print(u + " ");

    // output ArrayList b of strings (not spaced) w/ both forloops
    for (int i = 0; i < N; i++)
      System.out.print(b.get(i));

    for (String u : b)
      System.out.print(u);

    // output HashSet c of Integers (sep. by newlines)
    for (Integer u : c)
      System.out.println(u);
  }
}
