package springbook.learningtest.junit.template;

public interface LineCallback <T>{
    T doSomethingWithLine(String line, T value);
}
