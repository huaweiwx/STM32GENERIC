
const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2}, 
    { USART2, GPIOA, GPIO_PIN_15 , GPIO_AF3_USART2}, 
    { USART2, GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_5  , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_4  , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3}, 
}; 
