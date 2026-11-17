/* IL2CPP: Dino.BusSand.App.UI.HomeBus.<>c__DisplayClass98_0$$<Act>b__4
void Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0___Act_b__4 (Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus.<>c__DisplayClass98_0$$<Act>b__4
   void Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0___Act_b__4
   (Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0___Act_b__4_22e5110(long param_1)

{
  long lVar1;
  
  if ((bRam0000000004f9c420 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04cb6890);
    bRam0000000004f9c420 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_023e51a8;
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    System_Nullable_Vector3___get_Value_2bd0e68
              ((char *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cb6890);
    if (lVar1 == 0) goto LAB_023e51a8;
    Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar1);
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 100) = 0;
    *(undefined1 *)(lVar1 + 0x68) = 0;
    return;
  }
LAB_023e51a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

