package linklist;

import java.util.NoSuchElementException;

public class LinkList<G extends Comparable<G>> {

	private class Node<T> {

		private Node<T> nextLink;
		private T type;

		private Node() {
			nextLink = null;
		}

		private Node(T typeT, Node<T> link) {
			type = typeT;
			nextLink = link;
		}
	}

	private Node<G> headNode;

	/**
	 * The type placed in the <> must be a type that implements 
	 * Comparable. 
	 */
	public LinkList() {
		headNode = null;
	}
   
	public LinkList(G typeG) {
		push(typeG);
	}

	/**
	 * This method will take a type that implements Comparable and pushes it
	 * to the front of the list.
	 * 
	 * @param typeG The type to be placed in the front of the list
	 */
	public void push(G typeG) {

		headNode = new Node<G>(typeG, headNode);
	}
	/**
	 * This method will push the given type to the back of the list 
	 * @param type must implement {@link #Comparable} 
	 * 
	 */
	public void pushBack(G type) {
		if(headNode == null)
			push(type);
		else{
		
			Node<G> current = headNode;
		    while(current.nextLink != null)
		    	current= current.nextLink;
		    
		    current.nextLink = new Node<G>(type, current.nextLink);
		}
	}
	/**
	 * This method will take a argument and place in the correct order
	 * by {@link #Comparable}
	 * @param typeG The type to be inserted in the list . Must implement Comparable
	 */
	public void insert(G typeG) {
		
		if(headNode == null || headNode.type.compareTo(typeG) > 0)
			push(typeG);
		else{
			Node<G> previous = headNode;
			Node<G> current = headNode.nextLink;
			while( current != null && current.type.compareTo(typeG) < 0){
				previous = current;
				current  = current.nextLink;
			}
			previous.nextLink = new Node<G>(typeG, current);
		}
	}
	/**
	 * This will pop the first element in the list
	 * @throws NoSuchElementException if the list is empty
	 * 
	 */
	public void pop() throws NoSuchElementException {
		if(headNode == null)
			throw new NoSuchElementException();
		headNode = headNode.nextLink;
	}
	/**
	 * This method will search the list for the given element and 
	 * delete it.
	 * 
	 * @param typeG The element to be deleted 
	 * @return true if the element was successfully deleted
	 * @throws NoSuchElementException if the list is empty
	 */
	public boolean delete(G typeG) throws NoSuchElementException{
		
		if(headNode == null)
			throw new NoSuchElementException();
		if(headNode.type.compareTo(typeG) == 0){
			pop();
		   return true;
		}
		else {
			Node<G> preNode = headNode;
			Node<G> current = headNode.nextLink;
			
			while(current.type.compareTo(typeG) != 0 && current != null ){
				preNode = current;
				current = current.nextLink;
			}
			if(current != null){
				preNode.nextLink = current.nextLink;
				current = current.nextLink;
				return true;
			}
			return false;
		}
	}
	/**
	 * This method will run through the list and sort it 
	 * by Comparable's standards. 
	 * @throws NoSuchElementException if the list is empty.
	 */
	public void sort() throws NoSuchElementException {
		if(headNode == null)
			throw new NoSuchElementException();
		LinkList<G> myLinkList = new LinkList<>();
		Node<G> current = headNode;
		
		while(current != null){
			myLinkList.insert(current.type);
			current = current.nextLink;
		}
		headNode = null;
		headNode = myLinkList.headNode;
	}
	
	public String toString() {
		String listString = "";
		Node<G> current = headNode;
		while (current != null) {
			 
			listString += String.valueOf(current.type) + "\n";
			current = current.nextLink;
		}
		return listString;
	}
	
}
