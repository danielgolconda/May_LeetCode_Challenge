class Solution {
    public int numJewelsInStones(String a, String b) {
        HashMap <String,Integer> mp = new HashMap<>();
        for(int i=0;i<a.length();i++)
        {
            char x = a.charAt(i);
            String p = Character.toString(x);
            mp.put(p,1);
        }
        int ans = 0;
        for(int i=0;i<b.length();i++)
        {
            char x = b.charAt(i);
            String p = Character.toString(x);
            if(mp.containsKey(p))
            {
                ans++;
            }
        }
        return ans;
    }
}
