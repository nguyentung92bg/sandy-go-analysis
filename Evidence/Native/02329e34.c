/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$NextWinPoint
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__NextWinPoint (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$NextWinPoint
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__NextWinPoint
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method); */

int Dino_BusSand_App_Meta_ClimbTowerFeature__NextWinPoint_2229e34(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000004f9be23 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be23 = 1;
  }
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
  if (param_2 < 0) {
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (lVar3 == 0) goto LAB_02329ee8;
    param_2 = *(int *)(lVar3 + 0x10);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar3 + 0x18);
    if (uVar4 != 0) {
      if ((int)uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      iVar1 = *(int *)(lVar3 + ((long)((uVar4 << 0x20) + -0x100000000) >> 0x1e) + 0x20);
      if (iVar1 <= param_2) {
        return iVar1;
      }
      if (0 < (int)uVar4) {
        piVar5 = (int *)(lVar3 + 0x20);
        do {
          if (param_2 < *piVar5) {
            return *piVar5;
          }
          uVar2 = (int)uVar4 - 1;
          uVar4 = (ulong)uVar2;
          piVar5 = piVar5 + 1;
        } while (uVar2 != 0);
      }
    }
    return 0;
  }
LAB_02329ee8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

