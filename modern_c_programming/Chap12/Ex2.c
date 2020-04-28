middle = (low + high)/2 does NOT work because C does not support pointer-to-pointer addition. The best way to make this work is middle = low + (high - low)/2; Note that pointer-from-pointer subtraction yields an int, not a pointer

