class Solution {
public:
    vector<int> getFloorAndCeil(vector<int>& arr, int target) 
    {
        int floor = -1, ceil = -1;
        int low = 0, high = arr.size() - 1;

        // Find floor
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                floor = ceil = arr[mid];
                break;
            } else if (arr[mid] < target) {
                floor = arr[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Reset low and high for ceil search
        low = 0, high = arr.size() - 1;

        // Find ceil only if not found during floor
        while (low <= high && floor != ceil) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                floor = ceil = arr[mid];
                break;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                ceil = arr[mid];
                high = mid - 1;
            }
        }

        return {floor, ceil};
    }
};
