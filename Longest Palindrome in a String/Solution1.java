import java.util.*;

class Solution
{
    public static boolean  checkPalindrome(String s)
    {
        int start=0;
        int end = s.length()-1;
        while(start<end)
        {
            if(s.charAt(start)!=s.charAt(end)) return false;
            start++;
            end--;
        }
        return true;
    }
    public static String longestPalin(String S)
    {
        String t = "";
        String ans = "" + S.charAt(0);
        for(int i=S.length();i>0;i--)
        {
            for(int j=0;j<S.length()-i+1;j++)
            {
                t = S.substring(j,i+j);
                if(checkPalindrome(t))
                return t;
            }
        }
        return ans;
    }
}

public class Solution1 {
    public static void main(String[] args) {
        
    }
}