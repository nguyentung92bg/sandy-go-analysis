/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<CaptureItemState>g__Band|52_0
int32_t Dino_BusSand_App_Gameplay_GameplayController___CaptureItemState_g__Band_52_0 (uint8_t c, Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass52_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<CaptureItemState>g__Band|52_0
   int32_t Dino_BusSand_App_Gameplay_GameplayController___CaptureItemState_g__Band_52_0 (uint8_t c,
   Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass52_0_o* , const MethodInfo*
   method); */

int Dino_BusSand_App_Gameplay_GameplayController___CaptureItemState_g__Band_52_0_229bf0c
              (char param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar6 = *(int *)(lVar7 + 0x10);
  lVar8 = param_2[1];
  if ((bRam0000000004f9cb7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb7a = 1;
  }
  if (param_1 == '\0') {
    iVar6 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = System_Math__Max_4830fc8(0,0,0);
    iVar3 = System_Math__Max_4830fc8(0,0,0);
    iVar4 = System_Math__Min_4831118(*(int *)(lVar7 + 0x10) + -1,iVar6 + -1,0);
    iVar5 = System_Math__Min_4831118(*(int *)(lVar7 + 0x14) + -1,(int)lVar8 + -1,0);
    iVar6 = 0;
    if (iVar3 <= iVar5) {
      iVar6 = 0;
      do {
        if (iVar2 <= iVar4) {
          lVar8 = *(long *)(lVar7 + 0x38);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar9 = iVar2;
          do {
            uVar1 = *(int *)(lVar7 + 0x10) * iVar3 + iVar9;
            if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            iVar9 = iVar9 + 1;
            if (*(char *)(lVar8 + (int)uVar1 + 0x20) == param_1) {
              iVar6 = iVar6 + 1;
            }
          } while (iVar9 <= iVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar5);
    }
  }
  return iVar6;
}

