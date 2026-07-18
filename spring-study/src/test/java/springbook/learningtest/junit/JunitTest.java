package springbook.learningtest.junit;

import org.assertj.core.api.Assertions;
import org.junit.jupiter.api.Test;

import java.util.HashSet;
import java.util.Set;

import static org.assertj.core.api.Assertions.*;

public class JunitTest {
    static Set<JunitTest> set = new HashSet<>();

    @Test
    void test1(){
        assertThat(!set.contains(this)).isTrue();
        set.add(this);
    }

    @Test
    void test2(){
        assertThat(!set.contains(this)).isTrue();
        set.add(this);
    }

    @Test
    void test3(){
        assertThat(!set.contains(this)).isTrue();
        set.add(this);
    }
}
