
import torch
import torchvision
import torchvision.transforms as transforms
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt

batch_size = 100

train_data = torchvision.datasets.MNIST(root="data",train=True,download=True,transform=transforms.ToTensor())
test_data = torchvision.datasets.MNIST(root="data",train=False,transform=transforms.ToTensor())

train_loader = torch.utils.data.DataLoader(dataset=train_data,batch_size=batch_size,shuffle=True)
test_loader = torch.utils.data.DataLoader(dataset=test_data,batch_size=batch_size,shuffle=False)

img_data = train_data[1099][0].numpy()
np.savetxt('img.data', img_data.flatten())
img = Image.fromarray(img_data, 'RGB')

plt.imshow(img_data.reshape(28 , 28))
plt.show()