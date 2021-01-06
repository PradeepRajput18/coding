


# find executon time taken for a program in python 


import time

start = time.localtime()

# logic or code here 

end = time.localtime()
"""Total execution time in minutes$ """
print(end.tm_min - start.tm_min)
"""Total execution time in seconds$ """
print(end.tm_sec - start.tm_sec)
