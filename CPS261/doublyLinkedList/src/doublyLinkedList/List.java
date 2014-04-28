package doublyLinkedList;

import java.util.Iterator;
import java.util.NoSuchElementException;

public class List<G extends Comparable<G>> {

	private class Node<T> {

		private Node<T> previousLink;
		private Node<T> nextLink;
		T data;

		private Node() {
			previousLink = null;
			nextLink = null;
		}

		private Node(T info, Node<T> previous, Node<T> next) {

			data = info;
			previousLink = previous;
			nextLink = next;

		}

	} // end of inner class

	public class ListIterator<E> implements Iterator<E>{
		
		private Node<E> position;
		
		@SuppressWarnings("unchecked")
		public ListIterator() {
			
			position =(Node<E>)headNode;
			
		}
		
		public boolean hasNext(){
			
			return(position != null);
		}
		
		public E next(){
			
			E temp = position.data;
			position = position.nextLink;
			
			return temp;
		}
		@SuppressWarnings("unchecked")
	    public void reset(){
			position = (Node<E>) headNode;
		}
		public void remove(){
			
			if(headNode == null)
				throw new NoSuchElementException();
			if(position == null ){
				System.err.println(position.data);
				position = position.nextLink;
				
			}
			else{
			position.previousLink.nextLink = position.nextLink;
			position = position.nextLink;
			}
		}
		
	} // end of iterator 
	
	private Node<G> headNode;
	private int capacity = 0;

	public List() {

		headNode = null;
		capacity = 0;

	}

	@SuppressWarnings("rawtypes")
	public ListIterator iterator() {
		
		return (new ListIterator<G>());
	}
	/**
	 * This routine will push the given element to the front of the list. This
	 * expects the type to implement {@link #Comparable}
	 * 
	 * @param info
	 *            The element to be pushed to the front of the list.
	 */
	private void push(G info) {

		Node<G> newHeadNode = new Node<G>(info, null, headNode);

		if (headNode != null)
			headNode.previousLink = newHeadNode;

		headNode = newHeadNode;
		++capacity;
	}

	public boolean add(G elemet) {

		if (headNode == null) {
			push(elemet);
			return true;
		} else {
			Node<G> currentNode = headNode;

			while (currentNode.nextLink != null)
				currentNode = currentNode.nextLink;

			currentNode.nextLink = new Node<G>(elemet, currentNode, null);

			capacity++;
			return true;
		}

	}

	public void add(int index, G element) {

		if (index > capacity + 1 || index < 0)
			throw new IndexOutOfBoundsException();

		else {
			Node<G> current = headNode;

			for (int i = 1; i < index; ++i)
				current = current.nextLink;

			if (current != null) {
				Node<G> newNode = new Node<G>(element, current.previousLink,
						current);
				current.previousLink.nextLink = newNode; 
				current.previousLink = newNode;
				++capacity;
			} else
				add(element);
		}
	}

	public void clear() {

		while (headNode != null)
			headNode = headNode.nextLink;
		capacity = 0;
	}

	public boolean contains(G o) {

		if (o == null)
			return false;
		else {
			Node<G> current = headNode;

			while (current != null && current.data.compareTo(o) != 0)
				current = current.nextLink;
			if (current == null)
				return false;
			else
				return true;
		}
	}

	public G get(int index) {

		if (index > capacity || index < 0)
			throw new IndexOutOfBoundsException();
		Node<G> current = headNode;

		for (int i = 1; i < index; i++)
			current = current.nextLink;

		return current.data;
	}

	public G set(int index, G element) {

		if (index > capacity || index < 0)
			throw new IndexOutOfBoundsException();
		Node<G> current = headNode;

		for (int i = 1; i < index; ++i)
			current = current.nextLink;

		G tempData = current.data;
		current.data = element;

		return tempData;
	}

	public int size() {
		return capacity;
	}

	public G remove(int index) {

		if (index > capacity || index < 0)
			throw new IndexOutOfBoundsException();
		
		if (index == 1) { 
			G temp = headNode.data;
			headNode.nextLink.previousLink = null;
			headNode = headNode.nextLink;
			return temp;
		} else {

			Node<G> current = headNode;

			for (int i = 1; i < index; ++i)
				current = current.nextLink;

			G temp = current.data;

			current.previousLink.nextLink = current.nextLink;
			current = current.nextLink;
			return temp;
		}
	}

	public int indexOf(G element) {

		Node<G> current = headNode;
		int index = 1;
		
		while (current != null && current.data.compareTo(element) != 0) {
			  current = current.nextLink;
			  index++;
		}
		
		return (current != null) ? index : -1;
	}

	public int lastIndexOf(G element){
		
		int index = 0;
		
		Node<G> current = headNode;
		
		for (int i = 1; current != null; i++) {
			if(current.data.compareTo(element) == 0)
				index = i;
			current = current.nextLink;
		}
		
		return (index > 0 ) ? index : -1;
	}
	
	public void print() {

		Node<G> currentNode = headNode;

		while (currentNode != null) {
			System.out.println(currentNode.data);
			currentNode = currentNode.nextLink;
		}

	}
	
	
}
