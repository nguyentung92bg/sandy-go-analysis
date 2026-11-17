/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$DustAt
void Dino_BusSand_App_UI_HomeBus__DustAt (Dino_BusSand_App_UI_HomeBus_o* __this, float axle, float strength, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$DustAt
   void Dino_BusSand_App_UI_HomeBus__DustAt (Dino_BusSand_App_UI_HomeBus_o* __this, float axle,
   float strength, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__DustAt_22e2be8(float param_1,float param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((bRam0000000004f9c41a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7200);
    bRam0000000004f9c41a = 1;
  }
  puVar15 = PTR_DAT_04cb7200;
  uVar14 = _UNK_00e6a500;
  uVar13 = _UNK_00e697b8;
  fVar12 = _UNK_00e209cc;
  fVar11 = _UNK_00e20994;
  fVar10 = _UNK_00e20864;
  uVar9 = _UNK_00e20590;
  uVar8 = _UNK_00e20328;
  fVar7 = _UNK_00e200f8;
  fVar6 = _UNK_00e20094;
  fVar5 = _UNK_00e1ffe4;
  fVar4 = _UNK_00e1ff84;
  param_2 = param_2 + _UNK_00e20094;
  iVar18 = -3;
  while (plVar16 = *(long **)(param_3 + 0x30), plVar16 != (long *)0x0) {
    lVar17 = *(long *)(param_3 + 0x10);
    dVar1 = (double)(**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    if (lVar17 == 0) break;
    fVar21 = (float)(iVar18 + 2) * fVar12;
    uVar20 = uVar8;
    uVar19 = UnityEngine_Transform__TransformPoint_43d3c44
                       ((float)dVar1 * fVar6 + fVar10 + param_1,uVar8,fVar21,lVar17,0);
    plVar16 = *(long **)(param_3 + 0x30);
    if (plVar16 == (long *)0x0) break;
    fVar23 = *(float *)(param_3 + 0x44);
    lVar17 = *(long *)(param_3 + 0x28);
    dVar1 = (double)(**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    plVar16 = *(long **)(param_3 + 0x30);
    if (plVar16 == (long *)0x0) break;
    dVar3 = (double)(**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    plVar16 = *(long **)(param_3 + 0x30);
    if (plVar16 == (long *)0x0) break;
    fVar22 = (float)dVar1 * fVar4 + fVar7;
    dVar1 = (double)(**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    plVar16 = *(long **)(param_3 + 0x30);
    if (0.0 <= fVar23) {
      fVar22 = -fVar22;
    }
    if (plVar16 == (long *)0x0) break;
    dVar2 = (double)(**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    plVar16 = *(long **)(param_3 + 0x30);
    if (plVar16 == (long *)0x0) break;
    (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    plVar16 = *(long **)(param_3 + 0x30);
    if (plVar16 == (long *)0x0) break;
    (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar17 == 0) break;
    fVar23 = ((float)dVar1 * (float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar14 >> 0x20)) *
             param_2;
    Dino_BusSand_App_UI_HomePuffs__Emit_22e5d7c
              (uVar19,uVar20,fVar21,param_2 * fVar22,
               CONCAT44(fVar23,((float)dVar3 * (float)uVar13 + (float)uVar14) * param_2),fVar23,
               (float)dVar2 * fVar5 + fVar11,uVar9,lVar17,0);
    iVar18 = iVar18 + 2;
    if (-1 < iVar18) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

