
public class bookname extends book{
	String[] str={"数学","语文","英语","物理","化学","生物"};
	public static  boolean isHAVE(String[]str,String x){
	for(int i=0;i<str.length;i++){
		if(str[i].indexOf(x)!=-1){
			return true;}
	}
		return false;
		
}
	
	void output(String s){
		if(isHAVE(str,s)){
			System.out.println("book:"+s);
			book.main(null);
		}
		else{
			try{
				throw new Exception("该图书不存在!");
			}
			catch(Exception e){
				System.out.println(e.getMessage());
				book.main(null);
			}
		//	System.out.println("该图书不存在");
			//book.main(null);}
}
}
}
