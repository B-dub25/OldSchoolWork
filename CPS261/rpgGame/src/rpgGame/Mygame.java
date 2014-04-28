package rpgGame;

import java.util.Random;

public class Mygame {

	public static void main(String[] args) {
	
		Random random = new Random();
		random.setSeed(15000);
		int i = 0;
		while(i < 10){
		System.out.println(((random.nextInt(1500) * random.nextInt(1700)) % 15) + 1);
		i++;
		}
	}

}

