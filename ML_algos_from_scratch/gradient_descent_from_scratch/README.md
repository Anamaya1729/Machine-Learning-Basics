# Hacktoberfest 2022 - Machine Learning Basics

## Machine Learning Algorithm from Scratch

### Gradient Descent
Gradient descent is an optimization algorithm used to find the values of parameters (coefficients) of a function (f) that minimizes a cost function (cost). In other words, it is used to minimize the error between the actual value (y) and the predicted value (ŷ) by changing the values of the coefficients. The goal is to find the best values for the coefficients so that the line of best fit is obtained.

### Input Format
The gradient descent function takes the following arguments:
- `X`: The features.
- `y`: The target variable.
- `alpha`: The learning rate.
- `num_iter`: The number of iterations.

### Output Format
The output is a dictionary with the following keys:
- `error`: The error at each iteration.
- `theta`: The coefficients at each iteration.

### Example
```python
from gradient_descent_from_scratch import gradient_descent

# Load the data
data = pd.read_csv('data.csv')

# Split the data into features and target
X = data.drop('target', axis=1)
y = data['target']

# Perform gradient descent
theta, error = gradient_descent(X, y, alpha=0.01, num_iter=1000)
```

### Rules
- Implement the function in `gradient_descent_from_scratch.py`.
- The function should take the following arguments:
    - `X`: The features.
    - `y`: The target variable.
    - `alpha`: The learning rate.
    - `num_iter`: The number of iterations.
- The function should return the output as described above.
- The function should be able to handle any model that has the following methods:
    - `fit(X, y)`: Fit the model on the training data.
    - `predict(X)`: Predict the target variable on the given data.
    - `score(X, y)`: Return the score of the model on the given data.
- The function should be able to handle any model that has the following attributes:
    - `coef_`: The coefficients of the model.
    - `intercept_`: The intercept of the model.
- File can be used as a module and should be able to be imported as `from gradient_descent_from_scratch import gradient_descent`.

### Style Guide
- Follow [PEP8](https://www.python.org/dev/peps/pep-0008/) style guide.

## Maintainers
- [Anamaya](https://github.com/Anamaya1729)
- [Yuvraj](https://github.com/YuvrajSinghGitbub)

## License

**This project is licensed under the GNU GENERAL PUBLIC License - see the [LICENSE](../LICENSE) file for details**

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](https://creativecommons.org/publicdomain/zero/1.0)