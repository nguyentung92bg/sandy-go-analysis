/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__Did|9
void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__Did_9 (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, float w, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__Did|9
   void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__Did_9
   (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, float w, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__Did_9_216b128
               (float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b8a1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b8a1 = 1;
  }
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + param_1;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar10 = *(float *)(param_2 + 0x30) / *(float *)(param_2 + 0x34);
  if ((bRam0000000004f9c30d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caadd0,0);
    bRam0000000004f9c30d = 1;
  }
  puVar2 = PTR_DAT_04caadd0;
  if (*(float *)(lVar4 + 0x58) < fVar10) {
    *(float *)(lVar4 + 0x58) = fVar10;
    *(undefined4 *)(lVar4 + 0x60) = *(undefined4 *)(lVar4 + 0x54);
  }
  lVar5 = FUN_02133068(*(undefined8 *)puVar2,3);
  if (lVar5 != 0) {
    uVar6 = (uint)*(ulong *)(lVar5 + 0x18);
    if (uVar6 != 0) {
      fVar11 = *(float *)(lVar4 + 0x5c);
      *(float *)(lVar5 + 0x20) = fVar11;
      if ((uVar6 != 1) && (*(float *)(lVar5 + 0x24) = fVar10, 2 < uVar6)) {
        *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar4 + 0x58);
        if (1 < (int)uVar6) {
          lVar7 = (*(ulong *)(lVar5 + 0x18) & 0xffffffff) - 1;
          pfVar8 = (float *)(lVar5 + 0x24);
          fVar10 = fVar11;
          do {
            fVar11 = *pfVar8;
            if (*pfVar8 <= fVar10) {
              fVar11 = fVar10;
            }
            lVar7 = lVar7 + -1;
            pfVar8 = pfVar8 + 1;
            fVar10 = fVar11;
          } while (lVar7 != 0);
        }
        *(float *)(lVar4 + 0x5c) = fVar11;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

