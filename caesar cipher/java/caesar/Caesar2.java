//import java.io.*;
import edu.duke.*;

/**
 * Write a description of Caesar2 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Caesar2 {
    public String encrypt(String s,int key){
        StringBuilder sb=new StringBuilder(s);
        String alphabet="";
        for(int i='A';i<'A'+26;i++){ //uppercase ascii
            char c=(char)i;//int to char
            alphabet=alphabet+c;
        }
        String shiftedAlphabet = alphabet.substring(key)+alphabet.substring(0,key);
        //System.out.println(alphabet);
        //System.out.println(shiftedAlphabet);
        for(int i=0;i<sb.length();i++){            
            char currChar=sb.charAt(i);//current char
            int idx=alphabet.indexOf(Character.toUpperCase(currChar));
            if(idx!=-1){
                char newChar=shiftedAlphabet.charAt(idx);
                if(Character.isUpperCase(currChar))
                newChar=Character.toUpperCase(newChar);
                if(Character.isLowerCase(currChar))
                newChar=Character.toLowerCase(newChar);
                sb.setCharAt(i,newChar);
            }
        }
        return sb.toString();
    }
    public void test(){
        //test case 1
        int key=17;
        String s="abcgh";
        String encrypted=encrypt(s,2);
        System.out.println("text: "+s);
        System.out.println("encrypted: "+encrypted);
        System.out.println("case closed");
        System.out.println("==========");
        
        //test case 2
        FileResource fr=new FileResource("message2.txt");
        s=fr.asString();
        System.out.println(">> raw text >>");
        System.out.println(s);
        System.out.println("----------");
        //----------------------------
        System.out.println(">> encrypted >> ");
        encrypted=encrypt(s,key);
        System.out.println(encrypted);
        System.out.println("----------");
        
        System.out.println(">> decrypted >> ");
        String decrypted=encrypt(encrypted,26-key);
        System.out.println(decrypted);
        System.out.println("==========");
        
        
        //--print letter table
        /*
        for(int i='A';i<'A'+26;i++){ //uppercase ascii
            char c=(char)i;//int to char   
            System.out.println(c+" "+i);
        }
        for(int i='a';i<'a'+26;i++){ //lowercase ascii
            char c=(char)i;
            System.out.println(c+" "+i);
        }
        */
    }

}
