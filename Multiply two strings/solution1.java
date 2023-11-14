import java.math.BigInteger;

class Solution
{
    public String multiplyStrings(String s1,String s2)
    {
        //code here.
        BigInteger result = new BigInteger(s1).multiply(new BigInteger(s2));
        return result.toString();
    }
}
public class solution1 {
    public static void main(String[] args) {
        String s1 = "123456";
        String s2 = "1234567";
        Solution sol = new Solution();
        String result = sol.multiplyStrings(s1, s2);
        System.out.println(result);
    }
}
