package GodOfJava2.chapter2;

public class NumberObjects {
    public long parseLong(String data){
        try{
            return Long.parseLong(data);
        }catch (NumberFormatException e){
            System.out.println(data + " is not a number.");
            return 0L;
        }
    }
    public void printOtherBase(long value){
        String originalValue = String.valueOf(value);
        String binaryValue = Long.toBinaryString(value);
        String hexValue = Long.toHexString(value);
        String octaValue = Long.toOctalString(value);

        System.out.println("Original : " + originalValue);
        System.out.println("binary : " + binaryValue);
        System.out.println("hex : " + hexValue);
        System.out.println("Octa : " + octaValue);
    }
}
