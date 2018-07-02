//import java.lang;

public abstract class Testo{
    private String text;
    public static short alphaSize=26;

    public Testo(String t) {
        text =new String(t);

    }


    public void setText(String s){text=s;}

    //SETTER
    /*public void setText(string s){
        text=new string(s);
    }*/

    //GETTER
    public String getText(){return text;}
    public Character getLetter(int i){return text.charAt(i);}
    public int getSize(){return text.length();}

    //___METODI___
    public abstract void converti();
    public abstract void reset();
}