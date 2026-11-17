/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$ComeHome
float Dino_BusSand_App_UI_HomeStage__ComeHome (Dino_BusSand_App_UI_HomeStage_o* __this, UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$ComeHome
   float Dino_BusSand_App_UI_HomeStage__ComeHome (Dino_BusSand_App_UI_HomeStage_o* __this,
   UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_HomeStage__ComeHome_22ef820
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_5 + 0xb0) = 0;
  if (*(long *)(param_5 + 0x78) != 0) {
    Dino_BusSand_App_UI_HomeBus__Heap_22e1738
              (_UNK_00e1fe38,param_1,param_2,param_3,param_4,*(long *)(param_5 + 0x78),0);
    uVar1 = _UNK_00e2038c;
    if (*(long *)(param_5 + 0x78) != 0) {
      Dino_BusSand_App_UI_HomeBus__Arrive_22e0684
                (0xc1b00000,_UNK_00e2038c,0,*(long *)(param_5 + 0x78),0);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

