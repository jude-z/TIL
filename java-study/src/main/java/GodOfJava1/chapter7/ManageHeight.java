package GodOfJava1.chapter7;

public class ManageHeight {
    static void main() {
        ManageHeight manageHeight = new ManageHeight();
        manageHeight.setData();
        for(int i = 1;i<=5;i++){
            manageHeight.printHeight(i);
        }
        for(int i = 1;i<=5;i++){
            manageHeight.printAverage(i);
        }
    }
    private int[][] arr;
    public void setData(){
        arr = new int[5][];
        arr[0] = new int[]{170,180,173,175,177};
        arr[1] = new int[]{160,165,167,186};
        arr[2] = new int[]{158,177,187,176};
        arr[3] = new int[]{173,182,181};
        arr[4] = new int[]{170,180,165,177,172};
    }
    public void printHeight(int classNo){
        int[] arrClass = arr[classNo + 1];
        System.out.println("Class No : " + classNo);
        for(int val : arrClass){
            System.out.println(val);
        }
    }
    public void printAverage(int classNo){
        double sum = 0.0;
        int[] arrClass = arr[classNo + 1];
        System.out.println("Class No : " + classNo);
        for(int val : arrClass){
            sum += val;
        }
        System.out.println("Height average:" + sum/arrClass.length);
    }
}
