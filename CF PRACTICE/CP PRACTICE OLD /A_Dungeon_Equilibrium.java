import java.util.*;

public class A_Dungeon_Equilibrium {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            Map<Integer, Integer> mp = new HashMap<>();
            for (int x : a) {
                mp.put(x, mp.getOrDefault(x, 0) + 1);
            }

            int ans = 0;
            for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
                int x = entry.getKey();
                int c = entry.getValue();

                if (x == 0) {
                    ans += c;
                    continue;
                }

                int k = (c >= x) ? (c - x) : Integer.MAX_VALUE;
                int r = c;
                ans += Math.min(k, r);
            }

            System.out.println(ans);
        }
    }
}
