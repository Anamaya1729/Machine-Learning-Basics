# Hacktoberfest 2022 - Machine Learning Basics

## Machine Learning Algorithm from Scratch

### Cross Validation
Cross validation is a technique used to evaluate machine learning models on a limited data sample. The goal is to estimate how the model will generalize to an independent data sample. That is, to use a limited data sample in order to estimate how the model will behave in real world.

### Input Format
The input format is a model and a input feature, target attribute and number of folds. The model is a function which takes input feature and target attribute as input and returns the model. The input feature and target attribute are numpy arrays. The number of folds is an integer.

### Output Format
The output is a dictionary with the following keys:
- `train_score`: The score of the model on the training data.
- `test_score`: The score of the model on the test data.
- `train_rmse`: The root mean squared error of the model on the training data.
- `test_rmse`: The root mean squared error of the model on the test data.

### Example
```python
from cross_validation_from_scratch import cross_validation
from linear_regression import LinearRegression

# Load the data
data = pd.read_csv('data.csv')

# Split the data into features and target
X = data.drop('target', axis=1)
y = data['target']

# Create an instance of the model
model = LinearRegression()

# Perform cross validation
scores = cross_validation(model, X, y, k=5)
```

### Rules
- Implement the function in `cross_validation_from_scratch.py`.
- The function should take the following arguments:
    - `model`: An instance of the model.
    - `X`: The features.
    - `y`: The target variable.
    - `k`: The number of folds.
- The function should return the output as described above.
- The function should be able to handle any model that has the following methods:
    - `fit(X, y)`: Fit the model on the training data.
    - `predict(X)`: Predict the target variable on the given data.
    - `score(X, y)`: Return the score of the model on the given data.
- The function should be able to handle any model that has the following attributes:
    - `coef_`: The coefficients of the model.
    - `intercept_`: The intercept of the model.
- File can be used as a module and should be able to be imported as `from cross_validation_from_scratch import cross_validation`.

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