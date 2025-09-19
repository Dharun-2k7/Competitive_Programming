import java.util.*;

public class C_Make_it_Equal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();

            int[] s = new int[n];
            int[] tt = new int[n];

            for (int i = 0; i < n; i++) {
                s[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                tt[i] = sc.nextInt();
            }

            HashMap<Integer, Integer> S = new HashMap<>();
            HashMap<Integer, Integer> T = new HashMap<>();

            for (int i = 0; i < n; i++) {
                int val = s[i] % k;
                S.put(val, S.getOrDefault(val, 0) + 1);
            }
            for (int i = 0; i < n; i++) {
                int val = tt[i] % k;
                T.put(val, T.getOrDefault(val, 0) + 1);
            }

            HashSet<Integer> res = new HashSet<>();
            res.addAll(S.keySet());
            res.addAll(T.keySet());

            boolean poss = true;
            HashSet<Integer> fin = new HashSet<>();

            for (int r : res) {
                if (fin.contains(r)) continue;
                int r2 = (k - r) % k;

                if (r == r2) {
                    int cntS = S.getOrDefault(r, 0);
                    int cntT = T.getOrDefault(r, 0);
                    if (cntS != cntT) {
                        poss = false;
                        break;
                    }
                    fin.add(r);
                } else {
                    int cntS1 = S.getOrDefault(r, 0);
                    int cntS2 = S.getOrDefault(r2, 0);
                    int cntT1 = T.getOrDefault(r, 0);
                    int cntT2 = T.getOrDefault(r2, 0);

                    if ((cntS1 + cntS2) != (cntT1 + cntT2)) {
                        poss = false;
                        break;
                    }
                    fin.add(r);
                    fin.add(r2);
                }
            }

            System.out.println(poss ? "YES" : "NO");
        }

        sc.close();
    }
}
