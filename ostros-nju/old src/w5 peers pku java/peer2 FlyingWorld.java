/** 本代码实现飞翔世界，即飞翔接力
 *  FlyInterface 定义为接口，生命飞翔函数
 *  AerocraftClass 作为抽象类实现接口
 *  BirdClass 作为普通类实现接口
 *  AirlinerClass / BattleplaneClass 为 AerocraftClass 的子类，并实现飞翔函数
 *  HawkClass / SwallowClass 为BirdClass的子类，并实现飞翔函数
 *  main函数里使用FlyInterface数组来声明并调用各个对象的飞翔函数
 */

package HomeworkVFlyingWorld;
import java.util.Random;

public class FlyingWorld {


	public static void main(String[] args) {

		FlyInterface a[] = new FlyInterface[8];
		a[0] = new AirlinerClass();
		a[1] = new AirlinerClass();
		
		a[2] = new BattleplaneClass();
		a[3] = new BattleplaneClass();
		
		a[4] = new HawkClass();
		a[5] = new HawkClass();
		
		a[6] = new SwallowClass();
		a[7] = new SwallowClass();
		
		for (int i = 0; i < a.length; i++) {
			a[i].FlyFunction();
		}
	}

}

interface FlyInterface {
	void FlyFunction();

}

abstract class AerocraftClass implements FlyInterface{
	
	static private int seqnumber = 0;//AerocraftClass类对象的出场次序
	static void AddSeqNumber() {
		seqnumber ++;
	}
	static int GetSeqNumber() {
		return(seqnumber) ;
	}
}

class AirlinerClass extends AerocraftClass{
	public void FlyFunction() {
		AddSeqNumber();
		int number = GetSeqNumber();
		System.out.println("It is the No." + number + " player in Aerocraft Class. Airliner is flying");
	}
}

class BattleplaneClass extends AerocraftClass{
	public void FlyFunction() {
		AddSeqNumber();
		int number = GetSeqNumber();
		System.out.println("It is the No." + number + " player in Aerocraft Class. Battleplane is flying");
	}
}

class BirdClass implements FlyInterface{
	private int gender = 0; //鸟类的性别
	final void SetGender(int i) {
		gender = i;
	}
	final int GetGender() {
		return(gender) ;
	}
	BirdClass(){
        Random random = new Random();              
        int number = random.nextInt(2);
        SetGender(number);
	}
	
	public void FlyFunction() {
		System.out.println("Bird is flying");
	}
}

class HawkClass extends BirdClass{
	@Override
	public void FlyFunction() {
		int GenderCode = GetGender();
		String GenterText = "Male";
		if (GenderCode == 0)
			GenterText = "Female";
		
		System.out.println(GenterText + " hawk is flying");
	}
}

class SwallowClass extends BirdClass{
	@Override
	public void FlyFunction() {
		int GenderCode = GetGender();
		String GenterText = "Male";
		if (GenderCode == 0)
			GenterText = "Female";
		
		System.out.println(GenterText + " swallow is flying");
	}
}
