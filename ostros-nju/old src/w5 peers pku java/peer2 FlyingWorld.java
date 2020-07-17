/** ������ʵ�ַ������磬���������
 *  FlyInterface ����Ϊ�ӿڣ��������躯��
 *  AerocraftClass ��Ϊ������ʵ�ֽӿ�
 *  BirdClass ��Ϊ��ͨ��ʵ�ֽӿ�
 *  AirlinerClass / BattleplaneClass Ϊ AerocraftClass �����࣬��ʵ�ַ��躯��
 *  HawkClass / SwallowClass ΪBirdClass�����࣬��ʵ�ַ��躯��
 *  main������ʹ��FlyInterface���������������ø�������ķ��躯��
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
	
	static private int seqnumber = 0;//AerocraftClass�����ĳ�������
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
	private int gender = 0; //������Ա�
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
