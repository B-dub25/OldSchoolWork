package labfantasyfootball;

import java.util.Scanner;

public class FantasyFootBall {

	private int numberOfTeams;
	private int numberOfWeeks;
	private double[] teamAverage;
	private double[] weeklyAverage;
	private int[][] teamsScores;
	private String[] teams;

	public FantasyFootBall() {
		Scanner cin = new Scanner(System.in);
		System.out.println("Enter the number of teams ");
		numberOfTeams = cin.nextInt();
		System.out.println("Enter the number of weeks being played ");
		numberOfWeeks = cin.nextInt();
		teams = new String[numberOfTeams];
		teamsScores = new int[numberOfTeams][numberOfWeeks];
		teamAverage = new double[numberOfTeams];
		weeklyAverage = new double[numberOfWeeks];
		for (int i = 0; i < numberOfTeams; i++) {
			System.out.print("Enter team name " + (i + 1));
			teams[i] = cin.next();
			for (int j = 0; j < numberOfWeeks; j++) {
				System.out.print("Enter team's score for week " + (j + 1));
				teamsScores[i][j] = cin.nextInt();
			}

		}
		getTeamAverage();
		getWeekAverage();
		cin.close();
	}

	/**
	 * 
	 * @param newteam
	 *            copy constructor
	 */

	public FantasyFootBall(FantasyFootBall newteam) {
		numberOfTeams = newteam.numberOfTeams;
		numberOfWeeks = newteam.numberOfWeeks;
		teams = new String[newteam.numberOfTeams];
		teamsScores = new int[newteam.numberOfTeams][newteam.numberOfWeeks];
		teamAverage = new double[newteam.numberOfTeams];
		weeklyAverage = new double[newteam.numberOfWeeks];
		for (int i = 0; i < newteam.teams.length; i++)
			this.teams[i] = newteam.teams[i];

		fillscores(newteam.teamsScores);
		getTeamAverage();
		getWeekAverage();
	}

	private void getTeamAverage() {
		for (int i = 0; i < numberOfTeams; i++) {
			for (int j = 0; j < numberOfWeeks; j++)
				teamAverage[i] += teamsScores[i][j];
			teamAverage[i] /= numberOfWeeks;
		}
	}

	private void getWeekAverage() {
		for (int i = 0; i < numberOfWeeks; i++) {
			for (int j = 0; j < numberOfTeams; j++)
				weeklyAverage[i] += teamsScores[j][i];
			weeklyAverage[i] /= numberOfTeams;
		}
	}

	private void fillscores(int[][] score) {
		for (int i = 0; i < score.length; i++)
			for (int j = 0; j < score[0].length; j++)
				teamsScores[i][j] = score[i][j];
	}

	public void display() {
		for (int i = 0; i < numberOfTeams; i++) {
			System.out.print(teams[i] + "\t ");
			for (int j = 0; j < numberOfWeeks; j++)
				System.out.print(teamsScores[i][j] + "\t ");
			System.out.println("Team Average \t" + (int) teamAverage[i] + "  ");
		}
		System.out.print("Weekly Average: ");
		for (int i = 0; i < weeklyAverage.length; i++)
			System.out.print((int) weeklyAverage[i] + "\t");
	}
}
