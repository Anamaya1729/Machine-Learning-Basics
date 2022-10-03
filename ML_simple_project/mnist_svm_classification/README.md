# SVM (Support Vector Machines)

## About the problem
SVM classification is using the SVM for the purpose of classification. In this project the goal is to create a SVM classifier that that recognize the given image as an input with accuracy.

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

3. Choose a classifier. (Decision tree here)

4. Choose an accuracy measure. (Cross validation, confusion matrix, etc)

5. Train the model.

6. Tune the model. 

7. Present the results.

## Learn more about SVMs
- [Basics of SVM](https://towardsdatascience.com/support-vector-machine-introduction-to-machine-learning-algorithms-934a444fca47)
- [Lecture on SVMs by MIT OCW](https://www.youtube.com/watch?v=_PwhiWxHK8o)


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