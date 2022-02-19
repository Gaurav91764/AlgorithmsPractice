public class TivialHashing {
    static int MAX = 1000;

    static boolean[][] hash = new boolean[MAX + 1][2];

    static boolean search(int n) {
        if(n >= 0)
            return hash[n][0];
        else
            return hash[-n][1];
        
    }

    static void insert(int[] arr) {
        for(int i = 0;i < arr.length;++i) {
            if(arr[i] >= 0)
                hash[arr[i]][0] = true;
            else
                hash[-arr[i]][1] = true;
        }
    }

    public static void main(String[] args) {
        int[] arr = {24, 89, 78, 67, 0, -90, -23};
        insert(arr);

        if(search(40)) {
            System.out.println("it is present");
        } else {
            System.out.println("it is not present");
        }
    }
}