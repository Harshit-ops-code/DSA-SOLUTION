                (10^9).
                if (curr > 100000) break; 
            }

            // Determine if the chain ended on a valid peak or a broken link
            if (freq.count(curr) && freq[curr] >= 1) {
                current_len += 1; // Current element acts as a valid peak
            } else {
                current_len -= 1; // Previous element gets downgraded to a peak
            }

            max_len = max(max_len, current_len);
        }

        return max_len;
