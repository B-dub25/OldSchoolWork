package myzoo;

public class Snake extends Animals {

	private int numOfFangs;
	
	public Snake() {
		numOfFangs = 0;
	}
	
	public Snake(String anName, double lbs , int old, int fangs) {
		super(anName, lbs, old); numOfFangs = fangs;
	}
	
	@Override
	public String makeNoise() {
		return (" Hissssss ");
	}
	
    @Override
	public String toString() {
		return(super.toString() + " Number of Fangs: " + numOfFangs);
		
	}
}
