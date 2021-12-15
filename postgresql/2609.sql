SELECT categories.name, sum(amount) "sum"
FROM products, categories
WHERE products.id_categories = categories.id
GROUP BY categories.name