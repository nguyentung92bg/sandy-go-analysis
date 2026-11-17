/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$PreArchivePoint
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__PreArchivePoint (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, bool archiveOnly, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$PreArchivePoint
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__PreArchivePoint
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, bool archiveOnly, const
   MethodInfo* method); */

ulong Dino_BusSand_App_Meta_ClimbTowerFeature__PreArchivePoint_2229d84
                (long param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68();
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_02329e2c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224(uVar2);
  }
  if (*(long *)(lVar5 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = (int)*(long *)(lVar5 + 0x18);
    if (iVar3 == 0) {
LAB_02329e30:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar2 = (ulong)*(uint *)(lVar5 + 0x20);
    if (((int)*(uint *)(lVar5 + 0x20) < param_2) && (0 < iVar3)) {
      lVar4 = 0;
      do {
        uVar1 = *(uint *)(lVar5 + 0x20 + lVar4 * 4);
        if (param_2 < (int)uVar1) {
          return uVar2;
        }
        if ((param_3 & 1) == 0) {
LAB_02329e08:
          uVar2 = (ulong)uVar1;
        }
        else {
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 == 0) goto LAB_02329e2c;
          if ((int)(uint)lVar4 < (int)*(uint *)(lVar6 + 0x18)) {
            if (*(uint *)(lVar6 + 0x18) <= (uint)lVar4) goto LAB_02329e30;
            if (*(int *)(lVar6 + lVar4 * 4 + 0x20) == 1) goto LAB_02329e08;
          }
        }
        lVar4 = lVar4 + 1;
      } while (iVar3 != (int)lVar4);
    }
  }
  return uVar2;
}

