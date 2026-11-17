/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__Doing|8
void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__Doing_8 (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, float w, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__Doing|8
   void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__Doing_8
   (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, float w, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__Doing_8_216b084
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b8a0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b8a0 = 1;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar11 = *(float *)(param_2 + 0x30);
  fVar10 = *(float *)(param_2 + 0x34);
  fVar9 = fVar11 / fVar10;
  if ((bRam0000000004f9c30d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caadd0,0);
    bRam0000000004f9c30d = 1;
  }
  puVar1 = PTR_DAT_04caadd0;
  if (*(float *)(lVar3 + 0x58) < fVar9) {
    *(float *)(lVar3 + 0x58) = fVar9;
    *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)(lVar3 + 0x54);
  }
  lVar4 = FUN_02133068(*(undefined8 *)puVar1,3);
  if (lVar4 != 0) {
    uVar5 = (uint)*(ulong *)(lVar4 + 0x18);
    if (uVar5 != 0) {
      fVar9 = *(float *)(lVar3 + 0x5c);
      *(float *)(lVar4 + 0x20) = fVar9;
      if ((uVar5 != 1) && (*(float *)(lVar4 + 0x24) = (fVar11 + param_1) / fVar10, 2 < uVar5)) {
        *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar3 + 0x58);
        if (1 < (int)uVar5) {
          lVar6 = (*(ulong *)(lVar4 + 0x18) & 0xffffffff) - 1;
          pfVar7 = (float *)(lVar4 + 0x24);
          fVar10 = fVar9;
          do {
            fVar9 = *pfVar7;
            if (*pfVar7 <= fVar10) {
              fVar9 = fVar10;
            }
            lVar6 = lVar6 + -1;
            pfVar7 = pfVar7 + 1;
            fVar10 = fVar9;
          } while (lVar6 != 0);
        }
        *(float *)(lVar3 + 0x5c) = fVar9;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

