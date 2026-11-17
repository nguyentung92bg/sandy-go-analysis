/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Creep
void Dino_BusSand_App_UI_HomeBus__Creep (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, bool idle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023e14f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Creep
   void Dino_BusSand_App_UI_HomeBus__Creep (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, bool
   idle, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Creep_22e2f20(float param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  
  fVar16 = _UNK_00e2082c;
  fVar18 = _UNK_00e205ec;
  if (0.0 <= *(float *)(param_2 + 0x98)) {
    param_1 = *(float *)(param_2 + 0x98) + param_1;
    fVar9 = param_1 / _UNK_00e205ec;
    *(float *)(param_2 + 0x98) = param_1;
    fVar14 = 1.0;
    if (fVar9 <= 1.0) {
      fVar14 = fVar9;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar9) {
      fVar6 = fVar14 * fVar16;
    }
    fVar16 = (float)func_0x049b5320(fVar6);
    *(float *)(param_2 + 0x94) = fVar16 * _UNK_00e207cc;
    if (fVar18 <= param_1) {
      *(undefined8 *)(param_2 + 0x94) = _UNK_00e69830;
    }
    if ((param_3 & 1) != 0) {
      return;
    }
  }
  else if ((param_3 & 1) != 0) {
    if (*(char *)(param_2 + 0xe0) != '\0') {
      return;
    }
    fVar18 = *(float *)(param_2 + 0x88);
    if (fVar18 < *(float *)(param_2 + 0x90)) {
      return;
    }
    if (_UNK_00e2043c <= ABS(*(float *)(param_2 + 0x44))) {
      return;
    }
    plVar2 = *(long **)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x98) = 0;
    if (plVar2 != (long *)0x0) {
      dVar13 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      *(float *)(param_2 + 0x90) = fVar18 + (float)dVar13 * 6.0 + 9.0;
      puVar1 = PTR_DAT_04cb71b0;
      if ((bRam0000000004f9c419 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb7200);
        FUN_02132f7c(PTR_DAT_04cb71b0);
        bRam0000000004f9c419 = 1;
      }
      lVar4 = *(long *)(param_2 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (lVar4 != 0) {
        lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
        fVar18 = *(float *)(lVar3 + 0x28);
        fVar16 = *(float *)(lVar3 + 0x2c);
        uVar5 = Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
                          (*(undefined4 *)(lVar3 + 0x24),lVar4,0);
        if ((*(long *)(param_2 + 0x18) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_2 + 0x18) + 0x18), lVar4 != 0)) {
          fVar14 = fVar18;
          fVar9 = fVar16;
          fVar6 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar4,0);
          plVar2 = *(long **)(param_2 + 0x30);
          if (plVar2 != (long *)0x0) {
            lVar4 = *(long *)(param_2 + 0x28);
            dVar13 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0))
            ;
            if (cRam0000000004f9bcf8 == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9bcf8 = '\x01';
            }
            puVar1 = PTR_DAT_04caa208;
            plVar2 = *(long **)(param_2 + 0x30);
            if (plVar2 != (long *)0x0) {
              fVar20 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
              uVar21 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
              dVar10 = (double)(**(code **)(*plVar2 + 0x1b8))
                                         (plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
              if (cRam0000000004f9c41d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9c41d = '\x01';
              }
              plVar2 = *(long **)(param_2 + 0x30);
              if (plVar2 != (long *)0x0) {
                fVar7 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
                uVar19 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
                dVar11 = (double)(**(code **)(*plVar2 + 0x1b8))
                                           (plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                plVar2 = *(long **)(param_2 + 0x30);
                if (plVar2 != (long *)0x0) {
                  dVar12 = (double)(**(code **)(*plVar2 + 0x1b8))
                                             (plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                  plVar2 = *(long **)(param_2 + 0x30);
                  if (plVar2 != (long *)0x0) {
                    (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                    puVar1 = PTR_DAT_04cb7200;
                    plVar2 = *(long **)(param_2 + 0x30);
                    if (plVar2 != (long *)0x0) {
                      (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (lVar4 != 0) {
                        fVar15 = (float)dVar13 * _UNK_00e20094 + _UNK_00e20094;
                        fVar8 = (float)dVar10 * _UNK_00e20590 + _UNK_00e20590;
                        fVar17 = (float)dVar11 * _UNK_00e2098c + _UNK_00e202d8;
                        Dino_BusSand_App_UI_HomePuffs__Emit_22e5d7c
                                  (uVar5,fVar18,fVar16,
                                   ((float)uVar21 * fVar8 - fVar6 * fVar15) + (float)uVar19 * fVar17
                                   ,((float)((ulong)uVar21 >> 0x20) * fVar8 - fVar14 * fVar15) +
                                    (float)((ulong)uVar19 >> 0x20) * fVar17,
                                   (fVar20 * fVar8 - fVar9 * fVar15) + fVar7 * fVar17,
                                   (float)dVar12 * _UNK_00e20094 + _UNK_00e20170,_UNK_00e20aec * 1.5
                                   ,lVar4,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar16 = *(float *)(param_2 + 0x88) + 5.0;
  fVar18 = *(float *)(param_2 + 0x90);
  if (*(float *)(param_2 + 0x90) <= fVar16) {
    fVar18 = fVar16;
  }
  *(float *)(param_2 + 0x90) = fVar18;
  return;
}

