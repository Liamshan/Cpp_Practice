/*
ok, let's talk merge sort. how do we do merge sort. So the way we do the merge
is, once youve sorted 2 halves then you can compare the first element of the left with
the next element of the right, then move the smallest value to a staged array.
then we do it again, checl left next element, check right, then grab the smallest
and move it to a staged array. or the new sorted array. also if you end with an array of
just 1 then you're sorted? So this is how you do it and this is where recursion comes
in to play somehow. might need to brush up. but ya, you sort the left half while, then 
sort the left half, then sort the left half until you're down to an array of 1
then you're done sorting. then you compare. so you will just compare 7 and 2 and put them into the new array.
Alright, let's work on execiting this code. start with a condition if if vector of 1 then the 
thing is sorted and then proceed to merging. 

*/