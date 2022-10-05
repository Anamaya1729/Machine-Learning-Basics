import numpy as np

def root_mean_squared_error(y, y_pred):
    return np.sqrt(np.mean((y - y_pred)**2))

def r2_score(y, y_pred):
    return 1 - np.sum((y - y_pred)**2) / np.sum((y - np.mean(y))**2)

class LinearRegression:
    """
    Linear Regression

    Parameters
    ----------
    learning_rate: float, default=0.01
        The step length that will be taken when following
        the negative gradient during training.

    n_iterations: int, default=300
        Number of iterations over the training dataset
        to perform gradient descent.
    """

    def __init__(self, learning_rate:float =0.01, n_iterations: int=300):
        self.learning_rate = learning_rate
        self.n_iterations = n_iterations
        self.weights = None
        self.bias = None

        self.model_fit = False

    def fit(self, X, y):
        """
        Fits the model to the Given training data.

        Parameters
        ----------
        X: matrix-like of shape (m_samples, n_features)
            The training input samples.

        y: array-like of shape (m_samples,)
            The target values.

        Returns
        -------
        self: object
            Fitted Model
        """

        m, n = X.shape
        self.model_fit = True

        # init parameters
        self.weights = np.zeros(n)
        self.bias = 0

        # gradient descent
        for _ in range(self.n_iterations):
            y_predicted = np.dot(X, self.weights) + self.bias       # y = wx + b || [m, ] =  [m, n] . [n, ] + [1, ]

            # compute gradients
            dw = (1 / m) * np.dot(X.T, (y_predicted - y))           # dw = (1 / m) * (X.T . (y_predicted - y)) || [n, ] = [n, m] . ([m, ] - [m, ])
            db = (1 / m) * np.sum(y_predicted - y)                  # db = (1 / m) * np.sum(y_predicted - y) || [1, ] = Σ([m, ] - [m, ])

            # update parameters
            self.weights -= self.learning_rate * dw                 # w = w - ɑ * dw
            self.bias -= self.learning_rate * db                    # b = b - ɑ * db

        return self

    def predict(self, X):
        """
        Predicts the target values for the given input samples.

        Parameters
        ----------
        X: matrix-like of shape (m_samples, n_features)
            The input samples.

        Returns
        -------
        y: array-like of shape (m_samples,)
            The predicted target values.
        """
        if not self.model_fit:
            raise Exception('Model not fitted yet. Call fit() first.')

        return np.dot(X, self.weights) + self.bias

    def score(self, X, y):
        """
        Returns the R^2 score of the trained moded on the given data.

        Parameters
        ----------
        X: matrix-like of shape (m_samples, n_features)
            The input samples.

        y: array-like of shape (m_samples,)

        Returns
        -------
        r2_score: float
            The coefficient of determination R^2 of the prediction.
        """
        if not self.model_fit:
            raise Exception('Model not fitted yet. Call fit() first.')

        y_pred = self.predict(X)
        score = r2_score(y, y_pred)

        return score

if __name__ == "__main__":
    X = np.array([[1, 2], [3, 4], [5, 6], [7, 8], [9, 10]])
    y = np.array([1, 2, 3, 4, 5])
    y = y * (np.random.randn(5) * 0.01 + 1)

    regressor = LinearRegression()
    regressor.fit(X, y)
    print(regressor.predict(X))
    print(f'Score: {regressor.score(X, y)}')

