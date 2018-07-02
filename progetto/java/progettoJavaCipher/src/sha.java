import java.security.*;
import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.logging.*;
import javax.xml.bind.DatatypeConverter;

public class sha extends Testo {
    private String type;//SHA-1 SHA-256 SHA-384 SHA-512
    private StringBuffer output;

    public sha(String s,String t){
        super(s);
        type=new String(t);
        output=new StringBuffer();
    }

    //___SETTER___
    public void setText(String s){setText(s);}
    public void setType(String s){type=s;}

    //___GETTER___
    public String getInput(){return getText();}
    public StringBuffer getOutput(){return output;}
    public String getType(){return type;}

    //___METODI
    public  void converti(){
        try {
            MessageDigest msdDigest;
            msdDigest = MessageDigest.getInstance(type);
            msdDigest.update(getInput().getBytes());
            byte[] messageDigest = msdDigest.digest();
            for (byte bytes : messageDigest) {
                output.append(String.format("%02x", bytes & 0xff));
            }

        } catch (NoSuchAlgorithmException exception) {
            //exception.printStackTrace();
            System.out.println("errore");
        }

        //return input;
    }


    public void reset(){}
}
