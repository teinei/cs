import java.util.*;

public class book {
    
    private static int x;
    private static int num;
    private static int num1;
 
     /**
     * @param args
     */
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        bookname A1=new bookname();
        booknum A2=new booknum();
        Scanner s=new Scanner(System.in);
        System.out.println("输入命令: 1-按照书名查找图书  2-按照序号查找图书");
        try{
            x=s.nextInt();
            //throw new Exception("输入错误，请按提示输入数字命令！"); 
        }catch(Exception e){
            System.out.println("输入错误，请按提示输入数字命令！");
            book.main(null);
        }
        
        if(x==1){ //按书名查找书籍
            System.out.println("输入图书名称:");
            String name=s.next();
            A1.output(name);
            //catch(Exception e){
                //System.out.print("该图书不存在!");
            //}            
        }else if(x==2){//按序号查找书籍
                System.out.println("输入图书序号(请输入数字命令:)");
                num=s.nextInt();
                A2.output1(num);
                book.main(null);
        }
    }
}