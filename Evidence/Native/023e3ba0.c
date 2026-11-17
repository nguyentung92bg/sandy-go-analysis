/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Ride
void Dino_BusSand_App_UI_HomeBus__Ride (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, float parked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Ride
   void Dino_BusSand_App_UI_HomeBus__Ride (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, float
   parked, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Ride_22e3ba0(float param_1,float param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  if ((bRam0000000004f9c417 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c417 = 1;
  }
  fVar11 = _UNK_00e20094;
  fVar9 = *(float *)(param_3 + 0x48) * _UNK_00e2004c;
  fVar10 = 5.0;
  if (fVar9 <= 5.0) {
    fVar10 = fVar9;
  }
  fVar14 = -5.0;
  if (-5.0 <= fVar9) {
    fVar14 = fVar10;
  }
  fVar14 = *(float *)(param_3 + 100) +
           ((fVar14 - *(float *)(param_3 + 0x60)) * 150.0 + *(float *)(param_3 + 100) * -10.0) *
           param_1;
  fVar9 = *(float *)(param_3 + 0x7c) +
          ((*(float *)(param_3 + 0x80) - *(float *)(param_3 + 0x78)) * 40.0 +
          *(float *)(param_3 + 0x7c) * -12.5) * param_1;
  fVar10 = *(float *)(param_3 + 0x88) * _UNK_00e20094;
  *(float *)(param_3 + 0x60) = *(float *)(param_3 + 0x60) + fVar14 * param_1;
  *(float *)(param_3 + 100) = fVar14;
  uVar1 = _UNK_00e202d4;
  *(float *)(param_3 + 0x78) = *(float *)(param_3 + 0x78) + fVar9 * param_1;
  *(float *)(param_3 + 0x7c) = fVar9;
  fVar10 = (float)UnityEngine_Mathf__PerlinNoise_43afc78(fVar10,uVar1,0);
  if ((0.0 <= *(float *)(param_3 + 0xa0)) &&
     (*(float *)(param_3 + 0xa0) <= *(float *)(param_3 + 0x88))) {
    *(undefined8 *)(param_3 + 0xa0) = _UNK_00e6a150;
    Dino_BusSand_App_UI_HomeBus__Blow_22e4850(param_3);
    if (*(float *)(param_3 + 0xf8) <= *(float *)(param_3 + 0x88)) {
      lVar8 = *(long *)(param_3 + 0x20);
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,1);
      puVar2 = PTR_DAT_04cb71a8;
      lVar6 = *(long *)PTR_DAT_04cb71a8;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar6);
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_88 = *(undefined8 *)(lVar6 + 0x6c);
      uStack_90 = *(undefined8 *)(lVar6 + 100);
      uStack_80 = *(undefined4 *)(lVar6 + 0x74);
      uStack_98 = 0;
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (fVar11,&uStack_a8,&uStack_90,*(undefined8 *)PTR_DAT_04cb71f0);
      if (lVar4 == 0) goto LAB_023e40b8;
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar4 + 0x30) = uStack_98;
      *(undefined8 *)(lVar4 + 0x28) = uStack_a0;
      *(undefined8 *)(lVar4 + 0x20) = uStack_a8;
      if (lVar8 == 0) goto LAB_023e40b8;
      Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar8,lVar4,0);
    }
  }
  fVar11 = _UNK_00e2098c;
  fVar10 = (fVar10 + -0.5) * _UNK_00e1fea8;
  if (0.0 <= *(float *)(param_3 + 0xa4)) {
    fVar9 = *(float *)(param_3 + 0xa4) + param_1;
    bVar3 = _UNK_00e2098c <= fVar9;
    *(float *)(param_3 + 0xa4) = fVar9;
    if (bVar3) {
      *(undefined4 *)(param_3 + 0xa4) = 0xbf800000;
    }
    else {
      fVar11 = (float)func_0x049b5320((fVar9 * _UNK_00e2082c) / fVar11);
      fVar10 = fVar10 + fVar11 * _UNK_00e205ec;
    }
  }
  fVar9 = ABS(*(float *)(param_3 + 0x44));
  fVar11 = *(float *)(param_3 + 0x6c) +
           ((fVar10 - *(float *)(param_3 + 0x68)) * 120.0 + *(float *)(param_3 + 0x6c) * -11.0) *
           param_1;
  *(float *)(param_3 + 0x68) = *(float *)(param_3 + 0x68) + fVar11 * param_1;
  *(float *)(param_3 + 0x6c) = fVar11;
  if (1.0 < fVar9) {
    plVar5 = *(long **)(param_3 + 0x30);
    if (plVar5 == (long *)0x0) goto LAB_023e40b8;
    dVar12 = (double)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (dVar12 < (double)(fVar9 * param_1 * _UNK_00e20590)) {
      plVar5 = *(long **)(param_3 + 0x30);
      if (plVar5 == (long *)0x0) goto LAB_023e40b8;
      fVar10 = *(float *)(param_3 + 0x74);
      dVar12 = (double)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      fVar11 = 1.0;
      if (fVar9 / 12.0 <= 1.0) {
        fVar11 = fVar9 / 12.0;
      }
      *(float *)(param_3 + 0x74) = fVar10 + fVar11 * ((float)dVar12 + -0.5);
    }
  }
  lVar4 = *(long *)(param_3 + 0x18);
  fVar11 = *(float *)(param_3 + 0x74) +
           (*(float *)(param_3 + 0x70) * -260.0 + *(float *)(param_3 + 0x74) * -15.0) * param_1;
  fVar10 = *(float *)(param_3 + 0x70) + fVar11 * param_1;
  *(float *)(param_3 + 0x70) = fVar10;
  *(float *)(param_3 + 0x74) = fVar11;
  if (lVar4 != 0) {
    fVar18 = *(float *)(param_3 + 0x60);
    uVar7 = (ulong)(*(char *)(param_3 + 0xe0) == '\0');
    fVar14 = *(float *)(&UNK_00e6a1f0 + uVar7 * 4);
    fVar15 = *(float *)(&UNK_00e6a098 + uVar7 * 4);
    fVar11 = (float)func_0x049b5320(fVar18 * _UNK_00e20a74);
    fVar17 = (*(float *)(param_3 + 0x88) + *(float *)(param_3 + 0x88)) * _UNK_00e2082c;
    fVar9 = (fVar9 + -0.5) * 0.125;
    fVar19 = ABS(fVar11) * _UNK_00e20544;
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar20 = 0.0;
    if (0.0 <= fVar9) {
      fVar20 = fVar11;
    }
    fVar9 = (float)func_0x049b5320(fVar17 * 7.0);
    fVar13 = *(float *)(param_3 + 0x68);
    fVar9 = fVar9 * _UNK_00e20b14;
    fVar18 = fVar18 + *(float *)(param_3 + 0x78);
    fVar11 = 5.0;
    if (fVar13 <= 5.0) {
      fVar11 = fVar13;
    }
    fVar10 = fVar10 * _UNK_00e205f8;
    fVar16 = -5.0;
    if (-5.0 <= fVar13) {
      fVar16 = fVar11;
    }
    fVar11 = 9.0;
    if (fVar18 <= 9.0) {
      fVar11 = fVar18;
    }
    fVar13 = -9.0;
    if (-9.0 <= fVar18) {
      fVar13 = fVar11;
    }
    fVar11 = (float)func_0x049b5320(fVar17 / fVar15);
    Dino_BusSand_App_UI_HomeToonRig__Lean_22f58b4
              (fVar13,fVar16,0,fVar19 + fVar10 + fVar20 * fVar9,0,0,
               fVar14 * param_2 * (fVar11 * 0.5 + 0.5),lVar4,0);
    if (*(float *)(param_3 + 0xa8) <= 0.0) {
      if (*(long *)(param_3 + 0x18) == 0) goto LAB_023e40b8;
      uVar7 = Dino_BusSand_App_UI_HomeToonRig__get_CapAway_22f63a4(*(long *)(param_3 + 0x18),0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_3 + 0x18) == 0) goto LAB_023e40b8;
        uVar7 = Dino_BusSand_App_UI_HomeToonRig__get_CapFalling_22f6430(*(long *)(param_3 + 0x18),0)
        ;
        if ((uVar7 & 1) == 0) {
          if (*(long *)(param_3 + 0x18) == 0) goto LAB_023e40b8;
          Dino_BusSand_App_UI_HomeToonRig__CapOn_22f6248(*(long *)(param_3 + 0x18),0);
        }
      }
    }
    if (*(long *)(param_3 + 0x18) != 0) {
      Dino_BusSand_App_UI_HomeToonRig__Step_22f5a0c(param_1,*(long *)(param_3 + 0x18),0);
      if (*(long *)(param_3 + 0x18) != 0) {
        if (*(char *)(*(long *)(param_3 + 0x18) + 0x114) != '\0') {
          Dino_BusSand_App_UI_HomeBus__Landed_22e1910(param_3);
        }
        return;
      }
    }
  }
LAB_023e40b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

