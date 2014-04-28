package linker;

import java.util.NoSuchElementException;

public class LinkList<G extends Comparable<G>> {

	private class Node<T> {

		private Node<T> nextLink;
		private T typeT;
		

		private Node() {
			
			nextLink = null;
			
		}
		private Node(T data, Node<T> link) {
			typeT = data;
			nextLink = link;
		}
	}

	private Node<G> headNode;

	/**
	 * This class constructor has to be of type that implements
	 * <code>Comparable</code> {@link LinkList}
	 */
	public LinkList() {

		headNode = null;
	}

	/**
	 * This method will place the new element to the front of the list
	 * 
	 * @param typeG
	 *            The type to be placed in the list has to implement {@link <code> Comparable </code>}
	 * 
	 */
	public void push(G typeG) {
		headNode = new Node<G>(typeG, headNode);

	}

	/**
	 * This method will take the element given and push it to the back of the
	 * list
	 * 
	 * @param typeG
	 *            The type to be place in the list
	 */
	public void pushBack(G typeG) {

		if (headNode == null)
			push(typeG);
		else {
			Node<G> current = headNode;
			while (current.nextLink != null) {
				current = current.nextLink;
			}
			current.nextLink = new Node<G>(typeG, current.nextLink);
		}

	}

	/**
	 * This method will insert the given element into the correct place . This
	 * is based on {@link <code>Comparable</code>} form. If the list is empty it
	 * will be placed into the first position
	 * 
	 * @param typeG
	 *            The element to be placed into the list.
	 */
	public void insert(G typeG) {

		if (headNode == null || (headNode.typeT.compareTo(typeG) > 0))
			push(typeG);
		else {
			Node<G> previous = headNode;
			Node<G> current = headNode.nextLink;
			while (current != null && (current.typeT.compareTo(typeG) < 0)) {
				previous = current;
				current = current.nextLink;
			}
			previous.nextLink = new Node<G>(typeG, current);
			
		}

	}

	/**
	 * This method will sort the calling list and removes the original list and
	 * replaces it with a sorted version
	 * 
	 * @throws NoSuchElementException
	 *             If the list is empty
	 */
	public void sort() throws NoSuchElementException {

		if (headNode == null)
			throw new NoSuchElementException(" Empty list ");
		else {
			Node<G> current = headNode;
			LinkList<G> mylist = new LinkList<>();

			while (current != null) {
				mylist.insert(current.typeT);
				current = current.nextLink;
			}
			headNode = null;
			headNode = mylist.headNode;
		}
	}
	
    public int size(){
		 
    	return 0;
		 
	}
	/**
	 * This method checks for equality between to list The lists are equal if
	 * they contain the same data in the same order.
	 * 
	 * @return true if the lists are the same.
	 * @see java.lang.Object#equals()
	 */
	public boolean equals(Object obj) {

		if (obj == null)
			return false;
		else if (getClass() != obj.getClass())
			return false;
		else {
			Node<G> current = headNode;
			Node<G> tempNode = (Node) obj;

			while (current != null) {
				if (current.typeT.compareTo(tempNode.typeT) != 0)
					return false;
				current = current.nextLink;
				tempNode = tempNode.nextLink;
			}
		}

		return true;
	}

	/**
	 * This returns the string representation of the list
	 * 
	 * @see java.lang.Object#toString()
	 */
	public String toString() {
		String listString = "";
		Node<G> current = headNode;

		while (current != null) {
			listString += String.valueOf(current.typeT) + "\n";
			current = current.nextLink;
		}
		return listString;
	}
}
