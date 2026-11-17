/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__FirstScreen|12
bool Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__FirstScreen_12 (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__FirstScreen|12
   bool Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__FirstScreen_12
   (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__FirstScreen_12_216b20c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x39) == '\0') {
      if (*(char *)(lVar2 + 0x38) == '\0') {
        bVar1 = false;
      }
      else {
        if (*(long *)(lVar2 + 0x20) == 0) goto LAB_0226b254;
        bVar1 = *(int *)(*(long *)(lVar2 + 0x20) + 0x20) != 0;
      }
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
LAB_0226b254:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

