/* IL2CPP: Dino.BusSand.App.UI.LoadingPanel$$Progress
void Dino_BusSand_App_UI_LoadingPanel__Progress (Dino_BusSand_App_UI_LoadingPanel_o* __this, float done, float upTo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LoadingPanel$$Progress
   void Dino_BusSand_App_UI_LoadingPanel__Progress (Dino_BusSand_App_UI_LoadingPanel_o* __this,
   float done, float upTo, const MethodInfo* method); */

void Dino_BusSand_App_UI_LoadingPanel__Progress_22bbcb4
               (float param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f9c30d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c30d = 1;
  }
  puVar1 = PTR_DAT_04caadd0;
  if (*(float *)(param_3 + 0x58) < param_1) {
    *(float *)(param_3 + 0x58) = param_1;
    *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_3 + 0x54);
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,3);
  if (lVar2 != 0) {
    uVar3 = (uint)*(ulong *)(lVar2 + 0x18);
    if (uVar3 != 0) {
      fVar6 = *(float *)(param_3 + 0x5c);
      *(float *)(lVar2 + 0x20) = fVar6;
      if ((uVar3 != 1) && (*(undefined4 *)(lVar2 + 0x24) = param_2, 2 < uVar3)) {
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_3 + 0x58);
        if (1 < (int)uVar3) {
          lVar4 = (*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1;
          pfVar5 = (float *)(lVar2 + 0x24);
          fVar7 = fVar6;
          do {
            fVar6 = *pfVar5;
            if (*pfVar5 <= fVar7) {
              fVar6 = fVar7;
            }
            lVar4 = lVar4 + -1;
            pfVar5 = pfVar5 + 1;
            fVar7 = fVar6;
          } while (lVar4 != 0);
        }
        *(float *)(param_3 + 0x5c) = fVar6;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

