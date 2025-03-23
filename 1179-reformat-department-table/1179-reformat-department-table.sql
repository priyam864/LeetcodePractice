SELECT 
    id,
    MAX(CASE WHEN month = 'Jan' THEN revenue END) AS jan_revenue,
    MAX(CASE WHEN month = 'Feb' THEN revenue END) AS feb_revenue,
    MAX(CASE WHEN month = 'Mar' THEN revenue END) AS mar_revenue,
    MAX(CASE WHEN month = 'Apr' THEN revenue END) AS apr_revenue,
    MAX(CASE WHEN month = 'May' THEN revenue END) AS may_revenue,
    MAX(CASE WHEN month = 'Jun' THEN revenue END) AS jun_revenue,
    MAX(CASE WHEN month = 'Jul' THEN revenue END) AS jul_revenue,
    MAX(CASE WHEN month = 'Aug' THEN revenue END) AS aug_revenue,
    MAX(CASE WHEN month = 'Sep' THEN revenue END) AS sep_revenue,
    MAX(CASE WHEN month = 'Oct' THEN revenue END) AS oct_revenue,
    MAX(CASE WHEN month = 'Nov' THEN revenue END) AS nov_revenue,
    MAX(CASE WHEN month = 'Dec' THEN revenue END) AS dec_revenue
FROM department
GROUP BY id;
