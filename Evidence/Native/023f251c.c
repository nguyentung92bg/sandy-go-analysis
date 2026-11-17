/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Gaze
void Dino_BusSand_App_UI_HomeToonFace__Gaze (Dino_BusSand_App_UI_HomeToonFace_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Gaze
   void Dino_BusSand_App_UI_HomeToonFace__Gaze (Dino_BusSand_App_UI_HomeToonFace_o* __this, float
   dt, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Gaze_22f251c(float param_1,float param_2,long param_3)

{
  char cVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f9c474 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04cb6890);
    bRam0000000004f9c474 = 1;
  }
  puVar4 = PTR_DAT_04cb6890;
  pcVar5 = (char *)(param_3 + 0xa8);
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*pcVar5 == '\0') {
    pcVar5 = (char *)(param_3 + 0x84);
    fVar9 = *(float *)(param_3 + 0x58);
    param_2 = *(float *)(param_3 + 0x94);
    if ((*pcVar5 == '\0') || (param_2 <= fVar9)) {
      auVar3 = ZEXT816(0);
      if (fVar9 < param_2) goto LAB_023f25b4;
      cVar1 = *(char *)(param_3 + 0xb8);
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      *(undefined8 *)(param_3 + 0x8c) = 0;
      auVar3 = ZEXT816(0);
      if ((cVar1 == '\0') || (auVar3 = ZEXT816(0), fVar9 < *(float *)(param_3 + 0x98)))
      goto LAB_023f25b4;
      plVar6 = *(long **)(param_3 + 0x18);
      auVar3 = ZEXT816(0);
      if (plVar6 == (long *)0x0) goto LAB_023f28a4;
      uVar15 = *(undefined8 *)(param_3 + 0x7c);
      dVar12 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      lVar8 = *(long *)(param_3 + 0xa0);
      if (lVar8 == 0) {
        auStack_40 = ZEXT816(0);
LAB_023f2720:
        plVar6 = *(long **)(param_3 + 0x18);
        auVar3 = auStack_40;
        if (plVar6 == (long *)0x0) goto LAB_023f28a4;
        dVar12 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_3 + 0x18);
        auVar3 = auStack_40;
        if (plVar6 == (long *)0x0) goto LAB_023f28a4;
        dVar2 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        fVar9 = (float)dVar12 * (float)_UNK_00e696a0 + (float)_UNK_00e69850;
        fVar11 = (float)dVar2 * (float)((ulong)_UNK_00e696a0 >> 0x20) +
                 (float)((ulong)_UNK_00e69850 >> 0x20);
      }
      else {
        fVar9 = (float)dVar12;
        if (_UNK_00e208e8 <= fVar9) {
          if (_UNK_00e20994 <= fVar9) {
            fVar11 = _UNK_00e200f8;
            if (_UNK_00e200f8 <= fVar9) {
              uVar7 = 3;
            }
            else {
              uVar7 = 2;
            }
          }
          else {
            uVar7 = 1;
            fVar11 = _UNK_00e20994;
          }
        }
        else {
          uVar7 = 0;
          fVar11 = _UNK_00e208e8;
        }
        auStack_40 = (**(code **)(lVar8 + 0x18))
                               (*(undefined8 *)(lVar8 + 0x40),uVar7,*(undefined8 *)(lVar8 + 0x28));
        if ((auStack_40._0_8_ & 0xff) == 0) goto LAB_023f2720;
        System_Nullable_Vector3___get_Value_2bd0e68(auStack_40,*(undefined8 *)puVar4);
        fVar9 = (float)Dino_BusSand_App_UI_HomeToonFace__Toward_22f2b3c(param_3);
      }
      plVar6 = *(long **)(param_3 + 0x18);
      *(ulong *)(param_3 + 0x7c) = CONCAT44(fVar11,fVar9);
      auVar3 = auStack_40;
      if (plVar6 == (long *)0x0) {
LAB_023f28a4:
        auStack_40 = auVar3;
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      dVar12 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      plVar6 = *(long **)(param_3 + 0x18);
      auVar3 = auStack_40;
      if (plVar6 == (long *)0x0) goto LAB_023f28a4;
      dVar2 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      plVar6 = *(long **)(param_3 + 0x18);
      *(ulong *)(param_3 + 0x7c) =
           CONCAT44(fVar11 + (float)dVar2 * 0.16 + -0.08,fVar9 + (float)dVar12 * 0.16 + -0.08);
      auVar3 = auStack_40;
      if (plVar6 == (long *)0x0) goto LAB_023f28a4;
      fVar9 = *(float *)(param_3 + 0x58);
      dVar12 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      cVar1 = cRam0000000004f9b9de;
      uVar7 = *(undefined8 *)(param_3 + 0x7c);
      *(float *)(param_3 + 0x98) = fVar9 + (float)dVar12 * _UNK_00e20608 + _UNK_00e20994;
      if (cVar1 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b9de = '\x01';
      }
      fVar9 = (float)uVar7 - (float)uVar15;
      fVar11 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auVar3 = auStack_40;
      if (_UNK_00e20094 < SQRT(fVar9 * fVar9 + fVar11 * fVar11)) {
        plVar6 = *(long **)(param_3 + 0x18);
        if (plVar6 == (long *)0x0) goto LAB_023f28a4;
        dVar12 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        auVar3 = auStack_40;
        if (dVar12 < _UNK_00e698d0) {
          Dino_BusSand_App_UI_HomeToonFace__Blink_22e52dc(param_3,0);
          auVar3 = auStack_40;
        }
      }
      goto LAB_023f25b4;
    }
  }
  System_Nullable_Vector3___get_Value_2bd0e68(pcVar5,*(undefined8 *)PTR_DAT_04cb6890);
  uVar10 = Dino_BusSand_App_UI_HomeToonFace__Toward_22f2b3c(param_3);
  auVar3._8_8_ = auStack_40._8_8_;
  auVar3._0_8_ = auStack_40._0_8_;
  *(undefined4 *)(param_3 + 0x7c) = uVar10;
  *(float *)(param_3 + 0x80) = param_2;
LAB_023f25b4:
  fVar9 = *(float *)(param_3 + 0x7c);
  if (*(int *)(*(long *)PTR_DAT_04cb71a8 + 0xe4) == 0) {
    auStack_40 = auVar3;
    thunk_FUN_0218fdac();
  }
  fVar13 = (float)*(undefined8 *)(param_3 + 0x6c);
  fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0x6c) >> 0x20);
  fVar11 = param_1 * 70.0 + 1.0 + param_1 * param_1 * 1800.0;
  fVar9 = ((float)*(undefined8 *)(param_3 + 0x74) + (fVar9 - fVar13) * param_1 * 1800.0) / fVar11;
  fVar11 = ((float)((ulong)*(undefined8 *)(param_3 + 0x74) >> 0x20) +
           (*(float *)(param_3 + 0x80) - fVar14) * param_1 * 1800.0) / fVar11;
  *(ulong *)(param_3 + 0x74) = CONCAT44(fVar11,fVar9);
  *(ulong *)(param_3 + 0x6c) = CONCAT44(fVar14 + fVar11 * param_1,fVar13 + fVar9 * param_1);
  return;
}

