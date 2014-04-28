
public class driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(oneLine(7));
	}
 public static int oneLine(int n){
	if(n <= 1)
	     return 1;
	else {
		System.out.println(n);
		return ( oneLine(n -1) + n );
	}
  }
}
