# Logistic regression

## About the problem
The logistic regression is a binary classification technique. In this project the goal is to create a _**binary classifier**_ that can classify '5s' from 'non 5s'. 

For this project map the target vector to a binary vecrtor where each instance that is '5' is a 1, and every instance that is 'not 5' is a zero.


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

2. Study the dataset. 
Study the data and the target, and create a train-test split.
To make the target vector to a binary vector one way is:
```python
y_train = (y_train == 5)
y_test = (y_test == 5)
```

3. Choose a classifier. (Decision tree here)

4. Choose an accuracy measure. (Cross validation, confusion matrix, etc)

5. Train the model.

6. Tune the model. 

7. Present the results.


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