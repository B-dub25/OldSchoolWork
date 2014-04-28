package labInherited;

public class Student extends Person {

	String studentMajor;
	double studentGpa;

	public Student() {
		this.studentMajor = "Unknown";
		this.studentGpa = 0.0;
	}

	public Student(String name, int age, String major, double gpa) {
		super(name, age);
		this.studentMajor = major;
		this.studentGpa = gpa;
	}
    public Student(Student obj){
    	super(obj);
    	this.studentMajor = obj.studentMajor;
    	this.studentGpa = obj.studentGpa;
    }
	public void setStudentMajor(String studentMajor) {
		this.studentMajor = studentMajor;
	}

	public void setStudentGpa(double studentGpa) {
		this.studentGpa = studentGpa;
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == null) {
			return false;
		} else if (getClass() != obj.getClass()) {
			return false;
		} else {
			Student tempStudent = (Student) obj;
			return (super.equals(tempStudent)
					&& (this.studentMajor.equals(tempStudent.studentMajor)) && Math
					.abs(this.studentGpa - tempStudent.studentGpa) < 0.000001);
		}
	}
    public Student clone(){
    	return new Student(this);
    }
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return (super.toString() + " Major " + studentMajor + ", Gpa " + studentGpa);
	}
}
