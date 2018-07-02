//import Testo.java;
import java.lang.*;

public class Use {
    public static void main(String[] args) {
        short i=3;

        System.out.println("CESARE");
        CifrarioCesare cc=new CifrarioCesare("azAZZ",i,true);
        System.out.println("input: " + cc.getText());
        cc.converti();
        System.out.println("output: " + cc.getCiph());
        System.out.println("");

        CifrarioCesare cc2=new CifrarioCesare("azAZZ",i,false);
        System.out.println("input: " + cc.getText());
        cc2.converti();
        System.out.println("output: " +cc2.getCiph());
        System.out.println("");

        System.out.println("VIGENERE");
        CifrarioVigenere cv=new CifrarioVigenere("abcde","baba",true);
        System.out.println("input: " + cc.getText());
        cv.converti();
        System.out.println("output: " +cv.getCiph());
        System.out.println("");

        CifrarioVigenere cv2=new CifrarioVigenere("bbddf","baba",false);
        System.out.println("input: " + cc.getText());
        cv2.converti();
        System.out.println("output: " +cv2.getCiph());
        System.out.println("");

        sha s=new sha("prova","SHA-1");
        s.converti();
        System.out.println(s.getType());
        System.out.println("input:" + s.getText());
        System.out.println("digested(hex): " + s.getOutput().toString());
        System.out.println("");


        sha s256=new sha("prova","SHA-256");
        s256.converti();
        System.out.println(s256.getType());
        System.out.println("input:" + s256.getText());
        System.out.println("digested(hex): " + s256.getOutput().toString());
        System.out.println("");

        sha s384=new sha("prova","SHA-384");
        s384.converti();
        System.out.println(s384.getType());
        System.out.println("input:" + s384.getText());
        System.out.println("digested(hex): " + s384.getOutput().toString());
        System.out.println("");


        /*cv.setCheck(false);
        cv.converti();
        System.out.println(cv);*/
    }
}
