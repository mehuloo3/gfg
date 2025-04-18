<h2><a href="https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?page=2&category=Stack&difficulty=Easy&sortBy=submissions">Implement two stacks in an array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><span style="font-size: 18px;">Your task is to implement&nbsp;&nbsp;2 stacks in one array efficiently. You need to implement 4 methods.</span></span></p>
<p><span style="font-size: 18px;"><strong><span style="font-size: 18px;">twoStacks :&nbsp;</span></strong><span style="font-size: 18px;">Initialize the data structures and variables to be used to </span><span style="font-size: 18px;">implement&nbsp;&nbsp;2 stacks in one array.</span><br><strong style="font-size: 18px;">push1 </strong><span style="font-size: 18px;">: pushes element into first stack.</span><br><strong style="font-size: 18px;">push2 </strong><span style="font-size: 18px;">: pushes element into second stack.</span><br><strong style="font-size: 18px;">pop1 </strong><span style="font-size: 18px;">: pops element from first stack and returns the popped element. If first stack is empty, it should return -1.</span><br><strong style="font-size: 18px;">pop2 </strong><span style="font-size: 18px;">: pops element from second stack and returns the popped element. If second stack is empty, it should return -1.</span><br></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>push1(2)
push1(3)
push2(4)
pop1()
pop2()
pop2()
<strong>Output:
</strong>3 4 -1<strong>
Explanation:
</strong>push1(2) the stack1 will be {2}
push1(3) the stack1 will be {2,3}
push2(4) the stack2 will be {4}
pop1() &nbsp; the poped element will be 3 from stack1 and stack1 will be {2}
pop2() &nbsp; the poped element will be 4 from stack2 and now stack2 is empty
pop2()&nbsp;  the stack2 is now empty hence returned -1.<br></span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>push1(1)
push2(2)<br></span><span style="font-size: 18px;">pop1()
push1(3)
pop1()
pop1()
<strong>Output:
</strong>1 3 -1<strong>
Explanation:
</strong>push1(1) the stack1 will be {1}
push2(2) the stack2 will be {2}<br>pop1()   the poped element will be 1 from stack1 and stack1 will be empty<br>push1(3) the stack1 will be {3}
pop1() &nbsp; the poped element will be 3 from stack1 and stack1 will be empty<br>pop1()&nbsp;  the stack1 is now empty hence returned -1.</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything.&nbsp;You are required to complete the 4&nbsp;methods&nbsp;<strong>push1,&nbsp;push2&nbsp;</strong>which takes one argument an integer<strong> 'x' </strong>to be pushed into stack one and two<strong>&nbsp;</strong>and&nbsp;<strong>pop1, pop2</strong> which returns the integer poped out from stack one and two. If no integer is present in the stack return <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(1) for all the four methods.<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1) for all the four methods.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;=<strong> </strong>Number of queries &lt;= 10<sup>4</sup><br>1 &lt;= Number&nbsp;of elements in the stack</span><span style="font-size: 18px;"> &lt;= 100</span><br><span style="font-size: 18px;">The sum of count of elements in both the stacks &lt; size of the given array</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>24*7 Innovation Labs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;