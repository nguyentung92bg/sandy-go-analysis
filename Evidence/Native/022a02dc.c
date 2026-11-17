/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton$$SliderFill
float Dino_BusSand_App_UI_ClimbTowerHallButton__SliderFill (int32_t canClaim, bool beforeAnim, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton$$SliderFill
   float Dino_BusSand_App_UI_ClimbTowerHallButton__SliderFill (int32_t canClaim, bool beforeAnim,
   const MethodInfo* method); */

float Dino_BusSand_App_UI_ClimbTowerHallButton__SliderFill_21a02dc(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04cae6e8;
  if ((bRam0000000004f9ba15 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    bRam0000000004f9ba15 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar5 != 0) {
    iVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__NextWinPoint_2229e34(lVar5,0xffffffff,0);
    if (iVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 1.0;
      if (param_1 < 1) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(0x3f800000);
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
        if (lVar5 != 0) {
          iVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_Cur_22296c8(lVar5,0);
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar5);
            lVar5 = *(long *)puVar1;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
          if (lVar5 != 0) {
            iVar2 = iVar2 - (param_2 & 1);
            iVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__PreArchivePoint_2229d84
                              (lVar5,iVar2,0,0);
            lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
            if (lVar5 != 0) {
              iVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__NextWinPoint_2229e34(lVar5,iVar2,0);
              if (iVar4 - iVar3 < 1) {
                return _UNK_00e1fea8;
              }
              return ((float)(iVar2 - iVar3) / (float)(iVar4 - iVar3)) * _UNK_00e2052c +
                     _UNK_00e20754;
            }
          }
        }
        goto LAB_022a0438;
      }
    }
    return fVar6;
  }
LAB_022a0438:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

