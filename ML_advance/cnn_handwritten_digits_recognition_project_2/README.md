# Hand Written Digit Prediction Model

## About model :-

* I have made this model using dense layer. There are 5 models in .ipynb file in which the 5th model has the highest accuracy. Also I have tried this model by giving custom input (Digits written by me and some other people and then given to the model to predict). I have also used various activation functions and loss function and came up with the best possible combination(which is model 5)

* You can also predict a digit written by you through this model.

* Much detail about project is given in PDF file present in the folder.

## How to use :-

* Download all the libraries used in the .ipynb file
* Run all the cells and get the model trained.

## How to predict customized inputs:-

* open a online whiteboard [For eg:- https://webwhiteboard.com/]
* Make the screen black and then write the digit on it using a pen/pencil
* Take the screenshot or download the picture from web board
* Resize it to 28x28 pixel [You can use- https://www.resizepixel.com/]
* Get the resized picture in the same folder as the .ipynb file
* Copy the resized picture name and replace it with the name already present in model (for eg purpose it is given in the file, scroll down to see)
* Run the cells and finally your custom hand written digit will predicted.

### If you dont have libraries:-
 You can download by running these commands:-
 #### Numpy-
 pip3 install numpy

 #### Pandas-
  sudo apt install python3-pandas

 #### Matplotlib-
 python -m pip install -U matplotlib
 #### seaborn-
 sudo apt-get install -y python3-seaborn
