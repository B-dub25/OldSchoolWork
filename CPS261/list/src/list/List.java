package list;

import java.util.NoSuchElementException;

public class List<E extends Comparable<E>> implements Cloneable{

	private class Node<T> {

		private Node<T> nextLink = null;
		private T data;

		private Node(T element, Node<T> next) {

			data = element;
			nextLink = next;
		}

	}

	private Node<E> headNode;
	private int capacity = 0;

	public List() {

		headNode = null;

	}

	/**
	 * This routine will take the given element and append it to the end of the
	 * list.
	 * 
	 * @param element
	 *            the element to add to the end of the list
	 * @return true as specified in {@link #Collections}
	 */
	public boolean add(E element) {

		if (headNode == null) {
			headNode = new Node<E>(element, headNode);
			++capacity;
			return true;
		} else {
			Node<E> position = headNode;
			while (position.nextLink != null)
				position = position.nextLink;
			position.nextLink = new Node<E>(element, null);
			++capacity;
			return true;
		}
	}

	/**
	 * This method will add a element at the specified location this will throw
	 * a {@link #IndexOutOfBoundsException}
	 * 
	 * @param index
	 *            The index of the list where to insert
	 * @param element
	 *            The element to add at specified location
	 */
	public void add(int index, E element) {

		if (index > capacity + 1 || index < 0)
			throw new IndexOutOfBoundsException();
		else if (index == 1) {
			headNode = new Node<E>(element, headNode);
		} else {
			Node<E> previousNode = headNode;
			Node<E> position = headNode;
			for (int i = 1; i < index; ++i) {
				previousNode = position;
				position = position.nextLink;
			}
			if (position != null) {
				previousNode.nextLink = new Node<E>(element, position);
			} else
				add(element);
		}
	}

	/**
	 * This method will add a element to the front of the list
	 * 
	 * @param element
	 *            The element to be add to the list
	 */
	public void addFirst(E element) {

		headNode = new Node<E>(element, headNode);
	}

	/**
	 * This routine adds the given element to the end of the list invokes
	 * {@link #add(Comparable)}
	 * 
	 * @param element
	 *            The element to add to the end of the list.
	 */
	public void addLast(E element) {
		add(element);
	}

	/**
	 * This method will clear all elements from the list Throws
	 * NoSuchElementException if the list is empty
	 */
	public void clear() {
		if (headNode == null)
			throw new NoSuchElementException();

		while (headNode != null)
			headNode = headNode.nextLink;
	}

	public void print() {

		Node<E> current = headNode;
		while (current != null) {
			System.out.println(current.data);
			current = current.nextLink;
		}

	}
    /**
     * This method searches the list for the given element
     * @param element The element to search for.
     * @return true if the list contains the element.
     */
	public boolean contains(E element) {

		Node<E> position = headNode;

		while (position != null)
			if (position.data.compareTo(element) == 0)
				return true;
			else
				position = position.nextLink;

		return false;
	}
	/**
	 *  This method just returns the first element.
	 * @return returns the first element.
	 */
	public E element() {

		if (headNode == null)
			throw new NoSuchElementException();

		return headNode.data;
	}
	/**
	 * This method will return a element at the given index
	 * @param index of the element to return
	 * @return A one element at the index
	 */
	public E get(int index) {

		if (index > capacity)
			throw new IndexOutOfBoundsException();
		else {
			Node<E> position = headNode;

			for (int i = 1; i < index; ++i)
				position = position.nextLink;

			return position.data;
		}
	}
	/**
	 * Checks to see if there is a next element 
	 * @return a element 
	 */
	public E peek() {

		return (headNode != null) ? headNode.data : null;
	}

	public E pull() {

		if (headNode == null)
			throw new NoSuchElementException();

		E element = headNode.data;
		headNode = headNode.nextLink;

		return element;
	}
	/**
	 * Removes the first element 
	 * @return the popped element 
	 */
	public E pop() {

		if (headNode == null)
			throw new NoSuchElementException();

		E element = headNode.data;
		headNode = headNode.nextLink;
		
		return element;
	}
	/**
	 * 
	 * @return An array representation of the list 
	 */
	@SuppressWarnings({"unchecked"})
	public E[] toArray(){

		if(headNode == null)
			throw new NullPointerException();
		List<E> tempList = this;
	    E[] elements = (E[])new Object[capacity];
		for(int i = 0; i < capacity; ++i){
			elements[i] = tempList.pop();
		}
		return elements;
	}
	@Override
	public String toString() {
		
		String list = "";
		Node<E> tempNode = headNode;
		while(tempNode != null){
			list += String.valueOf(tempNode.data) + "\n";
			tempNode = tempNode.nextLink;
		}
		return list;
	}
	/**
	 * returns a new list that have the exact elements 
	 * as the calling one.
	 */
	@Override
	public List<E> clone(){
		
		try {
			
			List<E> copy = new List<>();
			copy = (List<E>)super.clone();
			copy.headNode = copyOf();
			return copy;
			
		} catch (CloneNotSupportedException e) {
			return null;
			// TODO: handle exception
		}
	}
	
	private Node<E> copyOf(){
		
		List<E> tempList = new List<E>();
		Node<E> position = headNode;
		
		while(position != null){
			tempList.add(position.data);
			position = position.nextLink;
		}
		return tempList.headNode;
		
	}
}
