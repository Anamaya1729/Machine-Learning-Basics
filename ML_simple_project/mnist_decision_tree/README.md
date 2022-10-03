# Handwritten digits recognition (Decision trees)

## About the problem
The dataset is the MNIST dataset which contains images of handwritten digits. The goal of this project is to develop a classification model that can classify a given image from the dataset as one of the digit classes.

## About the dataset
- Number of examples: 70000,
- Size of number of features: 784

## Steps for model development
1. Get the data. [Download link](https://www.openml.org/search?type=data&sort=runs&id=554&status=active))

Another way to get the data is by using *sklearn.datasets.fetch_openml()* function:

```python
from sklearn.datasets import fetch_openml
mnist = fetch_openml("mnist_784", version=1)
```
The `mnist["data"]` gets the actual data, and the `mnist["target"]` gets the target vector.

2. Study the dataset. (Study the data and the target, and create a train-test split)

3. Choose a classifier. (Decision tree here)

4. Choose an accuracy measure. (Cross validation, confusion matrix, etc)

5. Train the model.

6. Tune the model. 

7. Present the results.


## Learn more about decision trees
- [CART](https://machinelearningmastery.com/classification-and-regression-trees-for-machine-learning/)
- [Guide to decision trees](https://www.kdnuggets.com/2018/12/guide-decision-trees-machine-learning-data-science.html)


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