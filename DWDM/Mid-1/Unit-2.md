<!--
  Author: omteja04
  Created on: 10-09-2024 21:19:08
  Description: Unit-2
-->

- [1. Explain different types of Attributes with examples](#1-explain-different-types-of-attributes-with-examples)
  - [Different Types of Attributes in Data Mining](#different-types-of-attributes-in-data-mining)
  - [Summary of Operations by Attribute Type:](#summary-of-operations-by-attribute-type)
- [2. Explain different data sets of Attributes with examples](#2-explain-different-data-sets-of-attributes-with-examples)
  - [Different Types of Data Sets and Their Attributes](#different-types-of-data-sets-and-their-attributes)
- [3. Explain preprocessing in detail](#3-explain-preprocessing-in-detail)
- [4. Describe Data Transformation \& Data Discretization.](#4-describe-data-transformation--data-discretization)
  - [Data Transformation](#data-transformation)
  - [Data Discretization](#data-discretization)
- [Suppose a group of 12 sales price records has been sorted as follows: `5,10,11,13,15,35,50,55,72,92,204,215` Partition them into three bins by each of the following methods:](#suppose-a-group-of-12-sales-price-records-has-been-sorted-as-follows-5101113153550557292204215-partition-them-into-three-bins-by-each-of-the-following-methods)
  - [Equal-frequency (equal-depth) partitioning](#equal-frequency-equal-depth-partitioning)
  - [Equal-width partitioning](#equal-width-partitioning)
  - [Given Data](#given-data)
  - [a. Equal-Frequency (Equal-Depth) Partitioning](#a-equal-frequency-equal-depth-partitioning)
  - [b. Equal-Width Partitioning](#b-equal-width-partitioning)

## 1. Explain different types of Attributes with examples

### Different Types of Attributes in Data Mining

In data mining, attributes (or features) are the variables or characteristics used to describe and analyze data. Here are the main types of attributes, explained with examples:

1. **Nominal Attributes**

   - **Definition**: Represent categories or names without any intrinsic order.
   - **Examples**:
     - **Gender**: Male, Female, Non-Binary.
     - **Product Category**: Electronics, Clothing, Furniture.
   - **Operations**: Used for classification and grouping. Operations include counting occurrences of each category and determining the mode. Mathematical operations or comparisons beyond equality are not applicable.

2. **Ordinal Attributes**

   - **Definition**: Represent categories with a meaningful order but without necessarily evenly spaced intervals between categories.
   - **Examples**:
     - **Customer Satisfaction Rating**: Very Dissatisfied, Dissatisfied, Neutral, Satisfied, Very Satisfied.
     - **Education Level**: High School, Bachelor's Degree, Master's Degree, Doctorate.
   - **Operations**: Used for ranking and sorting. Operations include determining the order and comparing relative ranks. Mathematical operations are limited to ranking, as differences between ranks are not necessarily equal.

3. **Interval Attributes**

   - **Definition**: Numeric attributes where the intervals between values are meaningful, but there is no true zero point.
   - **Examples**:
     - **Temperature**: Measured in Celsius or Fahrenheit (e.g., 20°C, 30°C).
     - **IQ Score**: Scores where differences are meaningful, but there is no true zero (e.g., 100, 120).
   - **Operations**: Used for measuring differences and trends. Arithmetic operations like addition and subtraction are valid. Ratios are not meaningful because there is no true zero point.

4. **Ratio Attributes**
   - **Definition**: Numeric attributes with a meaningful zero point, allowing for the comparison of absolute magnitudes.
   - **Examples**:
     - **Age**: Number of years since birth (e.g., 25 years old, 40 years old).
     - **Income**: Amount of money earned (e.g., $30,000, $50,000).
   - **Operations**: Support all arithmetic operations (addition, subtraction, multiplication, division) and meaningful comparisons of ratios. Allows for measuring absolute differences and relative proportions.

### Summary of Operations by Attribute Type:

- **Nominal**: Classification, counting, mode determination.
- **Ordinal**: Ranking, sorting, relative comparisons.
- **Interval**: Measuring differences, trend analysis, arithmetic operations (excluding ratios).
- **Ratio**: All arithmetic operations, absolute and relative comparisons.

---

## 2. Explain different data sets of Attributes with examples

### Different Types of Data Sets and Their Attributes

1. **Record Data Sets**

   - **Data Matrix**

     - **Definition**: A grid where data is arranged in rows and columns, with each cell holding a specific data value.
     - **Example**: A spreadsheet with rows representing individuals and columns for attributes such as age, income, and occupation.

   - **Document Data**

     - **Definition**: Data organized as documents with free-form text, including articles, reports, or emails.
     - **Example**: A collection of news articles with attributes like title, body text, author, and publication date.

   - **Transaction Data**
     - **Definition**: Data related to transactions, capturing details of purchases or sales.
     - **Example**: Retail sales records with attributes such as transaction ID, date, items purchased, and total amount.

2. **Graph Data Sets**

   - **World Wide Web**

     - **Definition**: A network of interconnected web pages or websites, where nodes represent web pages and edges represent hyperlinks between them.
     - **Example**: A graph illustrating the structure of the internet, with nodes as websites and edges as hyperlinks connecting them.

   - **Molecular Structures**
     - **Definition**: Graphs representing molecular structures, where nodes denote atoms and edges denote chemical bonds.
     - **Example**: A graph of a water molecule with nodes representing hydrogen and oxygen atoms, and edges representing the chemical bonds.

3. **Ordered Data Sets**

   - **Spatial Data**

     - **Definition**: Data with a spatial component, detailing locations and geographical features.
     - **Example**: A geographic information system (GIS) dataset with attributes for location coordinates and geographical features.

   - **Temporal Data**

     - **Definition**: Data that changes over time, capturing time-series or temporal patterns.
     - **Example**: Stock market data with timestamps, where each record includes attributes like date, stock price, and trading volume.

   - **Sequential Data**

     - **Definition**: Data where the order of elements is significant, capturing sequences or ordered events.
     - **Example**: A log of user activities on a website, where each entry records the sequence of actions taken by the user.

   - **Genetic Sequence**
     - **Definition**: Data representing sequences of nucleotides in DNA or RNA, used in biological research and genomics.
     - **Example**: A DNA sequence dataset where each record represents a sequence of nucleotide bases (A, T, C, G) in a specific organism.

---

## 3. Explain preprocessing in detail

**Data Preprocessing** is a crucial step in data mining and machine learning, involving the transformation of raw data into a format suitable for analysis.

**Importance of Data Preprocessing:**

1. **Accuracy**: Ensures data correctness.
2. **Completeness**: Confirms all required data is present.
3. **Consistency**: Ensures uniformity across datasets.
4. **Timeliness**: Guarantees data is up-to-date.
5. **Believability**: Ensures data reliability.
6. **Interpretability**: Makes data understandable.

![Steps](https://cdn.ttgtmedia.com/rms/onlineimages/steps_for_data_preprocessing-f.png)
**Data Preprocessing Steps**

1. **Data Profiling:**

   - **Purpose:** Assess data quality by examining its characteristics.
   - **Activities:** Survey existing data, identify relevant datasets and attributes, form hypotheses about useful features, and match data sources to business concepts. Choose appropriate preprocessing libraries.

2. **Data Cleansing:**

   - **Purpose:** Rectify data quality issues.
   - **Activities:** Remove bad data, fill missing values, and ensure data is suitable for feature engineering.

3. **Data Reduction:**

   - **Purpose:** Simplify data by removing redundancy.
   - **Activities:** Apply techniques like principal component analysis to transform and reduce the data size, focusing on relevant features for specific tasks.

4. **Data Transformation:**

   - **Purpose:** Organize data effectively for analysis.
   - **Activities:** Structure unstructured data, combine relevant variables, and identify key ranges or features.

5. **Data Enrichment:**

   - **Purpose:** Enhance the dataset with useful features.
   - **Activities:** Use feature engineering libraries to apply transformations that balance model training time and computational requirements.

6. **Data Validation:**
   - **Purpose:** Evaluate the quality and performance of the preprocessed data.
   - **Activities:** Split data into training and testing sets. Train the model on one set and test it on the other to assess accuracy and robustness. Refine the preprocessing if necessary and prepare for production deployment.

---

## 4. Describe Data Transformation & Data Discretization.

### Data Transformation

**Data Transformation** involves converting data into a format or structure that is more appropriate for analysis or modeling. It helps enhance data quality and relevance for the analytical processes. Key methods include:

1. **Normalization:** Adjusts the data to fit within a specific range, typically [0, 1]. This helps in standardizing data, especially when combining features with different units or scales. For example, scaling income values ranging from $0 to $1,000,000 to a range of 0 to 1.

2. **Standardization:** Converts data to have a mean of 0 and a standard deviation of 1. This is useful for algorithms that assume data is normally distributed. For instance, transforming test scores to have a mean of 0 and a standard deviation of 1 to enable comparison across different subjects.

3. **Aggregation:** Combines data from multiple sources or levels into a summarized format. For example, aggregating daily sales data to monthly totals to analyze sales trends over time.

4. **Encoding:** Converts categorical variables into numerical formats. One common technique is one-hot encoding, where each category is represented by a binary vector. For instance, encoding the categorical variable "color" with values "red," "blue," and "green" into separate binary columns.

5. **Feature Engineering:** Involves creating new features from existing data to capture more information or improve model performance. For example, creating a "total spending" feature from separate attributes like "monthly expenditure" and "annual bonus."

### Data Discretization

**Data Discretization** transforms continuous data into discrete categories or intervals, simplifying the data and making it easier to analyze.

1. **Binning:** Groups continuous values into bins or intervals. This can smooth out noise or handle outliers. For example, binning age into intervals like 0-18, 19-35, and 36-60 to categorize individuals into age groups.

2. **Equal-Width Binning:** Divides the range of data into equal-width intervals. For example, splitting income data into bins of $10,000 intervals, such as $0-$10,000, $10,001-$20,000, etc.

3. **Equal-Frequency Binning:** Creates intervals with roughly the same number of data points. This is useful when data is skewed. For example, splitting a dataset of 1,000 incomes into 10 bins, each containing 100 incomes.

4. **Clustering-Based Discretization:** Uses clustering algorithms to define intervals based on data similarity. For instance, using k-means clustering to create discrete income ranges that group similar income levels together.

---

## Suppose a group of 12 sales price records has been sorted as follows: `5,10,11,13,15,35,50,55,72,92,204,215` Partition them into three bins by each of the following methods:

### Equal-frequency (equal-depth) partitioning

### Equal-width partitioning

To partition the given sorted sales price records into three bins using different methods, follow these steps:

### Given Data

```
5, 10, 11, 13, 15, 35, 50, 55, 72, 92, 204, 215
```

### a. Equal-Frequency (Equal-Depth) Partitioning

In equal-frequency partitioning, the data is divided into bins such that each bin contains approximately the same number of records.

- **Total Records:** 12
- **Number of Bins:** 3
- **Records per Bin:** 12 / 3 = 4

**Partitioning:**

1. **Bin 1:** The first 4 records

   - 5, 10, 11, 13

2. **Bin 2:** The next 4 records

   - 15, 35, 50, 55

3. **Bin 3:** The last 4 records
   - 72, 92, 204, 215

### b. Equal-Width Partitioning

In equal-width partitioning, the range of the data is divided into intervals of equal width.

- **Range of Data:** Maximum value - Minimum value = 215 - 5 = 210
- **Number of Bins:** 3
- **Width of Each Bin:** 210 / 3 = 70

**Partitioning:**

1. **Bin 1:** Values within the range 5 to 75 (5 + 70)

   - 5, 10, 11, 13, 15, 35

2. **Bin 2:** Values within the range 75 to 145 (75 + 70)

   - 50, 55, 72

3. **Bin 3:** Values within the range 145 to 215
   - 92, 204, 215

**Summary of Bins:**

- **Equal-Frequency Partitioning:**

  1. 5, 10, 11, 13
  2. 15, 35, 50, 55
  3. 72, 92, 204, 215

- **Equal-Width Partitioning:**
  1. 5, 10, 11, 13, 15, 35
  2. 50, 55, 72
  3. 92, 204, 215

---

<br>
<div align='center'>
  <a href='https://github.com/omteja04'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
