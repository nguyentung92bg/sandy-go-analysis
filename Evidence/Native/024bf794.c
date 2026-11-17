/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildObject
void Dino_BusSand_View_MechanicLayer__BuildObject (Dino_BusSand_View_MechanicLayer_o* __this, int32_t index, Dino_BusSand_Core_LotObjectDef_o* od, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildObject
   void Dino_BusSand_View_MechanicLayer__BuildObject (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t index, Dino_BusSand_Core_LotObjectDef_o* od, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__BuildObject_23bf794(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  uint uVar20;
  undefined4 uVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  int iStack_a4;
  
  iStack_a4 = param_2;
  if ((bRam0000000004f9c9c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04cbd078);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbd080);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbd090);
    FUN_02132f7c(PTR_DAT_04cb5990);
    FUN_02132f7c(PTR_DAT_04cb5998);
    FUN_02132f7c(PTR_DAT_04caa488);
    FUN_02132f7c(PTR_DAT_04cb18f8);
    FUN_02132f7c(PTR_DAT_04cb59a0);
    FUN_02132f7c(PTR_DAT_04cb1900);
    bRam0000000004f9c9c6 = 1;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (param_3 == 0) goto LAB_024c0288;
  uVar18 = *(undefined4 *)(param_3 + 0x20);
                    /* try { // try from 024bf8b4 to 025bfb6f has its CatchHandler @ 024bf8b4
                       catch() { ... } // from try @ 024bf8b4 with catch @ 024bf8b4
                       catch() { ... } // from try @ 024bfc38 with catch @ 024bf8b4
                       catch() { ... } // from try @ 024bfc64 with catch @ 024bf8b4
                       catch() { ... } // from try @ 024bfcc0 with catch @ 024bf8b4
                       catch() { ... } // from try @ 024c0068 with catch @ 024bf8b4 */
  if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar18,&uStack_b0,&uStack_b8,0);
  puVar2 = PTR_DAT_04caa488;
  puVar1 = PTR_DAT_04caa070;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_024c0288;
  fVar26 = *(float *)(param_3 + 0x18);
  fVar23 = SUB84((double)*(float *)(param_3 + 0x1c),0);
  fVar15 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                            ((double)fVar26,*(long *)(param_1 + 0x28),0);
  dVar25 = (double)*(float *)(param_3 + 0x1c);
  uVar7 = uStack_b0;
  uVar3 = uStack_b8;
  fVar16 = (float)Dino_BusSand_View_MechanicLayer__Dir_23c237c
                            ((double)*(float *)(param_3 + 0x18),dVar25,uStack_b0,uStack_b8,param_1);
  uVar18 = (undefined4)uVar3;
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  fVar24 = SUB84(dVar25,0);
  fVar27 = (float)uVar7;
  uVar3 = System_Int32__ToString_482d750(&iStack_a4,0);
  uVar3 = System_String__Concat_46d2b84(uVar12,*(undefined8 *)puVar2,uVar3,0);
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar4,uVar3,0);
  if (lVar4 == 0) goto LAB_024c0288;
  lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
  uVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  puVar1 = PTR_DAT_04cb5990;
  if (lVar4 == 0) goto LAB_024c0288;
  UnityEngine_Transform__SetParent_43d1e34(lVar4,uVar3,0,0);
  fVar32 = fVar26;
  UnityEngine_Transform__set_position_43d0f1c(fVar15,fVar23,fVar26,lVar4,0);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  fVar17 = (float)iStack_a4 * _UNK_00e20af8 + _UNK_00e20328;
  fVar30 = _UNK_00e20328;
  uVar5 = System_String__op_Equality_46d1108(uVar3,*(undefined8 *)puVar1,0);
  fVar19 = _UNK_00e2038c;
  if ((uVar5 & 1) == 0) {
    uVar5 = System_String__op_Equality_46d1108(uVar3,*(undefined8 *)PTR_DAT_04cb5998,0);
    fVar19 = _UNK_00e20178;
    if ((uVar5 & 1) == 0) {
      uVar5 = System_String__op_Equality_46d1108(uVar3,*(undefined8 *)PTR_DAT_04cb59a0,0);
      if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 024bfbe0 with catch @ 024bfc90 */
                    /* catch() { ... } // from try @ 024bfbb4 with catch @ 024bfc94 */
                    /* catch() { ... } // from try @ 024bfb98 with catch @ 024bfc98 */
                    /* catch() { ... } // from try @ 024bfb9c with catch @ 024bfc9c */
                    /* catch() { ... } // from try @ 024bfb70 with catch @ 024bfca0 */
        uVar5 = System_String__op_Equality_46d1108(uVar3,*(undefined8 *)PTR_DAT_04cb1900,0);
        if ((uVar5 & 1) == 0) {
          uVar7 = System_String__op_Equality_46d1108(uVar3,*(undefined8 *)PTR_DAT_04cb18f8,0);
          if ((uVar7 & 1) != 0) {
            Dino_BusSand_View_MechanicLayer__BuildDune_23c2c18
                      (fVar15,fVar23,fVar26,fVar16,(ulong)dVar25 & 0xffffffff,fVar27,fVar17,param_1,
                       iStack_a4,param_3,lVar4);
          }
          goto LAB_024c0238;
        }
        uVar3 = *(undefined8 *)(param_3 + 0x30);
                    /* try { // try from 024bfcbc to 025bfcbf has its CatchHandler @ 024c005c */
                    /* try { // try from 024bfcc0 to 025c005f has its CatchHandler @ 024bf8b4 */
        if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar20 = Dino_BusSand_Core_SandPalette__Id_2419278(uVar3,0);
        if ((uVar20 & 0xff) == 0) {
          uVar18 = 0x3f800000;
          fVar30 = 1.0;
          fVar32 = 1.0;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar18 = Dino_BusSand_View_PackPalette__Main_2390528(uVar20,0);
        }
        if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar21 = 0x3f800000;
        uVar3 = Dino_BusSand_View_PropKit__Gate_23dda40(uVar18,fVar30,fVar32,0x3f800000,0);
        uVar5 = (ulong)dVar25 & 0xffffffff;
        uVar18 = UnityEngine_Quaternion__LookRotation_43af354(fVar16,uVar5,uVar7 & 0xffffffff,0);
        lVar6 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                          (fVar15,fVar23,fVar26,uVar18,uVar5 & 0xffffffff,fVar27,uVar21,param_1,
                           uVar3,lVar4,0);
        if (lVar6 == 0) goto LAB_024c0288;
        lVar13 = *(long *)(param_1 + 0x80);
        uVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                          (lVar6,*(undefined8 *)PTR_DAT_04cb7780);
        dStack_c8 = 0.0;
        uStack_c0 = 0;
        System_ValueTuple_byte__object____ctor_30d78dc
                  (&dStack_c8,uVar20,uVar3,*(undefined8 *)PTR_DAT_04cbd090);
        if (lVar13 == 0) goto LAB_024c0288;
        lVar10 = *(long *)(lVar13 + 0x10);
        lVar11 = *(long *)PTR_DAT_04cbd080;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_024c0288;
        uVar20 = *(uint *)(lVar13 + 0x18);
        if (uVar20 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar20 * 0x10;
          *(uint *)(lVar13 + 0x18) = uVar20 + 1;
          puVar8 = (undefined8 *)(lVar10 + 0x28);
          *puVar8 = uStack_c0;
          *(double *)(lVar10 + 0x20) = dStack_c8;
          thunk_FUN_02134474(puVar8,0);
        }
        else {
          System_Collections_Generic_List_ValueTuple_byte__object____AddWithResize_399f328
                    (lVar13,dStack_c8,uStack_c0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
                    /* try { // try from 024bfb70 to 025bfb77 has its CatchHandler @ 024bfca0 */
                    /* try { // try from 024bfb98 to 025bfb9b has its CatchHandler @ 024bfc98 */
                    /* try { // try from 024bfb9c to 025bfbab has its CatchHandler @ 024bfc9c */
        if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 024bfbb4 to 025bfbcf has its CatchHandler @ 024bfc94 */
        uVar3 = Dino_BusSand_View_PropKit__get_Planter_23dd5c8(0);
        uVar21 = UnityEngine_Quaternion__LookRotation_43af354
                           (fVar16,(ulong)dVar25 & 0xffffffff,uVar7 & 0xffffffff,0);
                    /* try { // try from 024bfbdc to 025bfbdf has its CatchHandler @ 024bfc74 */
                    /* try { // try from 024bfbe0 to 025bfbef has its CatchHandler @ 024bfc90 */
        if (cRam0000000004f9b65e == '\0') {
                    /* try { // try from 024bfbf4 to 025bfc03 has its CatchHandler @ 024bfc78 */
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
                    /* try { // try from 024bfc0c to 025bfc17 has its CatchHandler @ 024bfc7c */
                    /* try { // try from 024bfc2c to 025bfc37 has its CatchHandler @ 024bfc64 */
                    /* try { // try from 024bfc38 to 025bfc5b has its CatchHandler @ 024bf8b4 */
        lVar6 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                          (fVar15,fVar23,fVar26,uVar21,fVar24,fVar27,uVar18,param_1,uVar3,lVar4,0);
                    /* try { // try from 024bfc5c to 025bfc5f has its CatchHandler @ 024bfc8c */
                    /* try { // try from 024bfc60 to 025bfc63 has its CatchHandler @ 024bfc88 */
                    /* catch() { ... } // from try @ 024bfc2c with catch @ 024bfc64
                       try { // try from 024bfc64 to 025bfcbb has its CatchHandler @ 024bf8b4 */
      }
      Dino_BusSand_View_MechanicLayer__PopIn_23c2a68(fVar17,_UNK_00e20104,param_1,lVar6);
    }
    else {
      fVar30 = *(float *)(param_3 + 0x24);
      if (cRam0000000004f9b891 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b891 = '\x01';
      }
      fVar30 = fVar30 / fVar19;
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar31 = (double)fVar30;
      dVar22 = (double)FUN_049b52f0(dVar31,&dStack_c8);
      puVar2 = PTR_DAT_04cbd088;
      puVar1 = PTR_DAT_04cac5d0;
      fVar32 = _UNK_00e2043c;
      uVar18 = _UNK_00e20104;
      if (0.0 <= fVar30) {
        if (dVar22 == 0.5) {
                    /* catch() { ... } // from try @ 024bfbdc with catch @ 024bfc74 */
          dVar22 = 1.0;
                    /* catch() { ... } // from try @ 024bfbf4 with catch @ 024bfc78 */
          goto LAB_024bfc7c;
        }
        dVar31 = (double)(long)(dVar31 + 0.5);
      }
      else if (dVar22 == -0.5) {
        dVar22 = -1.0;
LAB_024bfc7c:
                    /* catch() { ... } // from try @ 024bfc0c with catch @ 024bfc7c */
        dVar31 = dStack_c8;
                    /* catch() { ... } // from try @ 024bfc60 with catch @ 024bfc88 */
        if (((long)dStack_c8 & 1U) != 0) {
          dVar31 = dStack_c8 + dVar22;
        }
      }
      else {
        dVar31 = (double)(long)(dVar31 + -0.5);
      }
      iVar9 = (int)dVar31;
      iVar14 = 0;
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      fVar30 = *(float *)(param_3 + 0x24);
      if (dVar31 == INFINITY) {
        iVar9 = 1;
      }
      do {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = Dino_BusSand_View_PropKit__get_FencePanel_23dd4b0(0);
        fVar19 = *(float *)(param_1 + 0x50);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        fVar29 = (fVar30 / (float)iVar9) * ((float)iVar14 - (float)(iVar9 + -1) / 2.0);
        uVar7 = (ulong)dVar25 & 0xffffffff;
        fVar28 = fVar27;
        fVar33 = fVar15;
        uVar21 = Dino_BusSand_View_MechanicLayer__AlongX_23c24ac(fVar16,uVar7);
                    /* catch() { ... } // from try @ 024bfcbc with catch @ 024c005c */
                    /* try { // try from 024c0060 to 025c0067 has its CatchHandler @ 024c0070 */
                    /* try { // try from 024c0068 to 025c0073 has its CatchHandler @ 024bf8b4 */
                    /* catch() { ... } // from try @ 024c0060 with catch @ 024c0070 */
        uVar3 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                          (fVar15 + fVar16 * fVar29 * fVar19,fVar23 + fVar24 * fVar29 * fVar19,
                           fVar26 + fVar27 * fVar29 * fVar19,uVar21,uVar7 & 0xffffffff,fVar28,fVar33
                           ,param_1,uVar3,lVar4,0);
        Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                  (fVar17 + (float)iVar14 * fVar32,uVar18,param_1,uVar3);
        iVar14 = iVar14 + 1;
      } while (iVar9 != iVar14);
    }
  }
  else {
    fVar30 = *(float *)(param_3 + 0x24);
    if (cRam0000000004f9b891 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b891 = '\x01';
    }
    fVar30 = fVar30 / fVar19;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar31 = (double)fVar30;
    dVar22 = (double)FUN_049b52f0(dVar31,&dStack_c8);
    puVar2 = PTR_DAT_04cbd088;
    puVar1 = PTR_DAT_04caa208;
    fVar32 = _UNK_00e2043c;
    uVar18 = _UNK_00e20104;
    if (0.0 <= fVar30) {
      if (dVar22 == 0.5) {
        dVar22 = 1.0;
        goto LAB_024bfb30;
      }
      dVar31 = (double)(long)(dVar31 + 0.5);
    }
    else if (dVar22 == -0.5) {
      dVar22 = -1.0;
LAB_024bfb30:
      dVar31 = dStack_c8;
      if (((long)dStack_c8 & 1U) != 0) {
        dVar31 = dStack_c8 + dVar22;
      }
    }
    else {
      dVar31 = (double)(long)(dVar31 + -0.5);
    }
    iVar9 = (int)dVar31;
    iVar14 = 0;
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    if (dVar31 == INFINITY) {
      iVar9 = 1;
    }
    fVar19 = *(float *)(param_3 + 0x24) / (float)iVar9;
    fVar30 = *(float *)(param_3 + 0x28);
    if (fVar19 <= *(float *)(param_3 + 0x28)) {
      fVar30 = fVar19;
    }
    fVar30 = fVar30 / _UNK_00e205e8;
    fVar19 = _UNK_00e1feac;
    if (fVar30 <= _UNK_00e1feac) {
      fVar19 = fVar30;
    }
    fVar28 = _UNK_00e20170;
    if (_UNK_00e20170 <= fVar30) {
      fVar28 = fVar19;
    }
    uVar7 = (ulong)(uint)fVar28;
    do {
      uVar21 = (undefined4)uVar7;
      fVar30 = *(float *)(param_3 + 0x24);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_View_PropKit__get_Cone_23dd398(0);
      fVar33 = *(float *)(param_1 + 0x50);
      fVar19 = fVar24;
      fVar28 = fVar27;
      uVar20 = UnityEngine_Quaternion__LookRotation_43af354(fVar16,(ulong)dVar25 & 0xffffffff,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(puVar1);
        cRam0000000004f9b65e = '\x01';
      }
      fVar30 = (((float)iVar14 - (float)(iVar9 + -1) / 2.0) * fVar30) / (float)iVar9;
      uVar7 = (ulong)uVar20;
      uVar3 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                        (fVar15 + fVar16 * fVar30 * fVar33,fVar23 + fVar24 * fVar30 * fVar33,
                         fVar26 + fVar27 * fVar30 * fVar33,uVar7,fVar19,fVar28,uVar21,param_1,uVar3,
                         lVar4,0);
      Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                (fVar17 + (float)iVar14 * fVar32,uVar18,param_1,uVar3);
      iVar14 = iVar14 + 1;
    } while (iVar9 != iVar14);
  }
LAB_024c0238:
  if (*(long *)(param_1 + 0x70) != 0) {
    System_Collections_Generic_Dictionary_int__object___set_Item_3437318
              (*(long *)(param_1 + 0x70),iStack_a4,lVar4,*(undefined8 *)PTR_DAT_04cbd078);
    return;
  }
LAB_024c0288:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

