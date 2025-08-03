import java.util.*;

class harmony {

    public int countHomogeneousLayers(String input1) {
    int n = input1.length();         
    int current_index = 0;          
    int layer_size = 1;             
    int count = 0;                 
    
    
    while (current_index + layer_size <= n) {
       
        char first = input1.charAt(current_index);
        boolean isHomogeneous = true; 
       
        for (int j = 1; j < layer_size; j++) {
            if (input1.charAt(current_index + j) != first) {
                isHomogeneous = false;
                break; 
            }
        }
        
        if (isHomogeneous) {
            count++;
        }

        current_index += layer_size;
        layer_size++;
    }
    
    return count; 
}

    public static void main(String[] args) {
        harmony h = new harmony(); // Create object to call non-static method
        String input1 = "aaabbbcccdddddd";
        int result = h.countHomogeneousLayers(input1);
        System.out.println("Input: " + input1);
        System.out.println(result);
    }
}
