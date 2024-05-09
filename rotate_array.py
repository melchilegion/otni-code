def rotate_array(arr, shift):
    shifted_arr = arr[shift: ] + arr [ :shift]
    return shifted_arr
    
print (rotate_array([1,2,3,4,5,6,7,8,9], 4))
