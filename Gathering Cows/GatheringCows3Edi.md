## Editorial
  <details>
    <summary> Hint </summary>
      Pay attention to the bound on N. Since N <= 100, we can iterate over the lower left and upper right coordinates of the rectangle.
  </details>

  <details>
    <summary> Full Solution </summary>
      Since N is small, it is optimal to brute force the lower left and upper right corners of the rectangle. However, keep in mind that the coordinates go up to 10^9! This indicates that we must use coordinate compression in order to avoid a TLE/MLE verdict. Use two 2D prefix sums to check the number of cows producing at least K gallons of milk and check whether the sum of all gallons of milk is at least X. Obviously if K * the number of cows in the subgrid is >= X, then that given subgrid is one of the potential subgrids that could work. Time Complexity: O(N^4). Challenge: Can you solve this in O(n^3) time?
  </details>
  
  <details>
    <summary> Code </summary>
    Coming soon.
  </details>
