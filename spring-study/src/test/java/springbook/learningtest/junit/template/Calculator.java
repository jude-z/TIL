package springbook.learningtest.junit.template;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Calculator {
    public int calcSum(String filePath) throws IOException {
        return lineReadTemplates(filePath, new LineCallback<Integer>() {
            @Override
            public Integer doSomethingWithLine(String line, Integer value) {
                return value + Integer.valueOf(line);
            }
        },0);
//        return fileReadTemplate(filePath, new BufferedReaderCallback() {
//            @Override
//            public Integer doSomethingWithReader(BufferedReader br) throws IOException {
//                Integer sum = 0;
//                String line;
//                while((line = br.readLine()) != null){
//                    sum += Integer.valueOf(line);
//                }
//                return sum;
//            }
//        });
    }
    private Integer fileReadTemplate(String filePath, BufferedReaderCallback callback) throws IOException{
        BufferedReader br = null;
        try{
            br = new BufferedReader(new FileReader(filePath));
            Integer result = callback.doSomethingWithReader(br);
            return result;
        }catch (IOException e){
            System.out.println(e.getMessage());
            throw e;
        }finally {
            if(br != null){
                try{
                    br.close();
                }catch (IOException e){
                    System.out.println(e.getMessage());
                }
            }

        }
    }

    public Integer calcMultiply(String filePath) throws IOException {
        return lineReadTemplates(filePath, new LineCallback<Integer>() {
            @Override
            public Integer doSomethingWithLine(String line, Integer value) {
                return value * Integer.valueOf(line);
            }
        },1);
//        return fileReadTemplate(filePath, new BufferedReaderCallback() {
//            @Override
//            public Integer doSomethingWithReader(BufferedReader br) throws IOException {
//                Integer result = 1;
//                String line;
//                while((line = br.readLine()) != null){
//                    result *= Integer.valueOf(line);
//                }
//                return result;
//            }
//        });
    }

    private <T> T lineReadTemplates(String filePath, LineCallback<T> callback,T initialValue) throws IOException {
        BufferedReader br = null;
        try{
            br = new BufferedReader(new FileReader(filePath));
            T result = initialValue;
            String line;
            while((line = br.readLine()) != null){
                result = callback.doSomethingWithLine(line,result);
            }
            return result;
        }catch (IOException e){
            System.out.println(e.getMessage());
            throw e;
        }finally {
            if(br != null){
                try{
                    br.close();
                }catch (IOException e){
                    System.out.println(e.getMessage());
                }
            }

        }
    }

    public String concatenate(String filePath) throws IOException {
        return lineReadTemplates(filePath, new LineCallback<String>() {
            @Override
            public String doSomethingWithLine(String line, String value) {
                return value + line;
            }
        },"");
    }
}
