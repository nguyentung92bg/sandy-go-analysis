/* IL2CPP: Dino.BusSand.View.ChainRig$$DrawHitch
void Dino_BusSand_View_ChainRig__DrawHitch (Dino_BusSand_View_ChainRig_o* __this, Dino_BusSand_View_ChainRig_Hitch_o* h, Dino_BusSand_View_VehicleView_o* a, Dino_BusSand_View_VehicleView_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$DrawHitch
   void Dino_BusSand_View_ChainRig__DrawHitch (Dino_BusSand_View_ChainRig_o* __this,
   Dino_BusSand_View_ChainRig_Hitch_o* h, Dino_BusSand_View_VehicleView_o* a,
   Dino_BusSand_View_VehicleView_o* b, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__DrawHitch_2393f44
               (undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,long param_5,
               long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  ulong uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_98;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c8d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc0f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8d6 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_48 = 0;
  uStack_98 = 0;
  if (param_5 != 0) {
    uVar11 = *(undefined8 *)(param_5 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if ((param_6 != 0) &&
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_6,0), lVar8 != 0)) {
      uVar7 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        if ((param_7 == 0) ||
           (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_7,0), lVar8 == 0))
        goto LAB_0249453c;
        uVar5 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar8,0);
      }
      if ((*(long *)(param_5 + 0x20) != 0) &&
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_5 + 0x20),0),
         lVar8 != 0)) {
        uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
        if ((uVar5 & 1) != (uVar6 & 1)) {
          if ((*(long *)(param_5 + 0x20) == 0) ||
             (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_5 + 0x20),0),
             lVar8 == 0)) goto LAB_0249453c;
          UnityEngine_GameObject__SetActive_43c1408(lVar8,uVar5 & 1,0);
        }
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (*(long *)(param_6 + 0x38) != 0) {
          fVar12 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_6 + 0x38),0);
          if (*(long *)(param_6 + 0x38) != 0) {
            fVar24 = param_3;
            fVar13 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_6 + 0x38),0);
                    /* try { // try from 024940bc to 025942df has its CatchHandler @ 024940bc
                       catch() { ... } // from try @ 024940bc with catch @ 024940bc
                       catch() { ... } // from try @ 02494324 with catch @ 024940bc
                       catch() { ... } // from try @ 02494368 with catch @ 024940bc
                       catch() { ... } // from try @ 024943a4 with catch @ 024940bc
                       catch() { ... } // from try @ 024943d0 with catch @ 024940bc */
            if (cRam0000000004f9b65c == '\0') {
              FUN_02132f7c(PTR_DAT_04caa200);
              cRam0000000004f9b65c = '\x01';
            }
            puVar2 = PTR_DAT_04caa200;
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            puVar3 = PTR_DAT_04caa208;
            fVar21 = fVar13 * fVar13;
            fVar23 = SQRT(fVar24 * fVar24 + fVar21);
            if (fVar23 <= _UNK_00e20a08) {
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
              puVar9 = *(ulong **)(*(long *)puVar3 + 0xb8);
              uVar7 = *puVar9;
              fVar24 = *(float *)(puVar9 + 1);
            }
            else {
              fVar24 = fVar24 / fVar23;
              uVar7 = CONCAT44(0.0 / fVar23,fVar13 / fVar23);
              fVar21 = fVar23;
            }
            if ((param_7 != 0) && (*(long *)(param_7 + 0x38) != 0)) {
              fVar13 = (float)UnityEngine_Transform__get_position_43d0e48
                                        (*(long *)(param_7 + 0x38),0);
              Dino_BusSand_View_ChainRig__Lengths_2391808
                        (param_4,param_6,param_7,(long)&uStack_48 + 4,&uStack_48);
              puVar4 = PTR_DAT_04cbc0f8;
              if ((*(char *)(param_5 + 0x34) == '\0') || (0.0 <= *(float *)(param_5 + 0x54))) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (lVar8 = *(long *)(*(long *)(param_4 + 0x10) + 0x58), lVar8 == 0))
                goto LAB_0249453c;
                System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
                          (lVar8,*(undefined4 *)(param_6 + 0x20),(long)&uStack_98 + 4,
                           *(undefined8 *)PTR_DAT_04cbc0f8);
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (lVar8 = *(long *)(*(long *)(param_4 + 0x10) + 0x58), lVar8 == 0))
                goto LAB_0249453c;
                System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
                          (lVar8,*(undefined4 *)(param_7 + 0x20),&uStack_98,*(undefined8 *)puVar4);
                uVar18 = uStack_98._4_4_;
                if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                dVar19 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar18,0);
                fVar14 = (float)Dino_BusSand_View_VehicleView__get_CellWorld_2400ff8(param_6,0);
                fVar14 = fVar14 * (float)dVar19 * 0.5;
                dVar19 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0
                                           (uStack_98 & 0xffffffff,0);
                fVar15 = (float)Dino_BusSand_View_VehicleView__get_CellWorld_2400ff8(param_7,0);
                fVar23 = (float)dVar19 * 0.5;
                fVar16 = ((fVar24 * (param_3 - fVar21) +
                          (float)uVar7 * (fVar12 - fVar13) + (float)(uVar7 >> 0x20) * 0.0) - fVar14)
                         - fVar15 * fVar23;
                fVar15 = 0.0;
                if (0.0 <= fVar16) {
                  fVar15 = fVar16;
                }
                fVar14 = fVar14 + fVar15 * 0.5;
              }
              else {
                fVar14 = uStack_48._4_4_;
              }
              fVar17 = (float)atan2f(uVar7 & 0xffffffff,fVar24);
              fVar16 = _UNK_00e20a74;
              fVar15 = _UNK_00e20410;
              uVar22 = 0;
              lVar8 = *(long *)(param_5 + 0x20);
                    /* try { // try from 024942e0 to 025942e7 has its CatchHandler @ 02494384 */
              fVar17 = fVar17 * _UNK_00e20410;
              uVar20 = (ulong)(uint)(fVar17 * _UNK_00e20a74);
              uVar18 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,uVar20,0,0);
              if (lVar8 != 0) {
                    /* try { // try from 02494314 to 02594323 has its CatchHandler @ 0249437c */
                    /* try { // try from 02494324 to 02594363 has its CatchHandler @ 024940bc */
                param_3 = param_3 - fVar24 * fVar14;
                fVar12 = fVar12 - fVar14 * (float)uVar7;
                UnityEngine_Transform__SetPositionAndRotation_43d2064
                          (fVar12,param_2,param_3,uVar18,uVar20 & 0xffffffff,uVar22,fVar23,lVar8,0);
                lVar8 = *(long *)(param_5 + 0x20);
                if (cRam0000000004f9b65e == '\0') {
                    /* try { // try from 02494364 to 02594367 has its CatchHandler @ 02494380 */
                    /* try { // try from 02494368 to 0259439f has its CatchHandler @ 024940bc */
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65e = '\x01';
                }
                if (lVar8 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02494314 with catch @ 0249437c
                        */
                  fVar24 = *(float *)(param_6 + 0xb0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02494364 with catch @ 02494380
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024942e0 with catch @ 02494384
                        */
                  lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
                    /* try { // try from 024943a0 to 025943a3 has its CatchHandler @ 024943c4 */
                  UnityEngine_Transform__set_localScale_43d1be0
                            (fVar24 * *(float *)(lVar10 + 0xc),fVar24 * *(float *)(lVar10 + 0x10),
                             *(float *)(lVar10 + 0x14) * fVar24,lVar8,0);
                    /* try { // try from 024943a4 to 025943c7 has its CatchHandler @ 024940bc */
                  uVar11 = *(undefined8 *)(param_5 + 0x28);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                    /* catch() { ... } // from try @ 024943a0 with catch @ 024943c4 */
                  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
                    /* try { // try from 024943c8 to 025943cf has its CatchHandler @ 024943d8 */
                  if ((uVar7 & 1) == 0) {
                    /* try { // try from 02494510 to 0259451b has its CatchHandler @ 024943dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02494508 with catch @ 02494518
                        */
                    return;
                  }
                    /* try { // try from 024943d0 to 025943db has its CatchHandler @ 024940bc */
                  fVar12 = fVar12 - fVar13;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024943c8 with catch @ 024943d8
                        */
                  param_3 = param_3 - fVar21;
                    /* try { // try from 024943dc to 02594477 has its CatchHandler @ 024943dc
                       catch() { ... } // from try @ 024943dc with catch @ 024943dc
                       catch() { ... } // from try @ 02494480 with catch @ 024943dc
                       catch() { ... } // from try @ 024944c4 with catch @ 024943dc
                       catch() { ... } // from try @ 024944ec with catch @ 024943dc
                       catch() { ... } // from try @ 02494510 with catch @ 024943dc */
                  fVar24 = fVar12 * fVar12 + param_3 * param_3;
                  fVar12 = fVar17;
                  if (_UNK_00e1fe00 < fVar24) {
                    fVar12 = (float)atan2f();
                    fVar12 = fVar12 * fVar15;
                  }
                  lVar8 = *(long *)(param_5 + 0x28);
                  fVar13 = (fVar12 - fVar17) + (float)(int)((fVar12 - fVar17) / 360.0) * -360.0;
                  fVar12 = 360.0;
                  if (fVar13 <= 360.0) {
                    fVar12 = fVar13;
                  }
                  fVar21 = 0.0;
                  if (0.0 <= fVar13) {
                    fVar21 = fVar12;
                  }
                  fVar12 = fVar21 + -360.0;
                  if (fVar21 <= 180.0) {
                    fVar12 = fVar21;
                  }
                  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar12 * fVar16,0,0);
                  if (lVar8 != 0) {
                    UnityEngine_Transform__set_localRotation_43d156c(lVar8,0);
                    /* try { // try from 02494478 to 0259447f has its CatchHandler @ 024944cc */
                    /* try { // try from 02494480 to 025944bf has its CatchHandler @ 024943dc */
                    fVar13 = *(float *)(param_5 + 0x30) * *(float *)(param_6 + 0xb0);
                    fVar12 = _UNK_00e20948;
                    if (_UNK_00e20948 <= fVar13) {
                      fVar12 = fVar13;
                    }
                    if (cRam0000000004f9c959 == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa200);
                      cRam0000000004f9c959 = '\x01';
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    /* try { // try from 024944c0 to 025944c3 has its CatchHandler @ 024944c8 */
                    /* try { // try from 024944c4 to 025944e7 has its CatchHandler @ 024943dc */
                    if (*(long *)(param_5 + 0x28) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024944c0 with catch @ 024944c8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02494478 with catch @ 024944cc
                        */
                      fVar24 = (SQRT(fVar24) - (float)uStack_48) / fVar12 + 1.0;
                    /* try { // try from 024944e8 to 025944eb has its CatchHandler @ 02494504 */
                    /* try { // try from 024944ec to 02594507 has its CatchHandler @ 024943dc */
                      fVar12 = _UNK_00e2032c;
                      if (fVar24 <= _UNK_00e2032c) {
                        fVar12 = fVar24;
                      }
                      fVar13 = _UNK_00e20590;
                    /* catch() { ... } // from try @ 024944e8 with catch @ 02494504 */
                      if (_UNK_00e20590 <= fVar24) {
                        fVar13 = fVar12;
                      }
                    /* try { // try from 02494508 to 0259450f has its CatchHandler @ 02494518 */
                      UnityEngine_Transform__set_localScale_43d1be0
                                (0x3f800000,0x3f800000,fVar13,*(long *)(param_5 + 0x28),0);
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
  }
LAB_0249453c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

