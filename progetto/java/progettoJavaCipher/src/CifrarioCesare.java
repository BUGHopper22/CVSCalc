public class CifrarioCesare extends Testo {
    private String ciph;
    private short shift;
    private boolean check;


    public CifrarioCesare(String c,short k,boolean b){
        super(c);
        //ciph=new String(getText());
        ciph=new String("");
        shift=k;
        check=b;
    }

    //___SETTER___
    public void setText(String s){
        super.setText(s);
    }//forse prende quello di testo in automatico
    public void setCiph(String s){
        ciph=s;
    }
    public void setShift(short i){
        shift=i;
    }
    public void setCheck(boolean b){
        check=b;
    }

    //___GETTER___
    public boolean getCheck(){
        return check;
    }
    public String getCiph(){
        return ciph;
    }

    //___METODI___
    public void converti(){
        if(check)
            encrypt();
        else {
            decrypt();
        }
    }

    public void encrypt(){

        for (int i = 0; i < getSize(); i++){
            Character letter=new Character(getLetter(i));

            if(  Character.isUpperCase(letter) || Character.isLowerCase(letter)){// sono i caratteri che devo andare a modificare
                if(         ((Character.isLowerCase(letter)) && (int)(letter)+shift>(int)'z')||
                            ((Character.isUpperCase(letter)) && (int)(letter)+shift>(int)('Z'))           ) {
                    letter=( (char) (( ((int)(letter) + shift)-alphaSize)));
                    ciph=ciph+(letter);
                }
                else {
                    letter=((char) (( ((int)(letter) + shift))));
                    ciph=ciph+(letter);
                }
            }
            else {
                ciph=ciph+letter;
            }
        }
    }

    public void decrypt(){
        for (int i = 0; i < getSize(); i++){
            Character letter=getLetter(i);
            if( Character.isUpperCase(letter)|| Character.isLowerCase(letter) ){// devo agire sul dato
                if(     (Character.isUpperCase(letter)  && (int)(letter)-shift<(int)('A')) ||
                        (Character.isLowerCase(letter)) && (int)(letter)-shift<(int)('a') ) {
                    letter=( (char) (( ((int)(letter) - shift)+alphaSize)));
                    ciph=ciph+(letter);
                }
                else
                    letter=((char) (( ((int)(letter) - shift))));
                    ciph=ciph+(letter);
            }
            else
                ciph=ciph+letter;
        }
    }
    public void reset(){

        ciph=new String();
        shift= 0;
        check=false;
    }
}
