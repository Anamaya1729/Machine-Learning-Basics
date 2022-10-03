# Hacktoberfest 2022 - Machine Learning Basics

## Machine Learning Advance Algorithms

### Dimensionality Reduction - PCA

Principal Component Analysis (PCA) is a dimensionality reduction technique. It is used to reduce the dimensionality of a dataset by projecting it to a lower dimensional subspace. The goal of PCA is to find a linear combination of the original features that captures as much information as possible. The linear combination of the original features are called principal components. The first principal component captures the most information, the second principal component captures the second most information and so on. The number of principal components is less than or equal to the number of original features. The principal components are orthogonal to each other. The principal components are ordered in decreasing order of the amount of information they capture.

#### Input Format

Implement the function `pca` in the dimensionality_reduction_pca.ipynb file. The function should take the following arguments:
- `X`: The input data.
- `n_components`: The number of principal components.

#### Output Format

The function should return the following:
- `X_transformed`: The transformed data.
- `explained_variance`: The explained variance of the principal components.
- `explained_variance_ratio`: The explained variance ratio of the principal components.

#### Rules
- The function should be implemented in the `pca` function in the `dimensionality_reduction_pca.ipynb` file.
- The function should not use any external libraries, except for numpy.
- The function should be able to handle any dataset.
- The function should be able to handle any number of principal components.
- The function should be able to handle any number of features.
- The function should be able to handle any number of samples.
- Please read the [CODE_OF_CONDUCT.md](../../CODE_OF_CONDUCT.md).

#### Study Material
- [PCA - Wikipedia](https://en.wikipedia.org/wiki/Principal_component_analysis)
- [PCA - Towards Data Science](https://towardsdatascience.com/a-one-stop-shop-for-principal-component-analysis-5582fb7e0a9c)
- [PCA - Scikit-Learn](https://scikit-learn.org/stable/modules/generated/sklearn.decomposition.PCA.html)
- [PCA - YouTube](https://www.youtube.com/watch?v=FgakZw6K1QQ)

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
