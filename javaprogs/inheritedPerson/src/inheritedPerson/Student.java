package inheritedPerson;

public class Student extends Person {
	
	private String major;
	private double gpa;
    
	
	public Student() {
		major = "";
		gpa = 0.0;
	}
	public Student(String n, int old , String maj , double g) {
		super(n, old);
		this.major = maj;
		this.gpa = g;
	}
	
	public void setInfo(String n, int old , String maj , double g ) {
		super.setInfo(n, old);
		this.major = maj;
		this.gpa = g;
	}
	
	public void setGpa(double gpa) {
		this.gpa = gpa;
	}
	public void setMajor(String major) {
		this.major = major;
	}
	@Override
	public String toString() {
		return (super.toString() + " " + major + " " + gpa);
	}
	public boolean equals(Object obj) {
		if (obj ==  null)
			return false;
		else if (getClass() != obj.getClass())
			return false;
		Student anStudent = (Student) obj;
		return(super.equals(anStudent) && this.major.equals(anStudent.major) 
				&& Math.abs(this.gpa - anStudent.gpa) < .000001);
	}
	
	
	
}
