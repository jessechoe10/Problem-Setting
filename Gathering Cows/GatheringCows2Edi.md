## Editorial
  <details>
    <summary> Hint </summary>
      Since a_i is positive, this implies that the prefix sum array of a will be in sorted order.
  </details>

  <details>
    <summary> Full Solution </summary>
      Use prefix sums and binary search. Since a_i is positive, it is guaranteed that the prefix sum array will be sorted! This implies that we can use std::lower_bound to compute for a given r the number of indices l such that l < r and sum(l, r) >= x.
  </details>
  
  <details>
    <summary> Code </summary>
    Coming soon.
  </details>
