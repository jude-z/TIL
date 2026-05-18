package ThisIsJava.chapter17;

import java.io.IOException;
import java.net.URISyntaxException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;

public class StreamExample4 {
    static void main() throws URISyntaxException, IOException {
        Path path = Paths.get(StreamExample4.class.getResource("/data.txt").toURI());
        Stream<String> stream = Files.lines(path);
        stream.forEach(
                System.out::println
        );
        stream.close();

    }
}
