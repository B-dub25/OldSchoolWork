import java.util.Arrays;
/**
 * 
 * @author Brian Rundel COSC MP1 
 *
 * @param <E> 
 */

public class SortedArray<E extends Comparable<E> > implements Maximum{

	private int size;
	private int[]  indexRecods;             
	private Comparable<E>[] dataType;
	
	
    @SuppressWarnings("unchecked")
	public SortedArray() {
      
    	size  = 0;
    	dataType    = new Comparable[MAX];   
    	indexRecods = new int[MAX];
    	dataType    = (E[])Arrays.copyOf(dataType, MAX,Comparable[].class);	
    }
    // Setters 
    /**
     * This routine will ensure that the ID(s) are unique to one another
     * This routine invokes {@link #find(Comparable)} to force unique ID(s)
     * @param id the identification number to be inserted. 
     */
    public void insertID(E id, int recordPosition){
	    int position = find(id); 	
    	if(position < 0){
    		for(position = size-1; position >= 0; --position)
    			if(dataType[position].compareTo(id) < 0)
    				break;
    			else{
    			    indexRecods[position+1] = indexRecods[position];
    				dataType[position+1] = dataType[position];
    			}
    	  dataType[position+1]    = id;
    	  indexRecods[position+1] = recordPosition;
    	  ++size;
    	}
	}
    /**
     * This routine will insert a new Name into the {@link #dataType}
     * in the correct position, i.e sorted by alphabetically, and keeping indexRecords
     * parallel to one another. IndexRecords are not sorted by any means.  
     * Duplicates are aloud in this method unlike {@link #insertID(Comparable, int)}
     *   
     * @param name The name to be placed in the data base
     * @param recordPosition the record position to be place in indexRecords.
     */
    public void insertName(E name, int recordPosition){
    	int position = -1;
    	for(position = size-1; position >= 0; --position)
			if(dataType[position].compareTo(name) < 0)
				break;
			else{
			    indexRecods[position+1] = indexRecods[position];
				dataType[position+1] = dataType[position];
			}
	  dataType[position+1]    = name;
	  indexRecods[position+1] = recordPosition;
	  ++size;
	}
    /**
     * This routine will remove the desired element from {@link #dataType}
     * if it exists, and decrements the total size by one. 
     * Invokes {@link #findIndex(int)} which uses sequential search.  
     * @param target the index record to find and remove.
     * 
     */
    public void remove(int placement){
    	
    	int position = findIndex(placement);
    	  if(position >= 0){
    		  //System.out.println(position + " position " + id);
    		for(int index = position; index <= size; ++index){
    			dataType[index] = dataType[index+1];
    			indexRecods[index] = indexRecods[index+1];   		
    	        }
    	  --size;	
    	  }
	}
    
    // getters
    /**
     * This routine gets the data values held in the array {@link #indexRecods}
     * @param position the position to get in {@link #indexRecods}
     * @return {@link #indexRecods} at desired position if @param is <= 0 
     * or -1 other wise
     */
    public int getIndexRecord(int position) {
		
    	return (size < position && position >= 0)? -1: indexRecods[position];
	}
    public int getSize() {
		return size;
	}
    /**
     * This routine will search using binary search algorithm to find
     * a identification number.  
     * @param target the search item.
     * @return the index record number if found, otherwise -1. 
     */
    public int find(E target) {
		
    	int first  = 0 , last = size -1 , mid = 0;
    	
    	while(first <= last){
    		
    		mid = (first + last ) / 2;
    		
    		if(dataType[mid].compareTo(target) == 0){
    			return indexRecods[mid];
    		}
    		else if(dataType[mid].compareTo(target) < 0)
    			 first = mid +1;
    		else
    			last = mid -1;
    	}
    	return -1;
	}
    /**
     * This method is pretty much the same as {@link #find(Comparable)} 
     *  besides the return values
     * @param target the item to search for 
     * @return the index location its at otherwise -1 if not found. 
     */
    public int findID(E target) {
		
    	int first  = 0 , last = size -1 , mid = 0;
    	
    	while(first <= last){
    		
    		mid = (first + last ) / 2;
    		
    		if(dataType[mid].compareTo(target) == 0){
    			return mid;
    		}
    		else if(dataType[mid].compareTo(target) < 0)
    			 first = mid +1;
    		else
    			last = mid -1;
    	}
    	return -1;
	}
    /**
     * This method will find the index record in the indexRecords database
     * if exist. Seems how index records are not sorted in any form it has to 
     * use sequential search.   
     * @param index to look for
     * @return the placement of the index if found -1 if not.
     */
    public int findIndex(int index){
    	
      for(int i = 0 ; i < size ; ++i)
    	  if(indexRecods[i] == index)
    		  return i;
    	return -1;
    	
	}
    /**
     * 
     * Returns a string representation of 
     * dataType and indexRecords 
     */
	@Override
    public String toString() {
	 StringBuilder list = new StringBuilder();
	 
	 for(int index = 0; index < size; ++index)
		 list.append(dataType[index] + "\t" + indexRecods[index] + "\t");
	 return String.valueOf(list);
	}
}
