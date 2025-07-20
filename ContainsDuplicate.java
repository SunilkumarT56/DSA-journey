import java.util.*;

class ContainsDuplicate{

    public static boolean Duplicate(int nums[]){

         HashSet<Integer> seenNumbers = new HashSet<>();

         for(int num : nums){
            if(seenNumbers.contains(num)){
                return true;
            }
            seenNumbers.add(num);
         }
         return false;


    }
    public static void main(String args[]){

        int nums[] = {1,1,2,3,4};
        boolean result = Duplicate(nums);

        if(result){
        System.out.println("List contains Duplicate");
        }
        else{
            System.out.println("List doesn't contains Duplicate");
        }
    }

}