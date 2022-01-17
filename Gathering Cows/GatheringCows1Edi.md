## Editorial
  <details>
    <summary> Hint </summary>
      The greedy observation is that we want to minimze the total sum, since all the numbers are positive and a smaller sum indicates a shorter subsequence. This problem can be solved in O(n) time.
  </details>

  <details>
    <summary> Full Solution </summary>
      Use two pointers: the left and right pointers. Move the right pointer to the right while the sum < x. If the sum >= x, then update the length of the shortest subarray and move the left pointer to the left until sum < x. If the sum is constantly < x as shown by the second test case, print -1.
  </details>
  
  <details>
    <summary> Code </summary>
    Coming soon.
  </details>
