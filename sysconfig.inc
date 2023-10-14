#define NO_GROUP       0                ; hardware defined - do not change

#ifdef 1802MINI
  #define BRMK         bn2              ; branch on serial mark
  #define BRSP         b2               ; branch on serial space
  #define SEMK         seq              ; set serial mark
  #define SESP         req              ; set serial space
  #define EXP_PORT     1                ; group i/o expander port
  #define EXP_MEMORY                    ; enable expansion memory
  #define IDE_GROUP    0                ; ide interface group
  #define IDE_SELECT   2                ; ide interface address port
  #define IDE_DATA     3                ; ide interface data port
  #define RTC_GROUP    0                ; real time clock group
  #define RTC_PORT     5                ; real time clock port
  #define UART_GROUP   0                ; uart port group
  #define UART_DATA    6                ; uart data port
  #define UART_STATUS  7                ; uart status/command port
  #define SET_BAUD     19200            ; bit-bang serial fixed baud rate
  #define FREQ_KHZ     4000             ; default processor clock frequency
#endif

#ifdef SUPERELF
  #define BRMK         bn2              ; branch on serial mark
  #define BRSP         b2               ; branch on serial space
  #define SEMK         seq              ; set serial mark
  #define SESP         req              ; set serial space
  #define EXP_PORT     5                ; group i/o expander port
  #define EXP_MEMORY                    ; enable expansion memory
  #define IDE_GROUP    0                ; ide interface group
  #define IDE_SELECT   2                ; ide interface address port
  #define IDE_DATA     3                ; ide interface data port
  #define UART_GROUP   0                ; uart port group
  #define UART_DATA    6                ; uart data port
  #define UART_STATUS  7                ; uart status/command port
  #define RTC_GROUP    1                ; real time clock group
  #define RTC_PORT     3                ; real time clock port
  #define SET_BAUD     9600             ; bit-bang serial fixed baud rate
  #define FREQ_KHZ     1790             ; default processor clock frequency
#endif

#ifdef RC1802
  #define BRMK         bn3              ; branch on serial mark
  #define BRSP         b3               ; branch on serial space
  #define SEMK         seq              ; set serial mark
  #define SESP         req              ; set serial space
  #define EXP_PORT     1                ; group i/o expander port
  #define IDE_GROUP    0                ; ide interface group
  #define IDE_SELECT   2                ; ide interface address port
  #define IDE_DATA     3                ; ide interface data port
  #define UART_GROUP   1                ; uart port group
  #define UART_DATA    2                ; uart data port
  #define UART_STATUS  3                ; uart status/command port
  #define RTC_GROUP    2                ; real time clock group
  #define RTC_PORT     3                ; real time clock port
  #define SET_BAUD     9600             ; bit-bang serial fixed baud rate
  #define FREQ_KHZ     2000             ; default processor clock frequency
#endif

#ifdef TEST
  #define BRMK         bn2              ; branch on serial mark
  #define BRSP         b2               ; branch on serial space
  #define SEMK         seq              ; set serial mark
  #define SESP         req              ; set serial space
  #define EXP_PORT     5                ; group i/o expander port
  #define IDE_GROUP    1                ; ide interface group
  #define IDE_SELECT   2                ; ide interface address port
  #define IDE_DATA     3                ; ide interface data port
  #define UART_GROUP   4                ; uart port group
  #define UART_DATA    6                ; uart data port
  #define UART_STATUS  7                ; uart status/command port
  #define RTC_GROUP    2                ; real time clock group
  #define RTC_PORT     3                ; real time clock port
  #define FREQ_KHZ     4000             ; default processor clock frequency
#endif

#ifdef 1802MAX
  #define BRMK         bn2              ; branch on serial mark
  #define BRSP         b2               ; branch on serial space
  #define SEMK         req              ; set serial mark
  #define SESP         seq              ; set serial space
  #define EXP_PORT     5                ; group i/o expander port
  #define EXP_MEMORY                    ; enable expansion memory
  #define MICRO_SD
  #define SPI_GROUP    0                ; spi interface group
  #define SPI_CTL      2                ; spi interface control port
  #define SPI_DATA     3                ; spi interface data port
  #define RTC_GROUP    0                ; real time clock group
  #define RTC_PORT     1                ; real time clock port
  #define UART_GROUP   0                ; uart port group
  #define UART_DATA    6                ; uart data port
  #define UART_STATUS  7                ; uart status/command port
  #define FAST_UART
  #define HI_BAUD
  #define SET_BAUD     38400            ; bit-bang serial fixed baud rate
  #define FREQ_KHZ     4000             ; default processor clock frequency
#endif

#ifdef ELFII
  #define BRMK         bn2              ; branch on serial mark
  #define BRSP         b2               ; branch on serial space
  #define SEMK         req              ; set serial mark
  #define SESP         seq              ; set serial space
  #define EXP_PORT     1                ; group i/o expander port
  #define EXP_MEMORY                    ; enable expansion memory
  #define MICRO_SD
  #define SPI_GROUP    0                ; spi interface group
  #define SPI_CTL      2                ; spi interface control port
  #define SPI_DATA     3                ; spi interface data port
  #define RTC_GROUP    0                ; real time clock group
  #define RTC_PORT     5                ; real time clock port
  #define UART_GROUP   0                ; uart port group
  #define UART_DATA    6                ; uart data port
  #define UART_STATUS  7                ; uart status/command port
  #define FAST_UART
  #define HI_BAUD
  #define SET_BAUD     19200            ; bit-bang serial fixed baud rate
  #define FREQ_KHZ     1790             ; default processor clock frequency
#endif

#ifdef 1802MC
  #define BRMK         bn3              ; branch on serial mark
  #define BRSP         b3               ; branch on serial space
  #define SEMK         req              ; set serial mark
  #define SESP         seq              ; set serial space
  #define EXP_PORT     1                ; group i/o expander port
  #define IDE_GROUP    1                ; ide interface group
  #define IDE_SELECT   2                ; ide interface address port
  #define IDE_DATA     3                ; ide interface data port
  #define RTC_GROUP    0                ; real time clock group
  #define RTC_PORT     5                ; real time clock port
  #define UART_GROUP   0                ; uart port group
  #define UART_DATA    6                ; uart data port
  #define UART_STATUS  7                ; uart status/command port
  #define FAST_UART
  #define HI_BAUD
  #define SET_BAUD     19200            ; bit-bang serial fixed baud rate
  #define FREQ_KHZ     1790             ; default processor clock frequency
#endif
