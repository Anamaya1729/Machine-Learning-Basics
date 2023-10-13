from flask import Flask, render_template, request
from transformers import pipeline, TFAutoModelForSeq2SeqLM, AutoTokenizer

app = Flask(__name__)

model_path = "./bart-large-cnn"
tokenizer = AutoTokenizer.from_pretrained(model_path)
model = TFAutoModelForSeq2SeqLM.from_pretrained(model_path)

summarizer = pipeline("summarization", model=model, tokenizer=tokenizer)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/summarize', methods=['POST'])
def summarize():
    text = request.form['text']
    summary = summarizer(text, max_length=130, min_length=30, do_sample=False)
    return render_template('index.html', text=text, summary=summary[0]['summary_text'])

if __name__ == '__main__':
    app.run(port=52323, debug=True)

