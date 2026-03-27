package GodOfJava1.chapter15;

public class UsingStringMethods {
    static void main() {
        UsingStringMethods usingStringMethods = new UsingStringMethods();
        String str = "The String class represents character strings.";
        usingStringMethods.printWords(str);
    }
    public void printWords(String str){
        String[] arr = str.split(" ");
        for(String value : arr){
            System.out.println(value);
        }

    }
    public void findString(String str, String findStr){
        int index = str.indexOf(findStr);
        System.out.println("string is appeared at " + index);
    }
    public void findAnyCaseString(String str, String findStr){
        str = str.toLowerCase();
        findStr = findStr.toLowerCase();
        int index = str.indexOf(findStr);
        System.out.println("string is appeared at "+ index);
    }
    public void countChar(String str, char c){
        int count = 0;
        char[] charArray = str.toCharArray();
        for(int i = 0;i<charArray.length;i++){
            if(charArray[i] == 'c') count++;
        }
        System.out.println("char '" + c + "'" + " count is " + count);
    }
    public void printContainWords(String str, String findStr){
        boolean contains = str.contains(findStr);
        if(contains){
            System.out.println(str + " contains " + findStr);
        }
    }
}
