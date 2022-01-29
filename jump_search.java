import java.lang.Math;

class JumpSearch {
    public static int jumpSearch(int[] arr, int x) {
        int n = arr.length;
        int step = (int)Math.floor(Math.sqrt(n));
        int i = 0;

        while(i < n) {
            if(arr[i] == x) {
                return i;
            } else if(arr[i] > x) {
                break;
            } else {
                i += step;
            }
        }

        int prev = i - step;

        for(int j = prev + 1;j < Math.min(i, n);++j) {
            if(arr[j] == x)
                return j;
        }

        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {2,50,80,81,90,93,105,115,120,130,135};

        for(int i = 0;i < arr.length;++i) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
        int index = jumpSearch(arr, 93);
        
        if(index > -1)
            System.out.println("Element found at " + index);
        else
            System.out.println("Element not found.");
    }
}