<h2><a href="https://www.geeksforgeeks.org/problems/find-duplicate-rows-in-a-binary-matrix/1?page=3&category=Matrix,Stack&status=unsolved&sortBy=submissions">Find duplicate rows in a binary matrix</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>boolean</strong> matrix of size n*m where each cell contains either 0 or 1, find the row numbers </span><span style="font-size: 18px;">(0-based)</span><span style="font-size: 18px;"> of rows which already exists or are repeated.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] = {{1, 0},
                {1, 0}}
<strong>Output: [</strong>1]</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>Row 1 is duplicate of Row 0.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] = {{ 1, 0, 0},
                { 1, 0, 0},
                { 0, 0, 0},
                { 0, 0, 0}}</span>
<span style="font-size: 18px;"><strong>Output: [</strong></span><span style="font-size: 18px;">1, 3]</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>Row 1 and Row 3 are duplicates of Row 0 and 2 respectively. </span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 10<sup>3</sup></span><br><span style="font-size: 18px;">0 ≤ mat[i][j] ≤ 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Trie</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;