class Solution {
    public int findComplement(int num) {
        int length=Integer.toBinaryString(num).length(); // got the length  
        int mask=(1<<length)-1;
        return num^mask;
    }
}