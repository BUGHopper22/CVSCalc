public class CifrarioVigenere extends Testo {
    private String ciph;
    private String key;
    private boolean check;

    public CifrarioVigenere(String s,String k,boolean b){
        super(s);
        ciph=new String("");
        key=new String(k);
        check=new Boolean(b);
    }
    public static int fix;

    //___SETTER___
    public void setText(String s){setText(s);}
    public void setKey(String s){key=s;}
    public void setCiph(String s){ciph=s;}
    public void setCheck(boolean b){check=b;}

    //___GETTER___
    public Character getCar(int i){return getLetter(i);}
    public String getText(){return getText();}
    public String getCiph(){return ciph;}

    //___METODI
    public void converti(){
        if(check)
            encrypt();
        else {
            decrypt();
        }
    }

    public void encrypt(){
        int i=0,j=0;
        for(i=0;i<getSize();i++){
            if(j==key.length())
                j=0;
            Character letter=new Character(getLetter(i));
            int shift=0;
            if(!Character.isLowerCase(letter)){
                Character.toLowerCase(letter);
            }
            shift=(int)(key.charAt(j))-97;

            //non tengo conto dei caratteri accentati!
            if( Character.isLetter(letter) ){
                if( (Character.isUpperCase(letter) && (int)letter+shift>(int)('Z'))||
                        ((Character.isLowerCase(letter)) && (int)letter+shift>(int)('z')) )
                    ciph = ciph + (char) ((int) letter + shift - alphaSize);
                else
                    ciph=ciph+(char)((int)letter+shift);
                j++;
            }
            else
                ciph=ciph+letter;
        }
    }
    public void decrypt(){
        int i=0,j=0;
        for (i=0;i<getSize();i++){
            if( j==key.length() )
                j=0;
            Character letter=new Character(getLetter(i));
            int shift=0;

            if(!Character.isLowerCase(letter)){
                Character.toLowerCase(letter);
            }
            shift=(int)(key.charAt(j))-97;

            if( Character.isLetter(letter) ){// devo agire sul dato
                if(     (Character.isUpperCase(letter) && (int)letter-shift<(int)('A'))||
                        (Character.isLowerCase(letter) && (int)letter+shift<(int)('a'))     )
                    ciph = ciph + (char) ((int) letter - shift + alphaSize);
                else
                    ciph=ciph+(char)((int)letter-shift);
                j++;
            }
            else
                ciph=ciph+letter;
        }

    }
    public void reset(){
        setText("");
        ciph=new String("");
        key= new String("");
    }       //DA FARE metodo sovraccaricato dalla base
}
