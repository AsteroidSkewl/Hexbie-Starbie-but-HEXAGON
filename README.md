# Hexbie-Starbie-but-HEXAGON
This is my first project for Hack Club's Half Life!
The week's theme is PCB and I am making a hexagonal Starbie called Hexbie that will be my desk companion that monitors the air and environment, keeping it good for my health.
When I originally planned to build the Hexbie, I drew up what I wanted it to look like in a notebook, and then found components and parts to suit my needs for the project.
And here are the code elements I was using for detection:
![BasicCodeElements](Images/CodeElements.png)
I used EasyEDA to create my schematic and board, and then used JLCPCB to manufacture it. I had some issues during my first time drawing up my schematic which are higlighted in my journal entries. Below are the two versions of my schematic:
The first version:
![SchematicV1](Images/Schematic.png)
And here is the second, updated version:
![SchematicV2](Images/SchematicV2.png)

Now, for routing the board, I definitely improved on the second go because I had already gotten a feel for the software and how things work. The schematic was also not totally broken... Here is the first one:
![BoardV1](Images/BoardV1.png)
And here is the second, improved one:
![BoardV2](Images/BoardV2.png)

You can find my bill of materials in the file "BOM.csv".

For my code, I went through a few iterations to make it work better. An in depth version of the changes are in my journal entries. Here is an overview of the code that I am using:
There are two parts of the code that have their own enclosing blocks.
- there are the sensing blocks and system that determines how good the environment is. This system senses the environment and determines if each variable is considered to be good. Then, depending on how many factors are doing well, it will update the happiness score.
- The other system includes alternating screens that show the actual numbers that the sensors are measuring so that improvements can be made and the other screen has faces (With animations of course) that show the happiness score through their expressions.
I had to take two screenshots of the code because it is too big.
![TopHalfCode](Images/TopHalfCode.png)
![BottomHalfCode](Images/BottomHalfCode.png)

I had fun making this project.
Sorry about resubmitting before doing the stuff, I didn't know where to find edit requests... all I saw was one small thing on the project and thought it was enough. Thanks for the help!

Here is the BOM. You can find the actual file of it in this REPO.
Part,What it's for,Qty,Cost ($) Including tax and shipping,Vendor,Link
Duinotech Arduino Compatible Smoke Detector Module,Sensing air quality,1,6.67,Jaycar,https://www.jaycar.co.nz/duinotech-arduino-compatible-smoke-detector-module/p/XC4470?srsltid=AU7gw4XApYBSt22OMLkmhBeOZLSZcmsR5uia-R5SM1MjzAwqYErvQ6JP-wo
Duinotech Arduino Compatible Temperature Sensor Module,Sensing the temperature,1,4.99,Jaycar,https://www.jaycar.co.nz/duinotech-arduino-compatible-temperature-sensor-module/p/XC4494?srsltid=AU7gw4WWESx69AyvfrE-2CpfYx3C3KAVI_RKN2zDsalNp2kqcN7WLEymJPc
Arduino Compatible Microphone Sound Sensor Module,Detecting sound,1,3.31,Jaycar,https://www.jaycar.co.nz/arduino-compatible-microphone-sound-sensor-module/p/XC4438
Arduino Nano,Controlling the system,1,2.53,Aliexpress,https://www.aliexpress.com/item/1005006773519913.html?spm=a2g0o.productlist.main.1.37056f37p0iA9a&algo_pvid=b3c0de25-0390-4ba4-bcc2-2fefaa9a5d54&algo_exp_id=b3c0de25-0390-4ba4-bcc2-2fefaa9a5d54-0&pdp_ext_f=%7B%22order%22%3A%2211889%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21NZD%214.44%211.93%21%21%2116.36%217.10%21%402103128817913597537443999e1115%2112000038256018922%21sea%21NZ%218265845743%21ABX%211%210%21n_tag%3A-29910%3Bd%3A1f537960%3Bm03_new_user%3A-29895%3BpisId%3A5000000218631898&curPageLogUid=U75WdUVaAm1O&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006773519913%7C_p_origin_prod%3A
OLED Screen,Displaying info/moods,1,2.53,Aliexpress,https://www.aliexpress.com/item/1005006085392157.html?spm=a2g0o.productlist.main.20.47e42698DiPrzB&aem_p4p_detail=2026100701003013994751393089430000918119&algo_pvid=c67b5ced-e535-4e65-9967-866d3a236a07&algo_exp_id=c67b5ced-e535-4e65-9967-866d3a236a07-19&pdp_ext_f=%7B%22order%22%3A%221525%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21NZD%215.89%211.93%21%21%2121.72%217.11%21%402101de2517913600306218056e13a6%2112000035661592563%21sea%21NZ%218265845743%21ABX%211%210%21n_tag%3A-29910%3Bd%3A1f537960%3Bm03_new_user%3A-29895%3BpisId%3A5000000218631898&curPageLogUid=NUzK7dF97EXA&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006085392157%7C_p_origin_prod%3A&search_p4p_id=2026100701003013994751393089430000918119_5
PCB,Containing the parts,1,8.91,JLCPCB,https://jlcpcb.com/
Total,-,-,28.94,-,
