/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$MaxArchive
void Dino_BusSand_App_Meta_ClimbTowerFeature__MaxArchive (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, int32_t* index, int32_t* point, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$MaxArchive
   void Dino_BusSand_App_Meta_ClimbTowerFeature__MaxArchive
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, int32_t* index, int32_t* point,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__MaxArchive_2229fa0
               (long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68();
  lVar5 = *(long *)(param_1 + 0x28);
  *param_3 = 0;
  *param_4 = 0;
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(lVar5 + 0x18);
    uVar3 = (uint)uVar4;
    if (0 < (int)uVar3) {
      lVar2 = *(long *)(param_1 + 0x20);
      uVar1 = 0;
      do {
        if (lVar2 == 0) goto LAB_0232a058;
        if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar1) {
          return;
        }
        if ((uVar4 & 0xffffffff) == uVar1) {
LAB_0232a054:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (*(int *)(lVar5 + 0x20 + uVar1 * 4) == 1) {
          if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_0232a054;
          if (param_2 < *(int *)(lVar2 + 0x20 + uVar1 * 4)) {
            return;
          }
          *param_3 = (int)uVar1;
          *param_4 = *(undefined4 *)(lVar2 + 0x20 + uVar1 * 4);
        }
        uVar1 = uVar1 + 1;
      } while ((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar1);
    }
    return;
  }
LAB_0232a058:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

