SELECT life_registry.name, ROUND(life_registry.omega * 1.618,3) as "The N Factor"
FROM life_registry, dimensions
WHERE life_registry.dimensions_id = dimensions.id
AND dimensions.name IN ('C875','C774') 
AND life_registry.name LIKE 'Richard%'
ORDER BY "The N Factor" ASC;