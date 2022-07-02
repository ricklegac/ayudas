select dim_sucursal.ciudad, dim_fecha.anho, dim_fecha.trimestre, COUNT() as cantidad
from cliente 
join ventas on dim_cliente.cliente_sk=fact_ventas.cliente_sk
join dim_fecha on ventas_fecha=dim_fecha.fecha
join dim_sucursal on ventas.sucursal_sk=dim_sucursal.sucursal_sk
where dim_fecha.anho=2021
group by dim_sucursal.ciudad, dim_fecha.trimestre;