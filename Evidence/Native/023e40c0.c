/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Effects
void Dino_BusSand_App_UI_HomeBus__Effects (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, bool idle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Effects
   void Dino_BusSand_App_UI_HomeBus__Effects (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, bool
   idle, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Effects_22e40c0(float param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9c418 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    bRam0000000004f9c418 = 1;
  }
  fVar6 = *(float *)(param_2 + 0x44);
  if (*(float *)(param_2 + 0x8c) <= *(float *)(param_2 + 0x88)) {
    Dino_BusSand_App_UI_HomeBus__Puff_22e1234(param_2,0);
    fVar10 = *(float *)(param_2 + 0x88);
    if ((1.5 < ABS(fVar6)) || (*(int *)(param_2 + 0x50) == 2)) {
      plVar2 = *(long **)(param_2 + 0x30);
      fVar8 = _UNK_00e20a94;
      fVar11 = _UNK_00e20b18;
joined_r0x023e4144:
      if (plVar2 == (long *)0x0) goto LAB_023e440c;
    }
    else {
      plVar2 = *(long **)(param_2 + 0x30);
      fVar8 = _UNK_00e20170;
      fVar11 = _UNK_00e20094;
      if (*(char *)(param_2 + 0xe0) == '\0') goto joined_r0x023e4144;
      if (plVar2 == (long *)0x0) goto LAB_023e440c;
      fVar8 = 3.0;
      fVar11 = 1.5;
    }
    dVar9 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    *(float *)(param_2 + 0x8c) = fVar10 + fVar11 * (float)dVar9 + fVar8;
  }
  if (ABS(*(float *)(param_2 + 0x48)) <= 18.0) {
LAB_023e41f0:
    if (4.0 < ABS(fVar6)) {
      plVar2 = *(long **)(param_2 + 0x30);
      if (plVar2 == (long *)0x0) goto LAB_023e440c;
      dVar9 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      uVar7 = _UNK_00e205a8;
      fVar6 = _UNK_00e20590;
      if (dVar9 < (double)(param_1 * 8.0)) goto LAB_023e4234;
    }
  }
  else {
    plVar2 = *(long **)(param_2 + 0x30);
    if (plVar2 == (long *)0x0) goto LAB_023e440c;
    dVar9 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((double)(param_1 * 24.0) <= dVar9) goto LAB_023e41f0;
    fVar10 = ABS(*(float *)(param_2 + 0x48)) / 60.0;
    fVar6 = 1.0;
    if (fVar10 <= 1.0) {
      fVar6 = fVar10;
    }
    uVar7 = *(undefined4 *)
             (&UNK_00e69720 +
             (ulong)(*(float *)(param_2 + 0x48) * *(float *)(param_2 + 0x44) < 0.0) * 4);
LAB_023e4234:
    Dino_BusSand_App_UI_HomeBus__DustAt_22e2be8(uVar7,fVar6,param_2);
  }
  if ((0.0 <= *(float *)(param_2 + 0x100)) &&
     (*(float *)(param_2 + 0x100) <= *(float *)(param_2 + 0x88))) {
    *(undefined4 *)(param_2 + 0x100) = 0xbf800000;
    *(undefined4 *)(param_2 + 0x9c) = 0x3f800000;
  }
  fVar6 = _UNK_00e20448;
  fVar8 = *(float *)(param_2 + 0x9c) + param_1 / _UNK_00e20050;
  fVar10 = 0.0;
  if (0.0 <= fVar8) {
    fVar10 = fVar8;
  }
  *(float *)(param_2 + 0x9c) = fVar10;
  puVar1 = PTR_DAT_04cb71b0;
  if (fVar10 <= fVar6) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar6 = _UNK_00e201f4;
  if (lVar5 != 0) {
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
              (*(float *)(lVar3 + 0xc) + 0.0,*(float *)(lVar3 + 0x10) + 0.0,
               *(float *)(lVar3 + 0x14) + _UNK_00e201f4,lVar5,0);
    if (lVar4 != 0) {
      Dino_BusSand_App_UI_HomePuffs__Glow_22e5f2c(lVar4,0);
      if (*(long *)(param_2 + 0x18) != 0) {
        lVar5 = *(long *)(param_2 + 0x28);
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
        Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
                  (*(float *)(lVar4 + 0x18) + 0.0,*(float *)(lVar4 + 0x1c) + 0.0,
                   *(float *)(lVar4 + 0x20) + fVar6,*(long *)(param_2 + 0x18),0);
        if (lVar5 != 0) {
          Dino_BusSand_App_UI_HomePuffs__Glow_22e5f2c(lVar5,0);
          return;
        }
      }
    }
  }
LAB_023e440c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

