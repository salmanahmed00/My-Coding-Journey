/*

Maximum Points You Can Obtain from Cards

Link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

Your score is the sum of the points of the cards you have taken.

Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

*/



int maxScore(vector<int> &cardPoints, int k)
{

    int size = cardPoints.size() - k;
  
    int j = 0, i = 0;

    int sum = 0;

    int total = 0;

    int m = INT_MAX;

    while (j < cardPoints.size())
    {

        sum += cardPoints[j];

        if (j - i + 1 < size)
        {

            total += cardPoints[j];
            j++;
        }

        else
        {
            m = min(sum, m);
            sum -= cardPoints[i];
            total += cardPoints[j];
            i++;
            j++;
        }
    }

    if (size == 0)
    {
        return total;
    }

    return total - m;
}
