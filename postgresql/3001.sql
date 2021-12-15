SELECT name as type,
    case when type = 'A' then 20.0
         when type = 'B' then 70.0
         else 530.5
    end as price
FROM products order by products.type, products.id desc;