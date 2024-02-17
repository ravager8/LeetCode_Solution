class Solution
{
public:
	int maxSelectedElements(vector<int>& nums)
	{
		// order the numbers
		sort(nums.begin(), nums.end());

		int maxSize = 1;
		int curSize = 1;
		int lookingFor = -100;
		for (int i = 0; i < nums.size(); ++i)
		{
			// The next number is the one we are looking for,
            // or we can modify it by increasing its value by 1
			if (nums[i] == lookingFor || nums[i] + 1 == lookingFor)
			{
				// In this case we can use this number to extend the sequence
				curSize++;
				lookingFor++;
			}
			// If we can't use this number and this number is greater than what we were looking for,
			// then we wont find what we are looking for (as the following numbers are only equal or greater)
			else if (nums[i] > lookingFor)
			{
				// Save off the size of the sequence we've found so far
				maxSize = max(maxSize, curSize);

				// Restart the sequence from this number, unless...
				curSize = 1;
				// ...the previous numbers are a consecutive sequence
                // that is exactly 1 less than what would lead to this number.
				// For example, with the numbers [...7, 11, 12, 13, 15, 16, ...],
                // when we reach 15 we will reset the sequence (as we will be looking for 14),
				// but we can see that 11, 12, 13 are consecutive and could all be increased by 1
                // to get the sequence 12, 13, 14 which then could be continued by 15.
				for (int k = i - 1, target = nums[i] - 2; k >= 0 && target == nums[k]; --target, --k)
					curSize++;

				lookingFor = nums[i] + 1;
			}
		}
		// Need to save off the last sequence we've found
		maxSize = max(maxSize, curSize);

		return maxSize;
	}
};