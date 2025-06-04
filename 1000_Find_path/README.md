/* Find valid path in field surrpunded by obstacles.*/
           |-----------------------------------|                                   
           |                        o          |
           |   o                    o          |
 * ------->|---->--------->------->xo          |
           |                       o           |
           |  o                   o            |
           |    o                 o            |
           |   o                 o             |
           |   o                o              |
           |  o               o                |
           |  o                o               |
           |  o               o                |                                  
           |-----------------------------------|   

return boolean true/false if the host '*' can intercept the field enclosed by box without colliding with a target denoted by 'o'
