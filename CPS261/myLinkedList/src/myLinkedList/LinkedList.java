package myLinkedList;

import java.awt.List;
import java.util.Collection;
import java.util.Collections;

public class LinkedList<G extends Collection<? super G>> implements Collection<G> {
	
	private class Node<T extends Collection<?>>{
		
		private  T item;
		private Node<T> nextLink , previousLink;
	
		private Node(T data , Node<T> prevNode, Node<T> next ){
			
			this.item = data;
			this.previousLink = prevNode;
			this.nextLink = next;
			
		}
		
		private Node(){
			this.previousLink = this;
			this.nextLink = this;
		}
		
	}
	
	private Node<G> headNode;
	
	

}
