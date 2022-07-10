import { restaurants, Restaurant } from "./restaurants";
import { orders, Order, PriceBracket } from "./orders";

/// Add your getMaxPrice() function below:
/**
 * Determines maximum price based on pricebracket
 * 
 * @max : PriceBracket given
 * @returns : maximum price
 */ 
function getMaxPrice(max: PriceBracket): number{
  switch (max) {
    case PriceBracket.Low:
      return 10.0;
    case PriceBracket.Medium:
      return 20.0;
    case PriceBracket.High:
      return 30.0;
    default:
     return 0;
  }
}

/// Add your getOrders() function below:
/**
 * Filters orders per restaurant based on price
 * 
 * @price : PriceBracket given
 * @orders : array of order per reastaurant
 */ 
function getOrders(price: PriceBracket, orders: Order[][]){
  let filteredOrders: Order[][] = [];
  orders.forEach((res) => {
    const filteredForRestaurant = res.filter(order => order.price <= getMaxPrice(price));
    filteredOrders.push(filteredForRestaurant);
  });
  return filteredOrders;
}

/// Add your printOrders() function below:
/**
 * Print elligible dishes per restaurant 
 * in a readable format
 * 
 * @restaurant: array of restaurants
 * @orders: list of elligible courses per restaurant based on index
 */
function printOrders(restaurants: Restaurant[], orders: Order[][]){
  restaurants.forEach((restaurant, index) => {
    if(orders[index].length != 0){
      console.log(restaurant.name);
      orders[index].forEach(order => {
        console.log(`- ${order.name}: $${order.price}`);
      })
    }
  })
}

/// Main
const elligibleOrders = getOrders(PriceBracket.Low, orders);
printOrders(restaurants, elligibleOrders);
