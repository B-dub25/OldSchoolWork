package inheritedLab;

public class Student extends Person {

	private String studentMajor;
	private double studentGpa;

	public Student() {
		this.studentMajor = "";
		this.studentGpa = 0.0;
	}

	public Student(String name, int age, String major, double gpa) {
		super(name, age);
		this.studentMajor = major;
		this.studentGpa = gpa;
	}

	@Override
	public String toString() {
		return (super.toString() + " " + studentMajor + " " + studentGpa);
	}

	public boolean equals(Object obj) {
		if (obj == null)
			return false;
		else if (getClass() != obj.getClass())
			return false;
		Student other = (Student) obj;
		return (super.equals(other) && studentMajor.equals(other.studentMajor) && Math
				.abs(studentGpa - other.studentGpa) < .0000001);
	}

	public void setStudentMajor(String studentMajor) {
		this.studentMajor = studentMajor;
	}

	public String getStudentMajor() {
		return studentMajor;
	}

	public void setStudentGpa(double studentGpa) {
		this.studentGpa = studentGpa;
	}

	public double getStudentGpa() {
		return studentGpa;
	}

}
