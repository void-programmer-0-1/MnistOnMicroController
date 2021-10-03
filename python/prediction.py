import numpy as np

nn_out = np.loadtxt('deepSea_result_1.out')
print ("Model prediction is DIGIT : ", np.argmax(nn_out))