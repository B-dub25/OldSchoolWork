package miniArray;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.List;

public class MiniArrayList<E> extends AbstractList<E> implements List<E> {

	private Object[] array;

	private int size;

	private void checkIndex(int index) {
		if (index > size || index < 0)
			throw new IndexOutOfBoundsException(errorMessage(index));
		capacityCheck();
	}

	private String errorMessage(int index) {
		return ("Index: " + index + ", Size: " + size);
	}

	private void capacityCheck() {
		if (size >= array.length)
			grow(array.length + 2);
	}

	@SuppressWarnings("unchecked")
	private void grow(int newSize) {
		array = (E[]) Arrays.copyOf(array, newSize, Object[].class);
		size = newSize;
	}

	public MiniArrayList() {
		this(20);
	}

	@SuppressWarnings("unchecked")
	public MiniArrayList(int startingSize) {

		size = 0;
		array = (E[]) new Object[startingSize];
		array = (E[]) Arrays.copyOf(array, startingSize, Object[].class);

	}

	@Override
	public void clear() {

		for (int i = 0; i < size; i++)
			array[i] = null;
		size = 0;

	}

	@Override
	public boolean contains(Object o) {
		return indexOf(o) >= 0;
	}

	public int size() {
		return size;
	}

	@Override
	public E get(int index) {

		checkIndex(index);
		@SuppressWarnings("unchecked")
		E oldElement = ((E)array[index]);
		return oldElement;
	}

	@Override
	public boolean isEmpty() {
		return (size == 0);
	}

	@Override
	public int indexOf(Object o) {

		for (int i = 0; i < size; i++)
			 if (array[i].equals(o))
				 return i;
		
	return -1;
	}

	@Override
	public void add(int index, E element) {
		
	checkIndex(index);
		for (int i = size; i >= index; i--) 
			 array[i] = array[i-1];
			 
		
	array[index] = element;
	size++;
		   
	}
    @Override
    public String toString() {
	
    	String arrayStingString = "[";
    	
    	for (int i = 0; i < size; i++) {
		
    		 arrayStingString+= array[i];
		     if(array[i+1] != null)
			   arrayStingString+= ",";
    	}
    	
    arrayStingString+="]";	
    	
	return arrayStingString;
    }
	public boolean add(E e) {

		capacityCheck();

		array[size] = e;
		size++;
		return true;
	}
	
	public static void main(String[] args) {

		
	}

}
