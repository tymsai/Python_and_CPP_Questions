class Solution {
    public int[] productExceptSelf(int[] nums) {
        //int lengthv=nums.length;
        int numsl[]= new int[nums.length];
        int totalproduct=1;
        for(int i=0; i<nums.length; i++){
            totalproduct=totalproduct*nums[i];
        }
        //System.out.println(totalproduct);
        for(int i=0; i<nums.length; i++){
            if(nums[i]==0){
                int tempvar=1;
                nums[i]=1;
                for(int k=0; k<nums.length; k++){
                    tempvar=tempvar*nums[k];
                }
                numsl[i]=tempvar;
                nums[i]=0;
            }else{
            numsl[i]=totalproduct/nums[i];
            }
        }
        return numsl;
    }
} 
