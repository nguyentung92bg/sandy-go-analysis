/* IL2CPP: Dino.BusSand.View.VehicleView$$StartEscape
void Dino_BusSand_View_VehicleView__StartEscape (Dino_BusSand_View_VehicleView_o* __this, System_Collections_Generic_List_Vector3__o* route, float duration, System_Action_o* onArrive, float hold, bool carried, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$StartEscape
   void Dino_BusSand_View_VehicleView__StartEscape (Dino_BusSand_View_VehicleView_o* __this,
   System_Collections_Generic_List_Vector3__o* route, float duration, System_Action_o* onArrive,
   float hold, bool carried, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__StartEscape_23fe4a0
               (float param_1,float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,byte param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar21 = param_2;
  if ((bRam0000000004f9caf8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe040);
    FUN_02132f7c(PTR_DAT_04cbddf8);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9caf8 = 1;
  }
  fVar12 = *(float *)(param_4 + 0x328);
  if (((0.0 <= fVar12) && (*(char *)(param_4 + 0x334) != '\0')) &&
     (fVar21 = *(float *)(param_4 + 0x32c), 0.0 < fVar21)) {
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_024feb38;
    param_3 = *(float *)(param_4 + 0x324);
    fVar21 = *(float *)(param_4 + 800);
    UnityEngine_Transform__set_position_43d0f1c
              (*(undefined4 *)(param_4 + 0x31c),*(long *)(param_4 + 0x38),0);
    fVar12 = *(float *)(param_4 + 0x328);
  }
  fVar22 = fVar21;
  if (((param_5 != 0) && (0.0 <= fVar12)) && (0 < *(int *)(param_5 + 0x18))) {
    fVar12 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                              (param_5,0,*(undefined8 *)PTR_DAT_04caa1a8);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_024feb38;
    fVar14 = fVar21;
    fVar22 = param_3;
    fVar13 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0);
    param_3 = param_3 - fVar22;
    fVar22 = _UNK_00e20900;
    if (_UNK_00e20900 <
        param_3 * param_3 +
        (fVar12 - fVar13) * (fVar12 - fVar13) + (fVar21 - fVar14) * (fVar21 - fVar14)) {
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d0);
      System_Collections_Generic_List_Vector3____ctor_3af9588
                (lVar9,param_5,*(undefined8 *)PTR_DAT_04cbddf8);
      if ((*(long *)(param_4 + 0x38) == 0) ||
         (UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0), lVar9 == 0))
      goto LAB_024feb38;
      System_Collections_Generic_List_Vector3___Insert_3afaa34
                (lVar9,0,*(undefined8 *)PTR_DAT_04cbe040);
      param_5 = lVar9;
    }
  }
  uVar10 = _UNK_00e6a150;
  *(undefined4 *)(param_4 + 0x330) = 0x3f800000;
  *(undefined8 *)(param_4 + 0x328) = uVar10;
  Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_4,2);
  *(undefined1 *)(param_4 + 0x388) = 0;
  *(long *)(param_4 + 0x240) = param_5;
  thunk_FUN_02134474(param_4 + 0x240,param_5);
  puVar7 = PTR_DAT_04caadd0;
  if (param_5 != 0) {
    uVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,*(undefined4 *)(param_5 + 0x18));
    *(undefined8 *)(param_4 + 0x248) = uVar10;
    thunk_FUN_02134474(param_4 + 0x248,uVar10);
    iVar4 = *(int *)(param_5 + 0x18);
    *(undefined4 *)(param_4 + 0x250) = 0;
    puVar8 = PTR_DAT_04caa200;
    puVar6 = PTR_DAT_04caa1a8;
    if (1 < iVar4) {
      uVar11 = 0;
      do {
        fVar27 = *(float *)(param_4 + 0x250);
        fVar14 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (param_5,uVar11 & 0xffffffff,*(undefined8 *)puVar6);
        fVar21 = fVar22;
        fVar12 = param_3;
        fVar13 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (param_5,uVar11 + 1 & 0xffffffff,*(undefined8 *)puVar6);
        if (cRam0000000004f9b9df == '\0') {
          FUN_02132f7c(puVar8);
          cRam0000000004f9b9df = '\x01';
        }
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar21 = fVar22 - fVar21;
        lVar9 = *(long *)(param_4 + 0x248);
        param_3 = param_3 - fVar12;
        fVar22 = param_3 * param_3;
        fVar27 = fVar27 + SQRT(fVar22 + (fVar14 - fVar13) * (fVar14 - fVar13) + fVar21 * fVar21);
        *(float *)(param_4 + 0x250) = fVar27;
        if (lVar9 == 0) goto LAB_024feb38;
        if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar11 + 1) goto LAB_024feb3c;
        iVar4 = *(int *)(param_5 + 0x18);
        lVar1 = uVar11 * 4;
        lVar2 = uVar11 + 2;
        uVar11 = uVar11 + 1;
        *(float *)(lVar9 + lVar1 + 0x24) = fVar27;
      } while (lVar2 < iVar4);
    }
    fVar21 = _UNK_00e2043c;
    *(undefined4 *)(param_4 + 0x254) = 0;
    *(undefined8 *)(param_4 + 0x260) = param_6;
    if (fVar21 <= param_1) {
      fVar21 = param_1;
    }
    *(float *)(param_4 + 600) = fVar21;
    thunk_FUN_02134474(param_4 + 0x260,param_6);
    *(undefined8 *)(param_4 + 0x1c8) = 0;
    uVar10 = *(undefined8 *)puVar7;
    uVar5 = *(undefined4 *)(param_5 + 0x18);
    fVar21 = (*(float *)(param_4 + 0x250) / *(float *)(param_4 + 600)) * _UNK_00e20178;
    fVar13 = fVar21 / _UNK_00e207cc;
    *(float *)(param_4 + 0x1d0) = fVar21;
    *(float *)(param_4 + 0x1d4) = fVar13;
    uVar10 = FUN_02133068(uVar10,uVar5);
    *(undefined8 *)(param_4 + 0x1d8) = uVar10;
    thunk_FUN_02134474(param_4 + 0x1d8,uVar10);
    puVar6 = PTR_DAT_04caa200;
    puVar7 = PTR_DAT_04caa1a8;
    fVar14 = _UNK_00e20a74;
    fVar22 = _UNK_00e20a08;
    fVar12 = _UNK_00e20410;
    fVar21 = _UNK_00e1fe14;
    if (1 < *(int *)(param_5 + 0x18) + -1) {
      uVar11 = 0;
      do {
        uVar3 = uVar11 + 1;
        fVar15 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (param_5,uVar3 & 0xffffffff,*(undefined8 *)puVar7);
        fVar27 = fVar13;
        fVar25 = param_3;
        fVar16 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (param_5,uVar11 & 0xffffffff,*(undefined8 *)puVar7);
        fVar26 = fVar27;
        fVar23 = fVar25;
        fVar17 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (param_5,(int)uVar3 + 1,*(undefined8 *)puVar7);
        fVar24 = fVar26;
        fVar19 = fVar23;
        fVar18 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (param_5,uVar3 & 0xffffffff,*(undefined8 *)puVar7);
        if (cRam0000000004f9c959 == '\0') {
          FUN_02132f7c(puVar6);
          cRam0000000004f9c959 = '\x01';
        }
        if ((*(int *)(*(long *)puVar6 + 0xe4) == 0) &&
           (thunk_FUN_0218fdac(), cRam0000000004f9c959 == '\0')) {
          FUN_02132f7c(puVar6);
          cRam0000000004f9c959 = '\x01';
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar15 = fVar15 - fVar16;
        fVar27 = fVar13 - fVar27;
        fVar25 = param_3 - fVar25;
        fVar13 = fVar25 * fVar25;
        fVar16 = fVar13 + fVar15 * fVar15 + fVar27 * fVar27;
        param_3 = SQRT(fVar16);
        if (fVar22 <= param_3) {
          fVar17 = fVar17 - fVar18;
          fVar26 = fVar26 - fVar24;
          fVar23 = fVar23 - fVar19;
          fVar24 = fVar23 * fVar23 + fVar17 * fVar17 + fVar26 * fVar26;
          fVar13 = SQRT(fVar24);
          if (fVar22 <= fVar13) {
            lVar9 = *(long *)(param_4 + 0x1d8);
            if (cRam0000000004f9cb0c == '\0') {
              FUN_02132f7c(puVar6);
              cRam0000000004f9cb0c = '\x01';
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar24 = SQRT(fVar16 * fVar24);
            fVar19 = 0.0;
            if (fVar21 <= fVar24) {
              fVar24 = (fVar25 * fVar23 + fVar15 * fVar17 + fVar27 * fVar26) / fVar24;
              fVar27 = 1.0;
              if (fVar24 <= 1.0) {
                fVar27 = fVar24;
              }
              fVar26 = -1.0;
              if (-1.0 <= fVar24) {
                fVar26 = fVar27;
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              dVar20 = (double)FUN_049b5380((double)fVar26);
              fVar19 = (float)dVar20 * fVar12;
            }
            if (lVar9 == 0) goto LAB_024feb38;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) {
LAB_024feb3c:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            fVar13 = param_3 + fVar13;
            param_3 = 0.5;
            fVar13 = fVar13 * 0.5;
            *(float *)(lVar9 + uVar11 * 4 + 0x24) = (fVar19 * fVar14) / fVar13;
          }
        }
        lVar9 = uVar11 + 2;
        uVar11 = uVar11 + 1;
      } while (lVar9 < *(int *)(param_5 + 0x18) + -1);
    }
    *(undefined1 *)(param_4 + 0x1c4) = 0;
    *(byte *)(param_4 + 0x36c) = param_7 & 1;
    fVar21 = 0.0;
    if (0.0 <= param_2) {
      fVar21 = param_2;
    }
    *(float *)(param_4 + 0x364) = fVar21;
    if (*(long *)(param_4 + 0x38) != 0) {
      UnityEngine_Transform__get_eulerAngles_43d130c(*(long *)(param_4 + 0x38),0);
      *(float *)(param_4 + 0x368) = param_2;
      if (*(float *)(param_4 + 0x364) <= 0.0) {
        fVar21 = *(float *)(param_4 + 0x188) + _UNK_00e20a54;
        *(undefined4 *)(param_4 + 0x1e4) = 0x3f970a3d;
        *(float *)(param_4 + 0x188) = fVar21;
        *(float *)(param_4 + 0x198) = *(float *)(param_4 + 0x198) + -70.0;
      }
      return;
    }
  }
LAB_024feb38:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

