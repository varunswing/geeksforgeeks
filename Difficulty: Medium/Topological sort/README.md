<h2><a href="https://www.geeksforgeeks.org/problems/topological-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Topological sort</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an adjacency list for a Directed Acyclic Graph (DAG) where <strong>adj_list[i]</strong> contains a list of all vertices j such that there is a directed edge from vertex i to vertex j, with&nbsp; <strong>V</strong>&nbsp; vertices and <strong>E</strong>&nbsp; edges, your task is to find any valid topological sorting of the graph.</span></p>
<p><span style="font-size: 18px;">&nbsp;</span></p>
<p><span style="font-size: 18px;">In a topological sort, for every directed edge u -&gt; v,&nbsp; u must come before v in the ordering.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700255/Web/Other/24aa5d54-bc1f-489c-bd2d-ad02ddccdf31_1684492511.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
1
<strong>Explanation</strong>:
The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.</span>
<span style="font-size: 18px;">One possible Topological order for the
graph is 3, 2, 1, 0.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700255/Web/Other/c35bb1d1-130c-49aa-a17e-118181d7bdcd_1684492512.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
1
</span><span style="font-size: 18px;"><strong>Explanation:
</strong></span><span style="font-size: 18px;">The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.
One possible Topological order for the
graph is 5, 4, 2, 1, 3, 0.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>topoSort()</strong>&nbsp;</span> <span style="font-size: 18px;">which takes the integer V denoting the number of vertices and adjacency list as input parameters</span> <span style="font-size: 18px;"> and returns an array consisting of the vertices in Topological order. As there are multiple Topological orders possible, you may return any of them. If your returned topo sort is correct then the console output will be 1 else 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(V + E).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(V).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> V </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;">10<sup>4</sup><br>1 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> E </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> (N*(N-1))/2</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Moonfrog Labs</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Samsung</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>Visa</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;