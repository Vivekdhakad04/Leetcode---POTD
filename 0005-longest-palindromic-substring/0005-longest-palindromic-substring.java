class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        String res = "";
        int len = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(isPalindrome(s,i,j))
                {
                   if((j-i+1) > len)
                   {
                      len = j-i+1;
                      res = s.substring(i,j+1);
                   }
                }
            }
        }
        return res;
    }

    public static boolean isPalindrome(String s, int i, int j)
    {
        while(i < j)
        {
            if(s.charAt(i) != s.charAt(j))
            return false;

            i++;j--;
        }
    return true;
    }
}