package myList;

import java.util.NoSuchElementException;

public class MyList<E> {

	private class Node<T> {

		private Node<T> previousLink;
		private Node<T> nextLink;
		T element;

		private Node(T item, Node<T> pastLink, Node<T> next) {

			element = item;
			previousLink = pastLink;
			nextLink = next;

		}

	}

	private Node<E> headNode;
	private int capacity = 0;

	public MyList() {
		headNode = null;
	}

	/**
	 * This method will append a item to the end of the list
	 * 
	 * @param item
	 *            The item it be added
	 * @return true if item was added false if item is null
	 */
	public boolean add(E item) {

		if (item == null)
			return false;

		if (headNode == null) {
			headNode = new Node<E>(item, null, headNode);
			capacity++;
		} else {

			Node<E> position = headNode;

			while (position.nextLink != null)
				position = position.nextLink;

			position.nextLink = new Node<E>(item, position, null);
			++capacity;
		}
		return true;
	}

	/**
	 * This method will take a item and add it to the index specified unlike an
	 * array this is not zero based. Invokes {@link #add(Object)}
	 * 
	 * @param index
	 *            The index of the list you want the item to be added.
	 * @param item
	 *            The item to be added to the list.
	 */
	public void add(int index, E item) {

		if (index > capacity + 1)
			throw new IndexOutOfBoundsException("index " + index
					+ " is larger the current size ");
		else if (index == 1) {
			Node<E> tempHead = new Node<E>(item, null, headNode);
			if (headNode != null)
				headNode.previousLink = tempHead;

			headNode = tempHead;
			++capacity;
		} else {
			Node<E> position = headNode;
			for (int i = 1; i < index; i++) {
				position = position.nextLink;
			}
			if (position != null) {
				Node<E> tempNode = new Node<E>(item, position.previousLink,
						position);
				position.previousLink.nextLink = tempNode;
				position.previousLink = tempNode;
				++capacity;
			} else
				add(item);
		}
	}

	/**
	 * This method will remove all elements from the list
	 */
	public void clear() {

		if (headNode == null)
			throw new IllegalStateException();
		while (headNode != null)
			headNode = headNode.nextLink;
		capacity = 0;
	}

	/**
	 * 
	 * @return The current size of the list
	 */
	public int size() {
		return capacity;
	}

	/**
	 * This method will check if the list is empty.
	 * 
	 * @return true is list is empty false other wise.
	 */
	public boolean isEmpty() {
		return (headNode == null);
	}
	public boolean remove() {
		
		if(headNode == null)
			throw new NoSuchElementException();
		
		headNode.previousLink = null;
		headNode = headNode.nextLink;
		capacity--;
		return true;
	}
    public E remove(int index) {
    	
    	E tempE = null;
    	if(index > capacity)
    		 throw new IndexOutOfBoundsException();
    	else if (index == 1) {
    		tempE = headNode.element;   
			headNode.previousLink = null;   
    		headNode = headNode.nextLink;
		}
    	else {
			Node<E> position = headNode;
			for (int i = 1; i < index; i++){
				 position = position.nextLink;
			}
			if(position != null)
			{
				tempE = position.element;
				position.previousLink.nextLink = position.nextLink;
				position = position.nextLink;
			}
		}
    	capacity--;
    	return tempE;
	}
	/**
	 * This method searches the list for the given item
	 * 
	 * @param obj
	 *            The object to search for
	 * @return {@code true} is the given item was in the list {@code false}
	 *         other wise.
	 */
	public boolean contains(Object obj) {

		String itemString = String.valueOf(obj);
		Node<E> position = headNode;

		while (position != null && !itemString.equals(position.element))
			position = position.nextLink;

		return (position != null);
	}

	/**
	 * 
	 * @returns The list's hasCode.
	 */
	public int hashCode() {

		int code = 1;
		Node<E> position = headNode;

		while (position != null) {
			String temp = String.valueOf(position.element);
			for (int i = 0; i < temp.length(); i++)
				code *= temp.charAt(i) * 31 * (capacity * 7);
			position = position.nextLink;
		}

		return Math.abs(code);
	}

	/**
	 *  
	 */
	@SuppressWarnings("unchecked")
	public boolean equals(Object obj) {

		if (obj == null)
			return false;
		else if (getClass() != obj.getClass())
			return false;
		else {

			Node<E> tempList = (Node<E>) obj;

			while (tempList != null) {
				if (!contains(tempList.element)) {
					return false;
				}
				tempList = tempList.nextLink;
			}

			return true;
		}
	}

	/**
	 * 
	 * @return An array representation of the list 
	 */
	
	public String toString() {
		String tempString = "";
		Node<E> position = headNode;

		while (position != null) {
			tempString += position.element + "\n";
			position = position.nextLink;
		}

		return tempString;
	}

}
