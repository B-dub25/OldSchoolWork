package setw;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;

public class Setw extends PrintStream{
	
	public static final Setw out = new Setw();
	
	private Setw() {
		super(System.out);
	}
	
	public Setw(File sourceFile) throws FileNotFoundException{
		super(new PrintStream(sourceFile));
	}
	
	/**
	 * This method behaves just like <code>{@link #print(String)}</code>
	 * with some added features, including ; justification via right or left,
	 * the amount of spaces between each element printed.      
	 * 
	 * @param name {@code} <code>String</code> to be Printed.
	 * 
	 * @param spacing {@code}<code>int</code> The amount of spaces 
     * 	
	 * @param justified {@code} <code>boolean</code> True justifies to the right false to the left
	 */
	
	public void print(String name, int spacing, boolean justified){
	       
		if(justified == false){
			System.out.print(name);
        for (int i = 0; i < spacing-name.length(); i++)
		        System.out.print(' ');
		}
		else {		
		  System.out.print('\t' + name);
		  for (int i = 0; i < spacing-name.length(); i++)
		        System.out.print(' ');
		}
		
	}
	
	/**
	 * This method acts just like <code>{@link #println(Object)}</code>, but
	 *  with added features. It invokes <code>{@link String.valueOf(Object)}</code> and 
	 *  sets the indentation to the specified amount.
	 *  Defaults justification to the left. 
	 *  <pre> out.print(object, num) </pre> 
	 * @param object The {@code} <code>Object</code> prints out the value of object.
	 *
	 * @param spaceAmount The amount of spaces between each element .
	 */
	
	public void println(Object object,int spaceAmount){
		
		System.out.println(String.valueOf(object));
		for (int i = 0; i < spaceAmount - String.valueOf(object).length(); i++)
			System.out.print(' ');
	}
	
	/**
	 * @param obj
	 * @param justifed
	 */
	public void println(Object obj, boolean justifed){
		
		if(justifed){
		System.out.println('\t'+String.valueOf(obj));	
		}
		else
			System.out.println(String.valueOf(obj));
	}
	
}
