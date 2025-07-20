public class validAnagram {
    public static boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;

        int Array[] = new int[26];
        for (int i = 0; i < s.length(); i++) {
            Array[s.charAt(i) - 'a']++;
            Array[t.charAt(i) - 'a']--;
        }
        for (int x : Array) {
            if (x != 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        String s = new String("cat");
        String t = new String("tac");
        boolean result = isAnagram(s, t);
        if (result) {
            System.out.println("Valid anagram");
        } else {
            System.out.println("invalid anagram");
        }
    }

    @Override
    public String toString() {
        return "validAnagram []";
    }
}
