package springbook.learningtest.junit.template;

import org.assertj.core.api.Assertions;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import java.io.IOException;

import static org.assertj.core.api.Assertions.*;

public class CalSumTest {
    Calculator calculator;
    String filePath;

    @BeforeEach
    void setUp(){
        calculator = new Calculator();
        filePath = "numbers.txt";
    }
    @Test
    void sumOfNumbers() throws IOException {
        int sum = calculator.calcSum(getClass().getResource(filePath).getPath());
        assertThat(sum).isEqualTo(10);
    }

    @Test
    void multiplyOfNumbers() throws IOException{
        int result = calculator.calcMultiply(getClass().getResource(filePath).getPath());
        assertThat(result).isEqualTo(24);
    }

    @Test
    void concatenate() throws IOException{
        String result = calculator.concatenate(getClass().getResource(filePath).getPath());
        assertThat(result).isEqualTo("1234");
    }
}
