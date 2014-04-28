/**
 * Created by brundel on 2/24/14.
 * Project name := COSCMP2
 * Private methods are located at the bottom and private class
 * 
 */
public class LinkedList<E,I> {


    private Node<E,I> headNode;
    private Node<E,I> lastNode;
    private int size;


    /**
     * Constructor for the class
     */
    public LinkedList(){

        headNode = null;
        lastNode = null;
        size = 0;
    }

    /**
     * This method will not check for duplicates in the list
     * @param data the data item to be inserted in the list
     * @param index the index item to be inserted in the list
     * @return true for helping other methods.
     */
    public boolean add(E data, I index){

        if(headNode == null){
            headNode = new Node<E, I>(data,index,null,headNode);
            lastNode = headNode;
            ++size;
        }
        else{
            Node<E,I> last = new Node<E, I>(data,index,lastNode,null);
            lastNode.next = last;
            lastNode = last;
            ++size;

        }
        return false;
    }

    /**
     * This method inserts and element into the list in
     * order via alphabetic or numeric. It does not allow duplicates
     * @return true if the insert was successful.
     */
    public boolean insert(E element, I index){

        String temp = (String)element;
        boolean inserted = false;
        if(headNode == null || temp.compareTo((String)headNode.element) <= 0){
            pushFront(element, index);
            inserted = true;
        }
        
        else if(temp.compareTo((String)lastNode.element) >= 0){
        	 add(element, index);
        }
       else{
            Node<E,I> current = headNode;
           
            while ((current.next != null) && (temp.compareTo((String)current.element) > 0))
                    current = current.next;
            Node<E,I> inserter = new Node<E, I>(element,index,current.previous, current);
            current.previous.next = inserter;
            current.previous = inserter;
            inserted = true;
            ++size;
        }
        return inserted;
    }
    /**
     * Deletes a Node from the list .
     * @param index of the list
     * @return the item in the list or null if empty
     */
    @SuppressWarnings("rawtypes")
	public Node delete(I index){
         Node<E,I> temp = null;
        if(headNode.item.equals(index))
            temp = pop();
        else if(lastNode.item.equals(index))
              temp = popBack();
        else{
            Node<E,I> runner = headNode;
            while(runner.next != null && !runner.item.equals(index))
                  runner = runner.next;
            if(runner != null){
                temp = runner;
                runner.previous.next = runner.next;
                runner.next.previous = runner.previous;
                runner = runner.next;
                --size;
            }
        }
        System.out.print(temp.element);
        return temp;
    }
    /**
     * This method will remove the first element from the list
     * @return a reference to the deleted node or null if empty list 
     */
    @SuppressWarnings("rawtypes")
	public Node pop(){

        final Node<E,I> temp = headNode;
        if(headNode.next != null){
            headNode = headNode.next;
            headNode.previous = null;
            --size;
        }
        else{
            headNode = headNode.next;
            lastNode = headNode;
            --size;
        }
    return temp;
    }

    /**
     * This will retrieve the current size of the list.
     * @return size of the list
     */
    public int getSize(){

        return size;

    }
    /**
     * This method will remove the element and item from the
     * end of the list.
     * @return a reference to the last Node if exist , null other wise.
     */
    
    @SuppressWarnings("rawtypes")
	public Node popBack(){
        final Node<E,I> temp = lastNode;
        if(lastNode.previous != null){
            lastNode = lastNode.previous;
            lastNode.next = null;
            --size;
        }
        else{
            lastNode = null;
             headNode = null;
            --size;
        }
        return temp;
    }

    /**
     * This method will find a element with in the list
     * @param element to find
     * @return the nodes item if found null otherwise
     */
    public Integer findItem(E element ){

        Node<E,I> frontRunner = headNode, lastRunner = lastNode;
        String key = (String)element;
        while(frontRunner != null && lastRunner != null)
             if( key.compareTo(String.valueOf(frontRunner.element)) == 0)
                  return (Integer)frontRunner.item;
             else if(key.compareTo(String.valueOf(lastRunner.element)) == 0)
                     return (Integer)lastRunner.item;
             else{
                  frontRunner = frontRunner.next;
                  lastRunner  = lastNode.previous;
             }
        return -1;
    }
    /**
     * This method will retrieve the item at a certain position
     * @param index the position of the item in the list.
     * @return the item in the list.
     */
    public I getItem(int index){

        Node<E,I> current;
        if(index < size/2){
            current = headNode;
            for(int i = 1; i < index; ++i)
             current = current.next;
        }
        else{
            current = lastNode;
            for(int i = size; i > index; --i)
                current = current.previous;
        }
        return current.item;
    
    }
    /**
     * This will only be used in the stack class there is no reason to use
     * in this class
     * @param data the data to be pushed to the front of the list;
     */
    public void pushFront(E data , I index){
        
    	if(headNode != null){
    		Node<E, I> front = new Node<E, I>(data, index, null, headNode);
    		headNode.previous = front;
    		headNode = front;
    	}
    	else if(headNode == null){
    		  headNode = new Node<E, I>(data, index, null, headNode);
              lastNode = headNode;
    	}
        ++size;
    }
    /**
     * Checks to see if the lists current state is empty
     * @return true if list is empty false otherwise
     */
    public boolean isEmpty(){
       return headNode == null;
    }
    /**
     * This is used for deletion to make such there is a node to delete
     * @return true is the list has a next element false otherwise
     */

    public boolean hasNext(){
        return headNode.next != null;
    }
    /**
     *
     * @param target
     * @return
     */
    public boolean contains(E target){

        if(headNode == null)
            return false;
        else{
            Node<E,I> frontRunner = headNode;
            Node<E,I> lastRunner = lastNode;

            while(frontRunner != null && lastRunner != null){

                if(frontRunner.element.equals(target) || lastRunner.element.equals(target))
                               return true;
                else{
                    frontRunner = frontRunner.next;
                    lastRunner = lastNode.previous;
                }
            }
        }
        return false;
    }

    @SuppressWarnings("hiding")
    private class Node<E,I>{

        private E element;
        private I item;

        private Node<E,I> next;
        private Node<E,I> previous;

        private Node(E element, I item, Node<E,I> previousLink, Node<E,I> nextLink){

            this.element = element;
            this.item = item;
            previous = previousLink;
            next = nextLink;
        }

        public String toString(){
            return String.valueOf(element + " " + item);
        }
    }

}