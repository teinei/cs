import edu.duke.*;
import java.io.*;
/**
 * Write a description of CaesarCipher here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class CaesarCipher {
    public String encrypt(String input, int key){
        StringBuilder encrypted = new StringBuilder(input);
        String alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String shiftedAlphabet = alphabet.substring(key)+alphabet.substring(0,key);
        //substring(i), 
        //start from key and chop off chars before index k
        //include char(i)
        //s="abc";index[0],[1],[2]
        //-------------------
        //substring(0,i)
        //chars from index0 to index i-1, i exclusive, exclude i
        //exlude i, bar i from substring
        //------------------
        //print out values
        //System.out.println(alphabet.substring(key));
        //System.out.println(alphabet.substring(0,key));
        //System.out.println(shiftedAlphabet);
        //
        for(int i=0;i<encrypted.length();i++){
            char currChar=encrypted.charAt(i);
            int idx = alphabet.indexOf(Character.toUpperCase(currChar));
            if(idx!=-1){
                char newChar=shiftedAlphabet.charAt(idx);
                if(Character.isLowerCase(currChar)) newChar=Character.toLowerCase(newChar);
                if(Character.isUpperCase(currChar)) newChar=Character.toUpperCase(newChar);
                encrypted.setCharAt(i,newChar);
            }
        }
        return encrypted.toString();
    }
    
    public void testCaesar(){
        int key=17;
        FileResource fr=new FileResource("message2.txt");
        String message=fr.asString();
        String encrypted=encrypt(message,key);
        System.out.println(encrypted);
        System.out.println("---------------------");
        String decrypted=encrypt(encrypted,26-key);
        System.out.println(decrypted);
        //
        System.out.println("=====================");
        key=7;
        message="Joe";
        encrypted=encrypt(message,key);
        System.out.println(encrypted);
        System.out.println("---------------------");
        decrypted=encrypt(encrypted,26-key);
        System.out.println(decrypted);
    }
}
