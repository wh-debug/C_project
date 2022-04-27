# pysplit.py
import numpy as np

def sp(string):
    return string.split()

def makerandnum(A, F):
    print(A,F)
    return np.array(A*F)