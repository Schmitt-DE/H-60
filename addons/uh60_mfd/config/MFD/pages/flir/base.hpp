COLORED_POLYGON(TopEdge,0,0,1,0.05,common_black)
COLORED_POLYGON(leftEdge,0,0,(0.05*3/4),1,common_black)
COLORED_POLYGON(bottomEdge,0,1,1,-0.05,common_black)
COLORED_POLYGON(rightEdge,1,0,(-0.05*3/4),1,common_black)
class flirPage {

  class common {
    condition = COND_NOT_SUBPAGE(MFD_PAGE_INDEX,FLIR_MODE_STOWED);
    #include "damage.hpp"
    #include "common.hpp"
  };

  #ifdef HAS_ATTACK_PAGE
    class attack_page {
      condition=COND_SUBPAGE(MFD_PAGE_INDEX,FLIR_MODE_ATTACK);
      BOXEDTEXT(WPN_SEL1,BEZEL_XT1,0.07-0.02,0.1,0.04,"DCLT")
      BOXEDTEXT(WPN_SEL2,BEZEL_XT1,0.07+0.02,0.1,0.04,"PAGE")
      
      BOXEDTEXT(LSR_SEL1,BEZEL_XT6,0.07-0.02,0.1,0.04,"LSR")
      BOXEDTEXT(LSR_SEL2,BEZEL_XT6,0.07+0.02,0.1,0.04,"MENU")
      #include "weapons.hpp"
      #include "hellfire.hpp"
      #include "laserinfo.hpp"
      #include "headingElevationTape.hpp"

      
      BOXEDTEXT(WPNCTRLL,0.93,(BEZEL_Y6-0.02),0.07,0.04,"WPN")
      BOXEDTEXT(WPNCTRLV,0.93,(BEZEL_Y6+0.02),0.07,0.04,"CTRL")
    };

    class weapon_assign {
      condition=COND_SUBPAGE(MFD_PAGE_INDEX,FLIR_MODE_WPN_ASSIGN);
      #include "weapons.hpp"
      BOXEDTEXT(RETURN,0.93,(BEZEL_Y6),0.09,0.04,"RETURN")
      BOXEDTEXT(ASSIGN,0.5,(0.4),0.3,0.04,"WPN STN CONTROL ASSIGN")
      #include "weaponAssign.hpp"
    };
  #endif

  class homepage_only {
    condition=COND_SUBPAGE(MFD_PAGE_INDEX,MFD_PAGE_FLIR);
    BOXEDTEXT(WPN_SEL1,BEZEL_XT1,0.07-0.02,0.1,0.04,"WPNS")
    BOXEDTEXT(WPN_SEL2,BEZEL_XT1,0.07+0.02,0.1,0.04,"MENU")
    
    BOXEDTEXT(LSR_SEL1,BEZEL_XT6,0.07-0.02,0.1,0.04,"LSR")
    BOXEDTEXT(LSR_SEL2,BEZEL_XT6,0.07+0.02,0.1,0.04,"MENU")
    
    BOXEDTEXT(SLEW,0.93,BEZEL_Y5-0.02,0.1,0.04,"SLEW")
    BOXEDTEXT(WAYPT,0.93,BEZEL_Y5+0.02,0.1,0.04,"WAYPT")
    
    BOXEDTEXT(CREATE,0.93,BEZEL_Y6-0.02,0.1,0.04,"CREATE")
    BOXEDTEXT(WAYPT2,0.93,BEZEL_Y6+0.02,0.1,0.04,"WAYPT")
    #define BOTTOM_TEXT_Y 0.96

    #include "laserinfo.hpp"
    #include "headingElevationTape.hpp"

  };
  class laser_page {
    condition=COND_SUBPAGE(MFD_PAGE_INDEX,FLIR_MODE_LASER);
    BOXEDTEXT(WPN_SEL1,BEZEL_XT1,0.07-0.02,0.1,0.04,"WPNS")
    BOXEDTEXT(WPN_SEL2,BEZEL_XT1,0.07+0.02,0.1,0.04,"MENU")
    
    BOXEDTEXT(LSR_SEL1,BEZEL_XT6,0.07-0.02,0.1,0.04,"DCLT")
    BOXEDTEXT(LSR_SEL2,BEZEL_XT6,0.07+0.02,0.1,0.04,"PAGE")
    #include "lasermenu.hpp"
    #include "headingElevationTape.hpp"
  };
  class stowed {
    condition=COND_SUBPAGE(MFD_PAGE_INDEX,FLIR_MODE_STOWED);
    #include "stowed.hpp"
  };
  class bottom {
    COLORED_POLYGON(PB1,(BEZEL_XB1-0.02),0.995-TAC_LINE_HEIGHT,0.04,0.04,common_black)
    COLORED_POLYGON(PB2,(BEZEL_XB2-0.015),0.995-TAC_LINE_HEIGHT,0.03,0.04,common_black)
    COLORED_POLYGON(PB3,(BEZEL_XB3-0.03),0.995-TAC_LINE_HEIGHT,0.06,0.04,common_black)
    COLORED_POLYGON(PB4,(BEZEL_XB4-0.025),0.995-TAC_LINE_HEIGHT,0.05,0.04,common_black)
    COLORED_POLYGON(PB5,(BEZEL_XB5-0.02),0.995-TAC_LINE_HEIGHT,0.04,0.04,common_black)
    COLORED_POLYGON(PB6,(BEZEL_XB6-0.03),0.995-TAC_LINE_HEIGHT,0.06,0.04,common_black)

    class white {
      color[] = common_white;
      // TEXT_LEFT_SCALED(B1,(BEZEL_XB1-0.02+0.005),BOTTOM_TEXT_Y,"PFD",TAC_LINE_HEIGHT)
      // TEXT_LEFT_SCALED(B2,(BEZEL_XB2-0.015+0.005),BOTTOM_TEXT_Y,"ND",TAC_LINE_HEIGHT)
      // TEXT_LEFT_SCALED(B3,(BEZEL_XB3-0.03+0.005),BOTTOM_TEXT_Y,"EICAS",TAC_LINE_HEIGHT)
      TEXT_LEFT_SCALED(B6,(BEZEL_XB4-0.025+0.005),BOTTOM_TEXT_Y,"FLIR",TAC_LINE_HEIGHT)
      // TEXT_LEFT_SCALED(B7,(BEZEL_XB5-0.02+0.005),BOTTOM_TEXT_Y,"TAC",TAC_LINE_HEIGHT)
      // TEXT_LEFT_SCALED(B8,(BEZEL_XB6-0.03+0.005),BOTTOM_TEXT_Y,"JVMF",TAC_LINE_HEIGHT)
    };
  };
};