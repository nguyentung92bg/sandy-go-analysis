/* IL2CPP: Dino.BusSand.Core.SandGrid$$EnsureStraightCache
void Dino_BusSand_Core_SandGrid__EnsureStraightCache (Dino_BusSand_Core_SandGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$EnsureStraightCache
   void Dino_BusSand_Core_SandGrid__EnsureStraightCache (Dino_BusSand_Core_SandGrid_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Core_SandGrid__EnsureStraightCache_24180f8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9cb7d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9cb7d = 1;
  }
  plVar7 = (long *)(param_1 + 0x68);
  if (*plVar7 == 0) {
    uVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,*(undefined4 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    thunk_FUN_02134474(plVar7,uVar4);
    puVar3 = PTR_DAT_04caa200;
    uVar11 = (ulong)*(uint *)(param_1 + 0x10);
    if (0 < (int)*(uint *)(param_1 + 0x10)) {
      uVar8 = 0;
      iVar9 = 1;
      do {
        fVar13 = 0.0;
        iVar10 = (int)uVar11;
        if (1 < iVar10) {
          iVar5 = iVar10;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            iVar5 = *(int *)(param_1 + 0x10);
          }
          iVar10 = iVar9 - iVar10;
          iVar2 = -iVar10;
          if (-1 < iVar10) {
            iVar2 = iVar10;
          }
          fVar13 = (float)iVar2 / (float)(iVar5 + -1);
        }
        fVar14 = *(float *)(param_1 + 0x34);
        if (fVar14 != 1.0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          dVar12 = (double)System_Math__Pow_48317a0((double)fVar13,(double)fVar14,0);
          fVar13 = (float)dVar12;
        }
        lVar6 = *plVar7;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar1 = uVar8 * 4;
        uVar11 = (ulong)*(int *)(param_1 + 0x10);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 2;
        *(float *)(lVar6 + lVar1 + 0x20) =
             *(float *)(param_1 + 0x2c) +
             fVar13 * (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x2c));
      } while ((long)uVar8 < (long)uVar11);
    }
  }
  return;
}

