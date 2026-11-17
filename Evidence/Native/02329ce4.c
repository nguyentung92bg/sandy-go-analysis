/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsArchivePoint
bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsArchivePoint (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsArchivePoint
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsArchivePoint
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsArchivePoint_2229ce4(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68();
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_02329d80:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = 0;
  uVar2 = (uint)*(ulong *)(lVar3 + 0x18);
  if (0 < (int)uVar2) {
    do {
      if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) == uVar1) {
LAB_02329d7c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(int *)(lVar3 + 0x20 + uVar1 * 4) == param_2) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0) goto LAB_02329d80;
        if ((long)uVar1 < (long)(int)*(uint *)(lVar4 + 0x18)) {
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_02329d7c;
          if (*(int *)(lVar4 + uVar1 * 4 + 0x20) == 1) break;
        }
      }
      uVar1 = uVar1 + 1;
    } while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar1);
  }
  return (long)uVar1 < (long)(int)uVar2;
}

