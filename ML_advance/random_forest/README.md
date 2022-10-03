# Hacktoberfest 2022 - Machine Learning Basics

## Machine Learning Advance Algorithms

### Random Forest
Random forest is a supervised learning algorithm. The "forest" it builds, is an ensemble of decision trees, usually trained with the “bagging” method. The general idea of the bagging method is that a combination of learning models increases the overall result.

### Task
You have to create a random forest model using the scikit-learn library. The model should take a 2D array as input and output a 1D array. The model should be trained on the Boston dataset. You have to implement it in `random_forest.ipynb`.

### Example
```python
from sklearn.datasets import load_boston
from sklearn.ensemble import RandomForestRegressor

# Load the data

# Create an instance of the model

# Train the model

# Evaluate the model
```

### Rules
- Implement the task in `random_forest.ipynb`.
- The model should be able to handle any dataset that is in the same format as the Boston dataset.
- Please read the [scikit-learn documentation](https://scikit-learn.org/stable/) to learn how to use the scikit-learn library.
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