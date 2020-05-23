You can use struct or class defined by yourself as key of std::map of C++.
Here, how to use struct defined by myself as key of std::map is introduced.

Among keys need to be compagit rable to find specified file from map, because std::map stores data as binary tree.
So not only data but also comparison operator need to be defined for struct defined by myself.

Here, sample code which uses int and char[100] struct as key is introduced.
Of course, there is another implementation of comparison operator.

It is required that comparison operator need to be defined to be able to decide small or large clearly.
The author took a long time to debug, when the author wrote wrong code for comparison operator.
For example, comparison operator implemented as to return false when int key is 0 and in other case to return true, values couldn't be stored and plucked out.
Even if comparison operator is not implemented properly, first data can be stored and plucked out.
If behavior seems wrong when struct defined by yourself used as key of map, first, you should check process of comparison operator. 
