<h2><a href="https://leetcode.com/problems/goat-latin/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Facebook</div><div class="companyTagsContainer--tagOccurence">5</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>824. Goat Latin</a></h2><h3>Easy</h3><hr><div><p>You are given a string <code>sentence</code> that consist of words separated by spaces. Each word consists of lowercase and uppercase letters only.</p>

<p>We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.) The rules of Goat Latin are as follows:</p>

<ul>
	<li>If a word begins with a vowel (<code>'a'</code>, <code>'e'</code>, <code>'i'</code>, <code>'o'</code>, or <code>'u'</code>), append <code>"ma"</code> to the end of the word.

	<ul>
		<li>For example, the word <code>"apple"</code> becomes <code>"applema"</code>.</li>
	</ul>
	</li>
	<li>If a word begins with a consonant (i.e., not a vowel), remove the first letter and append it to the end, then add <code>"ma"</code>.
	<ul>
		<li>For example, the word <code>"goat"</code> becomes <code>"oatgma"</code>.</li>
	</ul>
	</li>
	<li>Add one letter <code>'a'</code> to the end of each word per its word index in the sentence, starting with <code>1</code>.
	<ul>
		<li>For example, the first word gets <code>"a"</code> added to the end, the second word gets <code>"aa"</code> added to the end, and so on.</li>
	</ul>
	</li>
</ul>

<p>Return<em> the final sentence representing the conversion from sentence to Goat Latin</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> sentence = "I speak Goat Latin"
<strong>Output:</strong> "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> sentence = "The quick brown fox jumped over the lazy dog"
<strong>Output:</strong> "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentence.length &lt;= 150</code></li>
	<li><code>sentence</code> consists of English letters and spaces.</li>
	<li><code>sentence</code> has no leading or trailing spaces.</li>
	<li>All the words in <code>sentence</code> are separated by a single space.</li>
</ul>
</div>