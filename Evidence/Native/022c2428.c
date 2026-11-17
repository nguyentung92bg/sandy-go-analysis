/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$Place
void Dino_BusSand_App_UI_StreakEventPanel__Place (UnityEngine_Component_o* c, float y, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$Place
   void Dino_BusSand_App_UI_StreakEventPanel__Place (UnityEngine_Component_o* c, float y, float x,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakEventPanel__Place_21c2428
               (float param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uStack_18;
  float fStack_14;
  
  if ((bRam0000000004f9bae1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9bae1 = 1;
  }
  if ((param_3 == 0) ||
     (plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_3,0),
     plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*plVar1 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar1);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar1,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar1,0);
  fStack_14 = -param_1;
  uStack_18 = param_2;
  if ((bRam0000000004fa8a88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a88 = 1;
  }
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[2];
    if (lVar2 != 0) {
      if (pcRam0000000004fa8ad0 == (code *)0x0) {
        pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
      }
      (*pcRam0000000004fa8ad0)(lVar2,&uStack_18);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

