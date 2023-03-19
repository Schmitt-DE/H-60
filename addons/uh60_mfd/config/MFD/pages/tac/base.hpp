#include "rings.hpp"

// left side
#define TAC_LINE_HEIGHT 0.04

COLORED_POLYGON(ORIENT_POLY,0.015,(BEZEL_Y1-0.02),0.08,0.08,common_black)
COLORED_POLYGON(SCALE_POLY,0.015,(BEZEL_Y2+0.05),0.07,0.08,common_black)
COLORED_POLYGON(NM_POLY,0.015,(BEZEL_Y3+0.04),0.07,0.04,common_black)
COLORED_POLYGON(ZOOM_POLY,0.015,(BEZEL_Y4+0.03),0.07,0.08,common_black)
COLORED_POLYGON(THRT_POLY,0.015,(BEZEL_Y6-0.02),0.06,0.08,common_black)

#define ARROW_DN(CNAME,X,Y) \
  class CNAME { \
    COLORED_POLYGON(background,X,Y,0.04*(3/4),0.04,common_black) \
    color[] = common_white; \
    class Outer_label_Bg { \
      type = "polygon"; \
      points[] ={ \
        { \
          {{X+0.02*(3/4)-0.01,Y+0.02-0.01},1}, \
          {{X+0.02*(3/4)-0.00,Y+0.02+0.01},1}, \
          {{X+0.02*(3/4)+0.01,Y+0.02-0.01},1}  \
        } \
      }; \
    }; \
  };

#define ARROW_UP(CNAME,X,Y) \
  class CNAME { \
    COLORED_POLYGON(background,X,Y,0.04*(3/4),0.04,common_black) \
    color[] = common_white; \
    class Outer_label_Bg { \
      type = "polygon"; \
      points[] ={ \
        { \
          {{X+0.02*(3/4)-0.01,Y+0.02+0.01},1}, \
          {{X+0.02*(3/4)-0.00,Y+0.02-0.01},1}, \
          {{X+0.02*(3/4)+0.01,Y+0.02+0.01},1}  \
        } \
      }; \
    }; \
  };

ARROW_UP(SCALE_UP,0.02,(BEZEL_Y2-0.01))
ARROW_DN(SCALE_DN,0.02,(BEZEL_Y3-0.01))

ARROW_UP(ZOOM_UP,0.02,(BEZEL_Y4-0.02))
ARROW_DN(ZOOM_DN,0.02,(BEZEL_Y5-0.02))

class left_textBlue {
  color[] = common_blue;
  TEXT_LEFT_SCALED(ORIENT,0.02,(BEZEL_Y1-0.02),"ORIENT",TAC_LINE_HEIGHT)
  TEXT_LEFT_SCALED(SCALE,0.02,(BEZEL_Y2+0.05),"SCALE",TAC_LINE_HEIGHT)
  TEXT_LEFT_SCALED(ZOOM,0.02,(BEZEL_Y4+0.03),"ZOOM",TAC_LINE_HEIGHT)
  TEXT_LEFT_SCALED(THRT,0.02,(BEZEL_Y6-0.02),"THRT",TAC_LINE_HEIGHT)
};
class left_textWhite {
  color[] = common_white;
  class cond_hdg {
    condition = COND_ISNUMPYLON(5,0);
    TEXT_LEFT_SCALED(NORTH,0.02,(BEZEL_Y1+0.02),"HDG",TAC_LINE_HEIGHT)
  };
  class cond_north {
    condition = COND_ISNUMPYLON(5,1);
    TEXT_LEFT_SCALED(NORTH,0.02,(BEZEL_Y1+0.02),"NORTH",TAC_LINE_HEIGHT)

  };
  TEXT_LEFT_SCALED(SCALE,0.02,(BEZEL_Y2+0.05+TAC_LINE_HEIGHT),"1:250K",TAC_LINE_HEIGHT)
  TEXT_LEFT_SCALED(NM,0.02+0.03,(BEZEL_Y3+0.04),"KM",TAC_LINE_HEIGHT)
  TEXT_LEFT_SCALED_SOURCE(NM_VAL,0.02,(BEZEL_Y3+0.04),TAC_LINE_HEIGHT,"user",40,KM_SCALE(0.9),1)
  TEXT_LEFT_SCALED_SOURCE(ZOOM,0.02,(BEZEL_Y4+0.03+TAC_LINE_HEIGHT),TAC_LINE_HEIGHT,"pylonammo",6,1,0)
  TEXT_LEFT_SCALED(ZOOM_LBL,0.02+0.04,(BEZEL_Y4+0.03+TAC_LINE_HEIGHT),"X",TAC_LINE_HEIGHT)
  TEXT_LEFT_SCALED(OFF,0.02,(BEZEL_Y6-0.02+TAC_LINE_HEIGHT),"OFF",TAC_LINE_HEIGHT)
};

// top side
class top {
  color[] = common_black;
  COLORED_POLYGON(SYM,(BEZEL_XT1-0.025),0.015,0.05,0.04,common_black)
  COLORED_POLYGON(HAT,(BEZEL_XT2-0.025),0.015,0.05,0.04,common_black)
  COLORED_POLYGON(TIV,(BEZEL_XT3-0.025),0.012,0.05,0.04,common_black)
  COLORED_POLYGON(CTR,(BEZEL_XT4-0.05),0.015,0.10,0.08,common_black)
  COLORED_POLYGON(SYM2,(BEZEL_XT1-0.04),0.015+0.04,0.08,0.04,common_black)
  COLORED_POLYGON(HAT2,(BEZEL_XT2-0.03),0.015+0.04,0.06,0.04,common_black)
  COLORED_POLYGON(TIV2,(BEZEL_XT3-0.05),0.012+0.04,0.10,0.04,common_black)

  class top_textBlue {
    color[] = common_blue;
    TEXT_MID_SCALED(SYM,0.00+(BEZEL_XT1),0.015,"SYM",TAC_LINE_HEIGHT)
    TEXT_MID_SCALED(HAT,0.00+(BEZEL_XT2),0.015,"HAT",TAC_LINE_HEIGHT)
    TEXT_MID_SCALED(TIV,0.00+(BEZEL_XT3),0.015,"TIV",TAC_LINE_HEIGHT)
    TEXT_MID_SCALED(CTR,0.00+(BEZEL_XT4),0.015,"MAP CTR",TAC_LINE_HEIGHT)
  };
  class top_textWhite {
    color[] = common_white;
    TEXT_MID_SCALED(SYM,0.00+(BEZEL_XT1),0.015+TAC_LINE_HEIGHT,"DECL",TAC_LINE_HEIGHT)
    TEXT_MID_SCALED(HAT,0.00+(BEZEL_XT2),0.015+TAC_LINE_HEIGHT,"OFF",TAC_LINE_HEIGHT)
    TEXT_MID_SCALED(TIV,0.00+(BEZEL_XT3),0.015+TAC_LINE_HEIGHT,"BARO ALT",TAC_LINE_HEIGHT)
    class centered {
      condition = COND_ISNUMPYLON(4,0);
      TEXT_MID_SCALED(CTR,0.00+(BEZEL_XT4),0.015+TAC_LINE_HEIGHT,"CTR",TAC_LINE_HEIGHT)
    };
    class decenter {
      condition = COND_ISNUMPYLON(4,1);
      TEXT_MID_SCALED(CTR,0.00+(BEZEL_XT4),0.015+TAC_LINE_HEIGHT,"DCTR",TAC_LINE_HEIGHT)
    };
  };
};
class noSubPage {
  condition = COND_SUBPAGE(MFD_PAGE_INDEX,MFD_PAGE_TAC);
  class right {
    condition = "pylonAmmo3 < 1";
    color[] = common_black;
    COLORED_POLYGON(CHART,0.985-0.09,(BEZEL_Y1-0.01),0.09,0.04,common_black)
    COLORED_POLYGON(OVERL,0.985-0.10,(BEZEL_Y2-0.01),0.10,0.04,common_black)
    COLORED_POLYGON(CONFI,0.985-0.09,(BEZEL_Y3-0.01),0.09,0.04,common_black)
    COLORED_POLYGON(POSNN,0.985-0.07,(BEZEL_Y4-0.01),0.07,0.04,common_black)
    COLORED_POLYGON(MAPDY,0.985-0.10,(BEZEL_Y5-0.03),0.10,0.08,common_black)
    COLORED_POLYGON(LEGND,0.985-0.08,(BEZEL_Y6-0.01),0.08,0.04,common_black)
    class blue {
      color[] = common_blue;
      TEXT_RIGHT_SCALED(MAPDY,0.97,(BEZEL_Y5-0.03),"MAP",TAC_LINE_HEIGHT)
    };
    class white {
      color[] = common_white;
      TEXT_RIGHT_SCALED(CHART,0.97,(BEZEL_Y1-0.01),"CHART>",TAC_LINE_HEIGHT)
      TEXT_RIGHT_SCALED(OVERL,0.97,(BEZEL_Y2-0.01),"OVERLAY>",TAC_LINE_HEIGHT)
      TEXT_RIGHT_SCALED(CONFI,0.97,(BEZEL_Y3-0.01),"CONFIG>",TAC_LINE_HEIGHT)
      TEXT_RIGHT_SCALED(POSNN,0.97,(BEZEL_Y4-0.01),"POSN>",TAC_LINE_HEIGHT)
      class condition_dynamic {
        condition = COND_ISNUMPYLON(7,0);
        TEXT_RIGHT_SCALED(MAPDY,0.97,(BEZEL_Y5-0.03+0.04),"DYNAMIC",TAC_LINE_HEIGHT)
      };
      class condition_static {
        condition = "pylonAmmo7 > 0";
        TEXT_RIGHT_SCALED(MAPDY,0.97,(BEZEL_Y5-0.03+0.04),"STATIC",TAC_LINE_HEIGHT)
      };
      TEXT_RIGHT_SCALED(LEGND,0.97,(BEZEL_Y6-0.01),"LEGEND",TAC_LINE_HEIGHT)
    };
  };

  #define VERT_TEXT_SPACING 0.035
  class caution {
    condition = "pylonAmmo3 > 0";
    color[] = common_black;
    COLORED_POLYGON(CNCL,(0.985-0.02),(BEZEL_Y3-0.07),0.02,(VERT_TEXT_SPACING*4),common_black)
    COLORED_POLYGON(PAGE,(0.985-0.02),(BEZEL_Y5+0.02),0.02,(VERT_TEXT_SPACING*4),common_black)
    class white {
      color[] = common_white;
      TEXT_LEFT_SCALED(L1,(0.985-0.02+0.005),(BEZEL_Y3-0.07),"C",TAC_LINE_HEIGHT)
      TEXT_LEFT_SCALED(L2,(0.985-0.02+0.005),(BEZEL_Y3-0.07+VERT_TEXT_SPACING*1),"N",TAC_LINE_HEIGHT)
      TEXT_LEFT_SCALED(L3,(0.985-0.02+0.005),(BEZEL_Y3-0.07+VERT_TEXT_SPACING*2),"C",TAC_LINE_HEIGHT)
      TEXT_LEFT_SCALED(L4,(0.985-0.02+0.005),(BEZEL_Y3-0.07+VERT_TEXT_SPACING*3),"L",TAC_LINE_HEIGHT)
      
      TEXT_LEFT_SCALED(L5,(0.985-0.02+0.005),(BEZEL_Y5+0.02),"P",TAC_LINE_HEIGHT)
      TEXT_LEFT_SCALED(L6,(0.985-0.02+0.005),(BEZEL_Y5+0.02+VERT_TEXT_SPACING*1),"A",TAC_LINE_HEIGHT)
      TEXT_LEFT_SCALED(L7,(0.985-0.02+0.005),(BEZEL_Y5+0.02+VERT_TEXT_SPACING*2),"G",TAC_LINE_HEIGHT)
      TEXT_LEFT_SCALED(L8,(0.985-0.02+0.005),(BEZEL_Y5+0.02+VERT_TEXT_SPACING*3),"E",TAC_LINE_HEIGHT)
      class border {
        type="line";
        width = 2;
        points[] ={
          {{(0.985-0.02),(BEZEL_Y3-0.07)},1},
          {{(0.985-0.00),(BEZEL_Y3-0.07)},1},
          {{(0.985-0.00),(BEZEL_Y3-0.07+(VERT_TEXT_SPACING*4))},1},
          {{(0.985-0.02),(BEZEL_Y3-0.07+(VERT_TEXT_SPACING*4))},1},
          {{(0.985-0.02),(BEZEL_Y3-0.07)},1}, {},
          
          {{(0.985-0.02),(BEZEL_Y5+0.02)},1},
          {{(0.985-0.00),(BEZEL_Y5+0.02)},1},
          {{(0.985-0.00),(BEZEL_Y5+0.02+(VERT_TEXT_SPACING*4))},1},
          {{(0.985-0.02),(BEZEL_Y5+0.02+(VERT_TEXT_SPACING*4))},1},
          {{(0.985-0.02),(BEZEL_Y5+0.02)},1}, {},
        };
      };
    };
    #include "..\cautions\overlay.hpp"
  };
};

class mapConfig {
  condition = COND_SUBPAGE(MFD_PAGE_INDEX,TAC_MODE_MAPCONF);
  color[] = common_black;
  COLORED_POLYGON(CHART,0.985-0.11,(BEZEL_Y1-0.01),0.11,0.04,common_black)
  COLORED_POLYGON(OVERL,0.985-0.07,(BEZEL_Y2-0.01),0.07,0.04,common_black)
  COLORED_POLYGON(CONFI,0.985-0.07,(BEZEL_Y3-0.01),0.07,0.04,common_black)
  COLORED_POLYGON(POSNN,0.985-0.08,(BEZEL_Y4-0.01),0.08,0.04,common_black)
  COLORED_POLYGON(MAPDY,0.985-0.07,(BEZEL_Y5-0.01),0.07,0.04,common_black)
  COLORED_POLYGON(LEGND,0.985-0.10,(BEZEL_Y6-0.01),0.10,0.04,common_black)
  class blue {
    color[] = common_blue;
    TEXT_RIGHT_SCALED(CHART,0.97,(BEZEL_Y1-0.01),"MAP MODE",TAC_LINE_HEIGHT)
  };
  class white {
    color[] = common_white;
    TEXT_RIGHT_SCALED(CHART,0.97,(BEZEL_Y2-0.01),"TOPO>",TAC_LINE_HEIGHT)
    TEXT_RIGHT_SCALED(OVERL,0.97,(BEZEL_Y3-0.01),"SAT>",TAC_LINE_HEIGHT)
    TEXT_RIGHT_SCALED(POSNN,0.97,(BEZEL_Y4-0.01),"CUST",TAC_LINE_HEIGHT)
    TEXT_RIGHT_SCALED(LEGND,0.97,(BEZEL_Y5-0.01),"OFF>",TAC_LINE_HEIGHT)
    TEXT_RIGHT_SCALED(RETRN,0.97,(BEZEL_Y6-0.01),"RETURN>",TAC_LINE_HEIGHT)
  };
};

#include "textboxes.hpp"
#include "misc.hpp"
#include "waypoints.hpp"
class BFT_COND {
  condition = COND_ISNUMPYLON(5,0);
    #include "bft.hpp"
};
#include "slewControls.hpp"

// class bottom {
//   COLORED_POLYGON(PB1,(BEZEL_XB1-0.02),0.995-TAC_LINE_HEIGHT,0.04,0.04,common_black)
//   COLORED_POLYGON(PB2,(BEZEL_XB2-0.015),0.995-TAC_LINE_HEIGHT,0.03,0.04,common_black)
//   COLORED_POLYGON(PB3,(BEZEL_XB3-0.03),0.995-TAC_LINE_HEIGHT,0.06,0.04,common_black)
//   COLORED_POLYGON(PB4,(BEZEL_XB4-0.025),0.995-TAC_LINE_HEIGHT,0.05,0.04,common_black)
//   COLORED_POLYGON(PB5,(BEZEL_XB5-0.02),0.995-TAC_LINE_HEIGHT,0.04,0.04,common_black)
//   COLORED_POLYGON(PB6,(BEZEL_XB6-0.03),0.995-TAC_LINE_HEIGHT,0.06,0.04,common_black)

//   class white {
//     color[] = common_white;
//     TEXT_LEFT_SCALED(B1,(BEZEL_XB1-0.02+0.005),BOTTOM_TEXT_Y,"PFD",TAC_LINE_HEIGHT)
//     TEXT_LEFT_SCALED(B2,(BEZEL_XB2-0.015+0.005),BOTTOM_TEXT_Y,"ND",TAC_LINE_HEIGHT)
//     TEXT_LEFT_SCALED(B3,(BEZEL_XB3-0.03+0.005),BOTTOM_TEXT_Y,"EICAS",TAC_LINE_HEIGHT)
    TEXT_LEFT_SCALED(B6,(BEZEL_XB4-0.025+0.005),BOTTOM_TEXT_Y,"FLIR",TAC_LINE_HEIGHT)
//     TEXT_LEFT_SCALED(B7,(BEZEL_XB5-0.02+0.005),BOTTOM_TEXT_Y,"TAC",TAC_LINE_HEIGHT)
//     TEXT_LEFT_SCALED(B8,(BEZEL_XB6-0.03+0.005),BOTTOM_TEXT_Y,"JVMF",TAC_LINE_HEIGHT)
//   };
// };