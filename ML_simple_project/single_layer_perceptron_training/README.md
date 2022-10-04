# Single Layer Perceptron Training

## Problem statement
To train a model that predicts a simple mathematical equation using a fuzzy-logic single perceptron layer. Equation: `y = x^2`

## Structure of the dataset
The dataset is a manually generated collection of data points for a begineer-friendly introduction to neural networks.
- Number of entries: 1000 (user defined, can be manipulated)
- Number of columns: 2
- Features: `x -> integer` and `y-> it's corresponding square`

## Steps for model development

1. Generate data points according to the equation chosen
2. Split dataset into 75-25 sample for training and testing
3. Import keras library from tenserflow for model generation
4. Choose a optimizer for your model (adam in this case)
5. Choose a loss function (mean squared error in this case)
6. Define the number of epochs and train the model
7. Tune number of epochs according to the `val_loss` parameter

## Read more about
- [Single layer perceptron](https://www.tutorialspoint.com/tensorflow/tensorflow_single_layer_perceptron.htm)
- [Optimizers in Keras](https://keras.io/api/optimizers/)
- [Loss functions](https://keras.io/api/losses/)

## How to contribute
- Read the [contribution guidelines](../CONTRIBUTING.md) before making a pull request.

## Rules
- All algorithms should be implemented in Python.
- Read the [CODE_OF_CONDUCT.md](../CODE_OF_CONDUCT.md) file.

## Style Guide
- Follow [PEP8](https://www.python.org/dev/peps/pep-0008/) style guide.

## Maintainers
- [Anamaya](https://github.com/Anamaya1729)
- [Yuvraj](https://github.com/YuvrajSinghGitbub)

## License

**This project is licensed under the GNU GENERAL PUBLIC License - see the [LICENSE](../LICENSE) file for details**

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](https://creativecommons.org/publicdomain/zero/1.0)
