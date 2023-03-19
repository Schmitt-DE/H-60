borderLeft=0;
borderRight=0;
borderTop=0;
borderBottom=0;
color[]=common_white;
enableParallax=0;
font="PuristaBold";

class material {
  ambient[] = {1, 1, 1, 1};
  diffuse[] = {0.5, 0.5, 0.5, 1};
  emissive[] = {100, 100, 100, 1};
};

class Bones {
};


class Draw {
  #define EICAS_LINE_SPACING 0.035
  #define EICAS_LINE_HEIGHT 0.04
  #define EICAS_LINE_EXPAND 0.003
  #define EICAS_LINE_TAPE(CNAME,X,Y) \
    class CNAME { \
      color[] = common_yellow; \
      class Polygon { \
        type        = "polygon"; \
        points[] ={ \
          { \
            {{X-0.01,   Y+0.01-EICAS_LINE_EXPAND},1}, \
            {{X+0.275, Y+0.01-EICAS_LINE_EXPAND},1}, \
            {{X+0.275, Y+EICAS_LINE_SPACING+EICAS_LINE_EXPAND},1}, \
            {{X-0.01,   Y+EICAS_LINE_SPACING+EICAS_LINE_EXPAND},1} \
          } \
        }; \
      }; \
    };
  
  #define EICAS_LINE(CNAME,X,Y,PYLON,TEXT) \
    class CNAME { \
      class inverted { \
        condition = QUOTE(PYLON > 1); \
        class yellow { \
          color[] = common_yellow; \
          EICAS_LINE_TAPE(TAPE,X,Y) \
        }; \
        class black { \
          color[] = common_black; \
          TEXT_LEFT_SCALED(Left_0_0,X,Y,TEXT,EICAS_LINE_HEIGHT) \
        }; \
      }; \
    };

  
  #define BOLD_LINE_EXPAND 0.003
  #define BOLD_LINE_TAPE(CNAME,X,Y,W,H,COLOR) \
    class CNAME { \
      color[] = COLOR; \
      class Polygon { \
        type        = "polygon"; \
        points[] ={ \
          { \
            {{X,   Y+0.01-BOLD_LINE_EXPAND},1}, \
            {{X+W, Y+0.01-BOLD_LINE_EXPAND},1}, \
            {{X+W, Y+H+BOLD_LINE_EXPAND},1}, \
            {{X,   Y+H+BOLD_LINE_EXPAND},1} \
          } \
        }; \
      }; \
    };

  #define INVERTED_VIDEO_LINE(CNAME,X,Y,W,H,TEXT,COLOR) \
    class CNAME { \
      color[] = COLOR; \
      BOLD_LINE_TAPE(TAPE,X,Y,W,H-0.005,COLOR) \
      class black { \
        color[] = common_black; \
        TEXT_LEFT_SCALED(Left_0_0,X+0.01,Y,TEXT,H) \
      }; \
    };

  class eicas {
    condition = COND_ISNUMBER(MFD_PAGE_INDEX,MFD_PAGE_EICAS);
    // EICAS_LINE_TEXT_BOLD(Left_0_0,0.05,0.02+(EICAS_LINE_SPACING*0),pylonAmmo16,"gen 1 fail")
    // EICAS_LINE_TEXT_BOLD(Left_0_1,0.05,0.02+(EICAS_LINE_SPACING*1),pylonAmmo17,"hyd pump 1 fail")
    // EICAS_LINE_TEXT_BOLD(Left_0_2,0.05,0.02+(EICAS_LINE_SPACING*2),pylonAmmo18,"")
    // EICAS_LINE_TEXT_BOLD(Left_1_0,0.05,0.45+(EICAS_LINE_SPACING*0),pylonAmmo19,"chip eng 1")
    // EICAS_LINE_TEXT_BOLD(Left_1_1,0.05,0.45+(EICAS_LINE_SPACING*1),pylonAmmo20,"chip main mdl sump")
    // EICAS_LINE_TEXT_BOLD(Left_1_2,0.05,0.45+(EICAS_LINE_SPACING*2),pylonAmmo21,"main xmsn pres")
    // EICAS_LINE_TEXT_BOLD(Left_1_3,0.05,0.45+(EICAS_LINE_SPACING*3),pylonAmmo22,"hull integrity crit")
    // EICAS_LINE_TEXT_BOLD(Left_1_4,0.05,0.45+(EICAS_LINE_SPACING*4),pylonAmmo23,"left stn hang")
    // EICAS_LINE_TEXT_BOLD(Left_1_5,0.05,0.45+(EICAS_LINE_SPACING*5),pylonAmmo24,"eng 1 starter on")
    // EICAS_LINE_TEXT_BOLD(Right_0_0,0.69,0.02+(EICAS_LINE_SPACING*0),pylonAmmo25,"gen 2 fail")
    // EICAS_LINE_TEXT_BOLD(Right_0_1,0.69,0.02+(EICAS_LINE_SPACING*1),pylonAmmo26,"hyd pump 2")
    // EICAS_LINE_TEXT_BOLD(Right_0_2,0.69,0.02+(EICAS_LINE_SPACING*2),pylonAmmo27,"")
    // EICAS_LINE_TEXT_BOLD(Right_1_0,0.69,0.45+(EICAS_LINE_SPACING*0),pylonAmmo28,"chip eng 2")
    // EICAS_LINE_TEXT_BOLD(Right_1_1,0.69,0.45+(EICAS_LINE_SPACING*1),pylonAmmo29,"t/r servo 1 fail")
    // EICAS_LINE_TEXT_BOLD(Right_1_2,0.69,0.45+(EICAS_LINE_SPACING*2),pylonAmmo30,"t/r quad fail")
    // EICAS_LINE_TEXT_BOLD(Right_1_3,0.69,0.45+(EICAS_LINE_SPACING*3),pylonAmmo31,"")
    // EICAS_LINE_TEXT_BOLD(Right_1_4,0.69,0.45+(EICAS_LINE_SPACING*4),pylonAmmo32,"right stn hang")
    // EICAS_LINE_TEXT_BOLD(Right_1_5,0.69,0.45+(EICAS_LINE_SPACING*5),pylonAmmo33,"eng 2 starter on")
    // EICAS_LINE_TEXT_BOLD(Right_2_0,0.69,0.70+(EICAS_LINE_SPACING*0),pylonAmmo34,"stbyinst not armd")
    // EICAS_LINE_TEXT_BOLD(Right_2_1,0.69,0.70+(EICAS_LINE_SPACING*1),pylonAmmo35,"")
    // EICAS_LINE_TEXT_BOLD(Right_2_2,0.69,0.70+(EICAS_LINE_SPACING*2),pylonAmmo36,"cmws fail")
    // EICAS_LINE_TEXT_BOLD(Right_2_3,0.69,0.70+(EICAS_LINE_SPACING*3),pylonAmmo37,"flir fail")
    // EICAS_LINE_TEXT_BOLD(Right_2_4,0.69,0.70+(EICAS_LINE_SPACING*4),pylonAmmo38,"mfd bus err")
    // EICAS_LINE_TEXT_BOLD(Right_2_5,0.69,0.70+(EICAS_LINE_SPACING*5),pylonAmmo39,"")

    EICAS_LINE(Left_0_0,0.05,0.02+(EICAS_LINE_SPACING*0),pylonAmmo16,"GEN 1 FAIL")
    EICAS_LINE(Left_0_1,0.05,0.02+(EICAS_LINE_SPACING*1),pylonAmmo17,"HYD PUMP 1 FAIL")
    EICAS_LINE(Left_0_2,0.05,0.02+(EICAS_LINE_SPACING*2),pylonAmmo18,"")
    EICAS_LINE(Left_1_0,0.05,0.45+(EICAS_LINE_SPACING*0),pylonAmmo19,"CHIP ENG 1")
    EICAS_LINE(Left_1_1,0.05,0.45+(EICAS_LINE_SPACING*1),pylonAmmo20,"CHIP MAIN MDL SUMP")
    EICAS_LINE(Left_1_2,0.05,0.45+(EICAS_LINE_SPACING*2),pylonAmmo21,"MAIN XMSN PRES")
    EICAS_LINE(Left_1_3,0.05,0.45+(EICAS_LINE_SPACING*3),pylonAmmo22,"HULL INTEGRITY CRIT")
    EICAS_LINE(Left_1_4,0.05,0.45+(EICAS_LINE_SPACING*4),pylonAmmo23,"LEFT STN HANG")
    EICAS_LINE(Left_1_5,0.05,0.45+(EICAS_LINE_SPACING*5),pylonAmmo24,"ENG 1 STARTER ON")
    EICAS_LINE(Right_0_0,0.69,0.02+(EICAS_LINE_SPACING*0),pylonAmmo25,"GEN 2 FAIL")
    EICAS_LINE(Right_0_1,0.69,0.02+(EICAS_LINE_SPACING*1),pylonAmmo26,"HYD PUMP 2")
    EICAS_LINE(Right_0_2,0.69,0.02+(EICAS_LINE_SPACING*2),pylonAmmo27,"")
    EICAS_LINE(Right_1_0,0.69,0.45+(EICAS_LINE_SPACING*0),pylonAmmo28,"CHIP ENG 2")
    EICAS_LINE(Right_1_1,0.69,0.45+(EICAS_LINE_SPACING*1),pylonAmmo29,"T/R SERVO 1 FAIL")
    EICAS_LINE(Right_1_2,0.69,0.45+(EICAS_LINE_SPACING*2),pylonAmmo30,"T/R QUAD FAIL")
    EICAS_LINE(Right_1_3,0.69,0.45+(EICAS_LINE_SPACING*3),pylonAmmo31,"APU FAIL")
    EICAS_LINE(Right_1_4,0.69,0.45+(EICAS_LINE_SPACING*4),pylonAmmo32,"RIGHT STN HANG")
    EICAS_LINE(Right_1_5,0.69,0.45+(EICAS_LINE_SPACING*5),pylonAmmo33,"ENG 2 STARTER ON")
    EICAS_LINE(Right_2_0,0.69,0.70+(EICAS_LINE_SPACING*0),pylonAmmo34,"STBY INST NOT ARMD")
    EICAS_LINE(Right_2_1,0.69,0.70+(EICAS_LINE_SPACING*1),pylonAmmo35,"")
    EICAS_LINE(Right_2_2,0.69,0.70+(EICAS_LINE_SPACING*2),pylonAmmo36,"CMWS FAIL")
    EICAS_LINE(Right_2_3,0.69,0.70+(EICAS_LINE_SPACING*3),pylonAmmo37,"FLIR FAIL")
    EICAS_LINE(Right_2_4,0.69,0.70+(EICAS_LINE_SPACING*4),pylonAmmo38,"MFD BUS ERR")
    EICAS_LINE(Right_2_5,0.69,0.70+(EICAS_LINE_SPACING*5),pylonAmmo39,"")
    // class texts {
    //   color[] = common_white;
    //   TEXT_LEFT_SCALED(Left_0_0,0.05,0.02+(EICAS_LINE_SPACING*0),"GEN 1 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_0_1,0.05,0.02+(EICAS_LINE_SPACING*1),"HYD PUMP 1 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_0_2,0.05,0.02+(EICAS_LINE_SPACING*2),"",EICAS_LINE_HEIGHT)

    //   TEXT_LEFT_SCALED(Left_1_0,0.05,0.45+(EICAS_LINE_SPACING*0),"CHIP ENG 1",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_1,0.05,0.45+(EICAS_LINE_SPACING*1),"CHIP MAIN MDL SUMP",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_2,0.05,0.45+(EICAS_LINE_SPACING*2),"MAIN XMSN PRES",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_3,0.05,0.45+(EICAS_LINE_SPACING*3),"HULL INTEGRITY CRIT",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_4,0.05,0.45+(EICAS_LINE_SPACING*4),"BATT LOW",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_5,0.05,0.45+(EICAS_LINE_SPACING*5),"ENG 1 STARTER ON",EICAS_LINE_HEIGHT)
      
    //   TEXT_LEFT_SCALED(Right_0_0,0.69,0.02+(EICAS_LINE_SPACING*0),"GEN 2 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_0_1,0.69,0.02+(EICAS_LINE_SPACING*1),"HYD PUMP 2 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_0_2,0.69,0.02+(EICAS_LINE_SPACING*2),"EGI FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_0,0.69,0.45+(EICAS_LINE_SPACING*0),"CHIP ENG 2",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_1,0.69,0.45+(EICAS_LINE_SPACING*1),"T/R SERVO 1 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_2,0.69,0.45+(EICAS_LINE_SPACING*2),"T/R QUAD FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_3,0.69,0.45+(EICAS_LINE_SPACING*3),"APU FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_4,0.69,0.45+(EICAS_LINE_SPACING*4),"STAB FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_5,0.69,0.45+(EICAS_LINE_SPACING*5),"ENG 2 STARTER ON",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_0,0.69,0.7+(EICAS_LINE_SPACING*0),"STBY INST NOT ARMD",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_1,0.69,0.7+(EICAS_LINE_SPACING*1),"STAB FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_2,0.69,0.7+(EICAS_LINE_SPACING*2),"CMWS FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_3,0.69,0.7+(EICAS_LINE_SPACING*3),"",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_4,0.69,0.7+(EICAS_LINE_SPACING*4),"",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_5,0.69,0.7+(EICAS_LINE_SPACING*5),"",EICAS_LINE_HEIGHT)
    // }; // texts
    // class texts_black {
    //   color[] = common_black;
    //   TEXT_LEFT_SCALED(Left_0_0,0.05,0.02+(EICAS_LINE_SPACING*0),"GEN 1 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_0_1,0.05,0.02+(EICAS_LINE_SPACING*1),"HYD PUMP 1 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_0_2,0.05,0.02+(EICAS_LINE_SPACING*2),"",EICAS_LINE_HEIGHT)

    //   TEXT_LEFT_SCALED(Left_1_0,0.05,0.45+(EICAS_LINE_SPACING*0),"CHIP ENG 1",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_1,0.05,0.45+(EICAS_LINE_SPACING*1),"CHIP MAIN MDL SUMP",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_2,0.05,0.45+(EICAS_LINE_SPACING*2),"MAIN XMSN PRES",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_3,0.05,0.45+(EICAS_LINE_SPACING*3),"HULL INTEGRITY CRIT",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_4,0.05,0.45+(EICAS_LINE_SPACING*4),"BATT LOW",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Left_1_5,0.05,0.45+(EICAS_LINE_SPACING*5),"ENG 1 STARTER ON",EICAS_LINE_HEIGHT)
      
    //   TEXT_LEFT_SCALED(Right_0_0,0.69,0.02+(EICAS_LINE_SPACING*0),"GEN 2 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_0_1,0.69,0.02+(EICAS_LINE_SPACING*1),"HYD PUMP 2 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_0_2,0.69,0.02+(EICAS_LINE_SPACING*2),"EGI FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_0,0.69,0.45+(EICAS_LINE_SPACING*0),"CHIP ENG 2",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_1,0.69,0.45+(EICAS_LINE_SPACING*1),"T/R SERVO 1 FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_2,0.69,0.45+(EICAS_LINE_SPACING*2),"T/R QUAD FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_3,0.69,0.45+(EICAS_LINE_SPACING*3),"APU FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_4,0.69,0.45+(EICAS_LINE_SPACING*4),"STAB FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_1_5,0.69,0.45+(EICAS_LINE_SPACING*5),"ENG 2 STARTER ON",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_0,0.69,0.7+(EICAS_LINE_SPACING*0),"STBY INST NOT ARMD",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_1,0.69,0.7+(EICAS_LINE_SPACING*1),"STAB FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_2,0.69,0.7+(EICAS_LINE_SPACING*2),"CMWS FAIL",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_3,0.69,0.7+(EICAS_LINE_SPACING*3),"",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_4,0.69,0.7+(EICAS_LINE_SPACING*4),"",EICAS_LINE_HEIGHT)
    //   TEXT_LEFT_SCALED(Right_2_5,0.69,0.7+(EICAS_LINE_SPACING*5),"",EICAS_LINE_HEIGHT)
    // }; // texts
  }; // eicas
  class tac {
    condition = COND_ISNUMBER(MFD_PAGE_INDEX,MFD_PAGE_TAC);
    class mainpage {
      condition = COND_SUBPAGE(MFD_PAGE_INDEX,MFD_PAGE_TAC);
      #include "cautions\bold.hpp"
    };
    #include "tac\bold.hpp"
  };
  class nd {
    condition = COND_ISNUMBER(MFD_PAGE_INDEX,MFD_PAGE_ND);
    #include "cautions\bold.hpp"
  };
};