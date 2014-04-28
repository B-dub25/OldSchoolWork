package bank;

public class BankAcount {

	private double balance;

	public BankAcount() {
		this.balance = 0.0;
	}

	public BankAcount(double cash) {
		try {
			if (cash < 0)
			throw new InvalidAmount();
		else
			this.balance += cash;
		} catch (InvalidAmount e) {
			System.out.println(e.getMessage());
		}
		
	}

	public double getBalance() {
		return balance;
	}

	public void withDraw(double cash) {
		try {
			if (getBalance() < cash)
				throw new InvalidAmount();
			 balance -= cash;
		} catch (InvalidAmount e) {
			System.out.println(e.getMessage());
		}
	}
	public void deposit(double cash ) {
		try {
			if(cash < 0)
			throw new InvalidAmount();
			balance += cash;
		} catch (InvalidAmount e) {
			System.out.println(e.getMessage());
		}
	}

}
