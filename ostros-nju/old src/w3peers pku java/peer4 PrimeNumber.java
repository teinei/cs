
public class PrimeNumber {

	private static final String Result = null;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int []primeSequence = new int[10000];
		int []primeResult = new int[10000];
		for (int i=0;i<10000;i++) {
			primeSequence[i] = i;
		}
		// 使用算法进行合数删除
		for (int j=1;j<5000;j++) {
			for (int index=0;index<10000;index++) {
				if (primeSequence[index] % (j*2) == 0) {
					primeSequence[index] = 0;
				}
			}
		}

		// 将非0项提出并整合进新数组
		int z = 0;
		for (int i=0;i<10000;i++) {
			if (primeSequence[i]!=0) {
				primeResult[z] = primeSequence[i];
				z++;
			}

		}
		// 遍历输出
		int []Result = new int[z];
		System.arraycopy(primeResult, 0, Result, 0, z);
		
		
		for (int value:Result) {
			System.out.println(value);
		}
	}

}
