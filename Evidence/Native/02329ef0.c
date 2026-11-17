/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$WinPointIndex
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$WinPointIndex
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex_2229ef0(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68();
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(lVar4 + 0x18) != 0) {
    iVar5 = (int)*(long *)(lVar4 + 0x18);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (*(int *)(lVar4 + 0x20) <= param_2) {
      uVar3 = iVar5 - 1;
      if (*(int *)(lVar4 + (long)(int)uVar3 * 4 + 0x20) <= param_2) {
        return (ulong)uVar3;
      }
      if (0 < iVar5) {
        uVar6 = 0;
        do {
          lVar1 = lVar4 + uVar6 * 4;
          iVar2 = *(int *)(lVar1 + 0x20);
          if ((iVar2 == param_2) ||
             ((((int)uVar6 < (int)uVar3 && (iVar2 < param_2)) && (param_2 < *(int *)(lVar1 + 0x24)))
             )) {
            return uVar6 & 0xffffffff;
          }
          uVar6 = uVar6 + 1;
        } while (iVar5 != (int)uVar6);
      }
    }
  }
  return 0xffffffff;
}

