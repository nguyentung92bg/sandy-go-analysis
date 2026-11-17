/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Puff
void Dino_BusSand_App_UI_HomeBus__Puff (Dino_BusSand_App_UI_HomeBus_o* __this, bool big, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Puff
   void Dino_BusSand_App_UI_HomeBus__Puff (Dino_BusSand_App_UI_HomeBus_o* __this, bool big, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Puff_22e1234(long param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  
  puVar1 = PTR_DAT_04cb71b0;
  if ((bRam0000000004f9c419 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb71b0);
    bRam0000000004f9c419 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar4 != 0) {
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar13 = *(float *)(lVar3 + 0x28);
    fVar16 = *(float *)(lVar3 + 0x2c);
    uVar5 = Dino_BusSand_App_UI_HomeToonRig__World_22f56bc(*(undefined4 *)(lVar3 + 0x24),lVar4,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) {
      fVar14 = fVar13;
      fVar17 = fVar16;
      fVar6 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar4,0);
      plVar2 = *(long **)(param_1 + 0x30);
      if (plVar2 != (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x28);
        dVar9 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        if (cRam0000000004f9bcf8 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        puVar1 = PTR_DAT_04caa208;
        plVar2 = *(long **)(param_1 + 0x30);
        if (plVar2 != (long *)0x0) {
          fVar21 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
          uVar22 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
          dVar10 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
          if (cRam0000000004f9c41d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9c41d = '\x01';
          }
          plVar2 = *(long **)(param_1 + 0x30);
          if (plVar2 != (long *)0x0) {
            fVar7 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
            uVar20 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
            dVar11 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0))
            ;
            plVar2 = *(long **)(param_1 + 0x30);
            if (plVar2 != (long *)0x0) {
              dVar12 = (double)(**(code **)(*plVar2 + 0x1b8))
                                         (plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
              plVar2 = *(long **)(param_1 + 0x30);
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                puVar1 = PTR_DAT_04cb7200;
                plVar2 = *(long **)(param_1 + 0x30);
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (lVar4 != 0) {
                    fVar15 = (float)dVar9 * _UNK_00e20094 + _UNK_00e20094;
                    fVar8 = (float)dVar10 * _UNK_00e20590 + _UNK_00e20590;
                    fVar18 = (float)dVar11 * _UNK_00e2098c + _UNK_00e202d8;
                    fVar19 = 1.5;
                    if ((param_2 & 1) == 0) {
                      fVar19 = 1.0;
                    }
                    Dino_BusSand_App_UI_HomePuffs__Emit_22e5d7c
                              (uVar5,fVar13,fVar16,
                               ((float)uVar22 * fVar8 - fVar6 * fVar15) + (float)uVar20 * fVar18,
                               ((float)((ulong)uVar22 >> 0x20) * fVar8 - fVar14 * fVar15) +
                               (float)((ulong)uVar20 >> 0x20) * fVar18,
                               (fVar21 * fVar8 - fVar17 * fVar15) + fVar7 * fVar18,
                               (float)dVar12 * _UNK_00e20094 + _UNK_00e20170,fVar19 * _UNK_00e20aec,
                               lVar4,0);
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

