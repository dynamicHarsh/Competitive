
const userLoginData = [
    {
        userId: 'user1',
        loggedInTimestamp: '2024-04-01T10:00:00Z', 
        lastSeenAtTimestamp: '2024-04-15T15:30:00Z',
    },
    // ... more user data ...
];


function calculateMonthlyLoggedInUsers(data: any[], targetMonth: number, targetYear: number): number {
    const uniqueUsers = new Set<string>(); // To store unique user IDs
    for (const user of data) {
        const loginDate = new Date(user.loggedInTimestamp);
        if (loginDate.getMonth() === targetMonth && loginDate.getFullYear() === targetYear) {
            uniqueUsers.add(user.userId);
        }
    }
    return uniqueUsers.size;
}


function calculateMonthlyActiveUsers(data: any[], targetMonth: number, targetYear: number): number {
    const activeUsers = new Set<string>(); // To store active user IDs
    for (const user of data) {
        const lastSeenDate = new Date(user.lastSeenAtTimestamp);
        if (lastSeenDate.getMonth() === targetMonth && lastSeenDate.getFullYear() === targetYear) {
            activeUsers.add(user.userId);
        }
    }
    return activeUsers.size;
}

// Example usage
const targetMonth = 3; // April (0-indexed)
const targetYear = 2024;
const monthlyLoggedInUsers = calculateMonthlyLoggedInUsers(userLoginData, targetMonth, targetYear);
const monthlyActiveUsers = calculateMonthlyActiveUsers(userLoginData, targetMonth, targetYear);

console.log(`Monthly Logged-In Users (MLU): ${monthlyLoggedInUsers}`);
console.log(`Monthly Active Users (MAU): ${monthlyActiveUsers}`);
