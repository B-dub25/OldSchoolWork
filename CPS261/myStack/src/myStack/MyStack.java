package myStack;

import java.util.NoSuchElementException;

public class MyStack<G> {

	private class Node<T> {

		private T data;
		private Node<T> link;

		private Node(T info, Node<T> nextLink) {
			data = info;
			link = nextLink;
		}

	}

	private Node<G> headNode;

	public MyStack() {
		headNode = null;
	}

	public void push(G info) {

		headNode = new Node<G>(info, headNode);
	}

	public void pop() {
		
		if (headNode != null)
			headNode = headNode.link;
		else
			throw new NoSuchElementException();
	}

	public G top() {

		if (headNode != null) {
			G info = headNode.data;
			return info;
		} else
			throw new NoSuchElementException();
	}

	public boolean empty() {
		return (headNode != null);
	}

}
