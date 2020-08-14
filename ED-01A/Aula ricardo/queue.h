#ifndef _QUEUE_
#define _QUEUE__
	
enum extreme {Begin, End};

template <typename T>
class queue {
   T* data;
   int size;
   int i, j;  
public:
   queue(int size) {
       this->size = size;
       data = new T[size];
       i = j = -1;
   }
   bool isEmpty() {
       return i==-1 && j==-1;
   }
   bool isFull() {
       return (i+1)%size == j;
   }
   void enqueue(T x) {
       if ( isEmpty() ) {
           i = j = 0;
           data[0] = x;
       } else if ( !isFull() ) 
           data[ (i+1)%size ] = x;
        else
           throw string("fFULL QUEUE");
   }
   void deququq() {
       if ( isEmpty() )
          throw string("QUEUE EMPTY");
       else if (i==j) 
          i = j = -1;
       else 
          j = (j+1) % size;      
   } 
   T get(extreme e) { 
       if ( !isEmpty() )
           return data[e==Begin ? i : j];
       else
           throw string("EMPTY QUEUE"); 
   }
   int length() {
       if (i>j)
           return i-j+1;
       else
           return size - (j-i) + 1;
   }
   ~queue() {
       delete [] data;
   }
};

#endif