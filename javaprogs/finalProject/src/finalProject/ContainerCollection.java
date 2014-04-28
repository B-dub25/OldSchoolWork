package finalProject;

public class ContainerCollection {
	private Container[] collection;
	private int numContainers;
	private int containerCount = 0;
	
	public ContainerCollection(int num) {
		collection  = new Container[(numContainers = num)];
	}
	public void addContainer( Container c) {
		if(containerCount >= numContainers)
		{
			System.err.println("Can not add the given container " );
			return ;
		}
		collection[containerCount++] = c;
	}
	
	public double getTotalVolume() {
		double sum = 0;
		for (int i = 0; i < containerCount; i++)
			sum += collection[i].getVolume();
		return sum;
	}
    public double getTotalSurfaceArea() {
    	double sum = 0;
		for (int i = 0; i < containerCount; i++)
			sum += collection[i].getSurfaceArea();
		return sum;
    }
}
