package miniList;

import java.util.AbstractList;
import java.util.List;

public class MiniList<E> extends AbstractList<E> implements List<E> {

	private class Node<T> {

		private Node<T> nextLink;
		private Node<T> previousLink;
		T data;

		private Node(T info, Node<T> previous, Node<T> next) {

			this.data = info;
			this.previousLink = previous;
			this.nextLink = next;
		}
	}

	private Node<E> headNode;
	private int size;

	public MiniList() {
		headNode = null;
		size = 0;
	}

	public MiniList(MiniList<E> otherList) {

		Node<E> currentNode = otherList.headNode;
		Node<E> newList = headNode;

		while (currentNode != null) {

			if (newList == null)
				headNode = new Node<E>(currentNode.data, null, headNode);
			else {
				newList = new Node<E>(currentNode.data, newList.previousLink,
						newList.nextLink);
				newList.previousLink.nextLink = newList.previousLink;
			}
			currentNode = currentNode.nextLink;
		}
	}

	@Override
	public int size() {
		
		return size;
	}

	@Override
	public E get(int index) {
		
		return null;
	}
}
