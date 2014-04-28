/**
 * Created by brundel on 2/24/14.
 * Project name := COSCMP2
 */
public class Stack<E> {


    private Node<E> headNode;

    public Stack(){
        this.headNode = null;
    }

    public void push(E element){

        headNode = new Node<E>(element,headNode);
    }

    public E pop(){
        final E temp = headNode.element;
        if(headNode != null)
            headNode = headNode.next;
      return temp;
    }

    public boolean isEmpty(){
        return headNode == null;
    }
    
    @SuppressWarnings("hiding")
	private class Node<E>{

        private E element;
        private Node<E> next;

        private Node(E element, Node<E> nextItem){
            this.element = element;
            next = nextItem;
        }

    public String toString(){
        return String.valueOf(element);
    }

    } // end of inner class

}