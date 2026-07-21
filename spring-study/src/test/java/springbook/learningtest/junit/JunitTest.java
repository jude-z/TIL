package springbook.learningtest.junit;

import org.assertj.core.api.Assertions;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.ApplicationContext;

import java.util.HashSet;
import java.util.Set;

import static org.assertj.core.api.Assertions.*;

public class JunitTest {
    @Autowired
    ApplicationContext context;
    static Set<JunitTest> set = new HashSet<>();
    static ApplicationContext contextObject = null;
    @Test
    void test1(){
        assertThat(!set.contains(this)).isTrue();
        assertThat(contextObject)
                .satisfiesAnyOf(contextObj -> assertThat(contextObj).isNull(),
                        contextObj -> assertThat(contextObj).isSameAs(context)
                        );
        set.add(this);
        contextObject = context;
    }

    @Test
    void test2(){
        assertThat(!set.contains(this)).isTrue();
        assertThat(contextObject)
                .satisfiesAnyOf(contextObj -> assertThat(contextObj).isNull(),
                        contextObj -> assertThat(contextObj).isSameAs(context)
                );
        set.add(this);
        contextObject = context;
    }

    @Test
    void test3(){
        assertThat(!set.contains(this)).isTrue();
        assertThat(contextObject)
                .satisfiesAnyOf(contextObj -> assertThat(contextObj).isNull(),
                        contextObj -> assertThat(contextObj).isSameAs(context)
                );
        set.add(this);
        contextObject = context;
    }
}
