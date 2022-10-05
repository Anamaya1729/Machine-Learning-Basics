# Hacktoberfest 2022 - Machine Learning Basics

## Machine Learning Advance Algorithms

### CNN Handwritten Digits Recognition
Handwritten digits recognition is a computer vision problem. The goal is to classify handwritten digits into their respective classes. The dataset used is the MNIST dataset. The dataset contains 60,000 training images and 10,000 test images. Each image is a 28x28 grayscale image, associated with a label from 0 to 9. The task is to train a model to classify a given image into one of the 10 classes.

### Input Format
You have to create a deep learning model using the Keras library. The model should take a 28x28 grayscale image as input and output a probability distribution over the 10 classes. The model should be trained on the MNIST dataset. 
### Output Format
The output is a dictionary with the following keys:
- `train_score`: The score of the model on the training data.
- `test_score`: The score of the model on the test data.
- `train_loss`: The loss of the model on the training data.
- `test_loss`: The loss of the model on the test data.

### Example
```python
from tensorflow.keras.datasets import mnist
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Flatten, Conv2D, MaxPooling2D

# Load the data
(X_train, y_train), (X_test, y_test) = mnist.load_data()

# Reshape the data
X_train = X_train.reshape(-1, 28, 28, 1)
X_test = X_test.reshape(-1, 28, 28, 1)

# Create an instance of the model
model = Sequential()

# Add layers to the model

# Compile the model

# Train the model

# Evaluate the model
``` 

## Rules
- Implement the task in `cnn_handwritten_digits_recognition.ipynb`.
- The model should be able to handle any dataset that is in the same format as the MNIST dataset.
- Please do not use any pre-trained models.
- Please read the [Keras documentation](https://keras.io/) to learn how to use the Keras library.
- Please read the [Code of Conduct](../../CODE_OF_CONDUCT.md).

### Style Guide
- Follow [PEP8](https://www.python.org/dev/peps/pep-0008/) style guide.
- Use docstrings to document the function.
- Use comments to explain the code.

## Maintainers
- [Anamaya](https://github.com/Anamaya1729)
- [Yuvraj](https://github.com/YuvrajSinghGitbub)

## License

**This project is licensed under the GNU GENERAL PUBLIC License - see the [LICENSE](../LICENSE) file for details**

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](https://creativecommons.org/publicdomain/zero/1.0)
